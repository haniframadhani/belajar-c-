#include <iostream>
#include <cmath>
using namespace std;
/*
library cmath : referensi cppreference.com
ceil(x)   -> pembulatan keatas
cos(x)    -> cosinus
exp(x)    -> eksponen
fabs(x)   -> nilai absolute dalam float
floor(x)  -> pembulatan kebawah
fmod(x)   -> modulus dalam float
log(x)    -> logaritma dalam baris natural
log10(x)  -> logaritma dalam baris 10
pow(x, y) -> x pangkat y
sin(x)    -> sinus
sqrt(x)   -> akar kuadrat
tan(x)    -> tangen
*/
int main()
{
    int x;
    cout << "menghitung akar dari x : ";
    cin >> x;
    double y = sqrt(x);
    cout << "akarnya adalah " << y << endl;

    return 0;
}