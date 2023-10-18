#include <iostream>
using namespace std;

void MakeSquareByValue(int a, int b, int c) {
    a = a * a;
    b = b * b;
    c = c * c;
    cout << "Squared values inside the function: " << a << " " << b << " " << c << endl;
}

void MakeSquareByReference(int& a, int& b, int& c) {
    a = a * a;
    b = b * b;
    c = c * c;
    cout << "Squared values inside the function: " << a << " " << b << " " << c << endl;
}

void MakeSquareByPointer(int* a, int* b, int* c) {
    *a = (*a) * (*a);
    *b = (*b) * (*b);
    *c = (*c) * (*c);
    cout << "Squared values inside the function: " << *a << " " << *b << " " << *c << endl;
}

int main() {
    int x, y, z;

    cout << "Enter three integers: ";
    cin >> x >> y >> z;

    MakeSquareByValue(x, y, z);
    cout << "Squared values in main function: " << x << " " << y << " " << z << endl;

    x = y = z = 0;

    cout << "Enter three integers: ";
    cin >> x >> y >> z;

    MakeSquareByReference(x, y, z);
    cout << "Squared values in main function: " << x << " " << y << " " << z << endl;

    x = y = z = 0;

    cout << "Enter three integers: ";
    cin >> x >> y >> z;

    MakeSquareByPointer(&x, &y, &z);
    cout << "Squared values in main function: " << x << " " << y << " " << z << endl;

    return 0;
}
