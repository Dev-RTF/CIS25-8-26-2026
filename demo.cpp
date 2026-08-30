#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // int age;

    // cout << "Enter your age: ";
    // cin >> age;

    // cout << "You are " << age << " years old!" << endl;

    // take in a string, stops at space
    // string fname;

    // cout << "Enter your first name: ";
    // cin >> fname;

    // cout << "You are " << fname << "." << endl;

    // take in full lines
    string name;
    cout << "Enter your first and last name: ";
    getline(cin, name);

    cout << "You are " << name << "." << endl;

    // type casting
    int a = 10;
    int b = 4;

    double result = static_cast<double>(a) / b;
    cout << a << " / " << b << " = " << result << endl;

    double price = 19.99;
    double tax = price * 0.0825;

    cout << fixed << setprecision(2); // uses iomanip: anything after this will be presented with 2 decimal places
    cout << "Price: $" << setw(10) << price << endl; // setw() sets space in between
    cout << "Tax: $" << setw(12) << tax << endl;
    cout << "Total: $" << setw(10) << (price + tax) << endl;

    return 0;
}