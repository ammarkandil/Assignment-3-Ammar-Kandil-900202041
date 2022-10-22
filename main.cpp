#include <iostream>
#include <Link 2 main.hpp>
#include <vector>
using namespace std;
void insertafter(int Num1, int Num2, vector<int>& vec)
{
    vector<int>::iterator Iter;
        for (Iter= vec.begin(); Iter != vec.end(); Iter++) {
            if (*Iter == Num1) {
                vec.insert(Iter + 1, Num2);
                break;
            }

        }
    }


int main() {
    int size,data,Num1,Num2;
    cout<<"Enter the size of the vector please : ";
    cin>>size;
    vector<int> v;

    for(int i=0;i<size;i++)
    {
        
        cout<<"Enter data for index " << i+1 <<" : ";
        cin>>data;
        v.push_back(data);
    }
    cout<<"Please enter number to search for: ";
    cin>>Num1;
    cout<<"Enter the second number" <<Num1<<" : ";
    cin>>Num2;
    insertafter(Num1,Num2, v);
    
    for (size_t i=0;i < v.size(); i++) {
        cout<<"Vec["<<i+1<<"] = "<<v.at(i)<<endl;
        }
    
    Link Link1;
    Link1.options();

}


