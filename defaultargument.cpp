#include <iostream>
using namespace std;
double volumeKubus(double panjang = 3, double lebar = 2, double tinggi = 1);

int main()
{
    cout << "volume kubus " << volumeKubus(3, 4, 5) << endl;
    cout << "volume kubus " << volumeKubus(3, 4) << endl;
    cout << "volume kubus " << volumeKubus(3) << endl;
    cout << "volume kubus " << volumeKubus() << endl;

    return 0;
}

// default argument
double volumeKubus(double panjang, double lebar, double tinggi)
{
    return panjang * lebar * tinggi;
}