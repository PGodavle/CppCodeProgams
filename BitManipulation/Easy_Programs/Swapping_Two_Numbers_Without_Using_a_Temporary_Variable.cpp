#include <iostream>
using namespace std;

//The XOR (^) operator can be used to swap two numbers without using an extra variable. It works by exploiting the properties of XOR:

//a = a ^ b (stores combined bits)
//b = a ^ b (retrieves the original value of a)
//a = a ^ b (retrieves the original value of b)

int main() {
    int a = 5, b = 10;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
