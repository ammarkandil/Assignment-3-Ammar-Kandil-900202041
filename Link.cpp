#include "Link.hpp"
#include "Link 2 main.hpp"
#include <iostream>
using namespace std;
void Link::Nodes() {

    cout << "Insert element"<<endl;
    cout << "Remove element"<<endl;
    cout << "Print all elements of the vector"<<endl;
    cout << "Print First element"<<endl;
    cout << "Print Last element"<<endl;
    cout << "Sum";
    cout << "Choose a Node: "<<endl;
    cin >> Nodes;
    while (Nodes() < 0 && Nodes()>5) {
        cout << "Not a Node"<<endl;
        cout << "Please choose another : "<<endl;
        cin >> Nodes();
    }
    switch (Nodes) {
    case 1: {
        list.insert();
        Nodes();
        break;
    }

    case 2: {
        list.print();
        Nodes();
        break;
    }
    case 3: {
        list.sum();
        Nodes();
        break;
    }
    case 4: {
        list.first();
        Nodes();
        break;
    }
    case 5: {
        list.last();
        Nodes();
        break;

    }
    default: {
        cout << "Finish";
        break;
    }
    };



}
