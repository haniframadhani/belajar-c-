#include <iostream>
using namespace std;

// overloading
// basic function
int luasKotak(int panjang, int lebar)
{
    int luas = panjang * lebar;
    return luas;
}
// overloading function
int luasKotak(int sisi)
{
    int luas = sisi * sisi;
    return luas;
}

double luasKotak(double sisi)
{
    int luas = sisi * sisi;
    return luas;
}

double luasKotak(double panjang, double lebar)
{
    double luas = panjang * lebar;
    return luas;
}

int main()
{
    cout << "luas kotak 2 x 3 : " << luasKotak(2, 3) << endl;
    cout << "luas kotak 2 x 2 : " << luasKotak(2) << endl;
    cout << "luas kotak 2.5 x 2.5 : " << luasKotak(2.5) << endl;

    return 0;
}