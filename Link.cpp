#include "Link.hpp"
#include "Link 2 main.hpp"
#include <iostream>
using namespace std;
void Link::options() {

    cout << "Insert element"<<endl;
    cout << "Remove element"<<endl;
    cout << "Print all elements of the vector"<<endl;
    cout << "Print First element"<<endl;
    cout << "Print Last element"<<endl;
    cout << "Sum";
    cout << "Choose an option: "<<endl;
    cin >> option;
    while (option < 0 && option>7) {
        cout << "Not an option"<<endl;
        cout << "Please choose another option: "<<endl;
        cin >> option;
    }
    switch (option) {
    case 1: {
        list.insert();
        options();
        break;
    }

    case 2: {
        list.print();
        options();
        break;
    }
    case 3: {
        list.sum();
        options();
        break;
    }
    case 4: {
        list.rfirst();
        options();
        break;
    }
    case 5: {
        list.rlast();
        options();
        break;

    }
    default: {
        cout << "Finish";
        break;
    }
    };



}
