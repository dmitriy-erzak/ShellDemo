#include <iostream>
#include "HStack.hpp"
using namespace std;

int main() {
    Stack s1;
    s1.print();
    Stack s2(21);
    s2.print();
    Stack s3(2, 5);
    s3.print();

    Stack check1(1,2);
    Stack check2(3,2);
    Stack sp = check1 + check2;
    sp.print();
    return 0;
}