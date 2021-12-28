#include <iostream>
using namespace std;
union nama
{
    int int_value;
    char char_value[4];
};
int main()
{
    nama name;
    name.int_value = 12345642;
    cout << "int_value : " << name.int_value << endl;
    cout << "char_value : " << name.char_value << endl;

    name.char_value[0] = 'a';
    name.char_value[1] = 'b';
    name.char_value[2] = 'c';
    name.char_value[3] = 'd';

    cout << "int_value : " << name.int_value << endl;
    cout << "char_value : " << name.char_value << endl;

    return 0;
}
