#include <iostream>
using namespace std;

//The Least Significant bit(LSB) of an odd number is always 1, whereas for any even number , it is 0. USing the bitwise AND(&) operator with 1 helps determine this property.
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num & 1) {
        cout << "Odd number" << endl;
    } else {
        cout << "Even number" << endl;
    }

    return 0;
}
