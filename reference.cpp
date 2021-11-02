#include <iostream>
using namespace std;
int main()
{
    // variable
    int a = 5;
    cout << "   alamat dari a : " << &a << endl;
    cout << "nilai dari a : " << a << endl;
    cout << "\n";
    // reference
    int &b = a;
    cout << "   nilai dari b : " << b << endl;
    cout << "alamat dari b : " << &b << endl;
    cout << "\n";

    b = 10;
    cout << "   nilai dari a : " << a << endl;
    cout << "   nilai dari b : " << b << endl;
    cout << "\n";

    a = 20;
    cout << "   nilai dari a : " << a << endl;
    cout << "   nilai dari b : " << b << endl;

    return 0;
}