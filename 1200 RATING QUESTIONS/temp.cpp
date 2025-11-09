#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node {
    public:
    int val;
    node* next;
    node* prev;

    node(int vel,node* n = nullptr ,node* p = nullptr){
        next = n;
        prev = p;
        val = vel;
    }
};

int main() {
    cout << "PROGRAM RUNNING FINE!" << endl;
    node* head = new node(23);
    return 0;
}