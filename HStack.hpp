#pragma once
#include <iostream>
using namespace std;
struct Node {
    int value;
    Node* next;
    Node(int val);
};
    
class Stack {
    private:
        Node* head;
    
    public:
        Stack();
        Stack(int value);
        Stack(int value, int count);
        ~Stack();

        Stack operator+(Stack& otherSt);
    
        void print() const;
};