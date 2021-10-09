#include <iostream>

using namespace std;

void swap_version2(int*& p1, int*& p2) {
    int* address = p2;
    p2 = p1;
    p1 = address;
}

void swap_version1(int& left, int& right) {
    int value = right;
    right = left;
    left = value;
}

int main() {
    int x, y;
    x = 3;
    y = 5;

    int z, q;
    z = 4;
    q = 3;

    int* pointer_z = &z;
    int* pointer_q = &q;

    cout << "Now x is " << x << endl;
    cout << "Now y is " << y << "\n" << endl;

    cout << "Now z is " << z << endl;
    cout << "Now q is " << q << "\n" << endl;

    swap_version1(x, y);
    swap_version2(pointer_z, pointer_q);

    cout << "But now x = " << x << endl;
    cout << "But now y = " << y << "\n" << endl;

    cout << "But now z is " << *pointer_z << endl;
    cout << "But now q is " << *pointer_q << endl;

    return 0;
}