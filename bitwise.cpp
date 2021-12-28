#include <iostream>
#include <bitset>
#include <string>
using namespace std;
void printBinary(unsigned short val, string nama)
{
    cout << nama << " = " << bitset<8>(val) << endl;
}
int main()
{
    unsigned short a = 6;
    unsigned short b = 10;
    unsigned short c;

    cout << "& = bitwise AND" << endl;
    c = a & b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");
    cout << "c = " << c << endl;

    cout << "\n| = bitwise OR" << endl;
    c = a | b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");
    cout << "c = " << c << endl;

    cout << "\n^ = bitwise XOR" << endl;
    c = a ^ b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");
    cout << "c = " << c << endl;

    cout << "\n~ = bitwise NOT" << endl;
    c = ~a;
    printBinary(a, "a");
    printBinary(c, "c");
    cout << "c = " << c << endl;

    cout << "\n<< = bitwise SHL" << endl;
    c = a << 2;
    printBinary(a, "a");
    printBinary(c, "c");
    cout << "c = " << c << endl;

    cout << "\n>> = bitwise SHR" << endl;
    c = a >> 2;
    printBinary(a, "a");
    printBinary(c, "c");
    cout << "c = " << c << endl;

    return 0;
}
// bitwise operator
// &  AND bitwise AND
// |  OR bitwise inclusive OR
// ^  XOR bitwise exclusive OR
// ~  NOT
// << SHL shift bits left
// >> SHR shift bits right