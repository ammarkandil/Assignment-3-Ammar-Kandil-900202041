#include <iostream>
using namespace std;

class Link2 {
private:
    struct node {
        int data;
        node* next;
        node* prev;
    };
    node* head;
    node* back;
    int numofelements;

public:
    Link2();
    void print();
    int rfirst();
    int rlast();
    void insert();
    void remove();
    void sort();
    void sum();


};

