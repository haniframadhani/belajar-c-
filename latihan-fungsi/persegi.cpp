#include <iostream>
using namespace std;
// luas persegi panjang
double hitungLuas(double panjang, double lebar)
{
	double luas = panjang * lebar;
	return luas;
}
// keliling persegi panjang
double hitungKeliling(double panjang, double lebar)
{
	double keliling = 2 * (panjang + lebar);
	return keliling;
}
void tampilkanLuas(double panjang, double lebar)
{
	cout << "luasnya adalah : " << hitungLuas(panjang, lebar) << endl;
}
void tampilkanKeliling(double panjang, double lebar)
{
	cout << "kelilingnya adalah : " << hitungKeliling(panjang, lebar) << endl;
}

int main()
{
	double panjang, lebar;
	cout << "masukkan panjang persegi : ";
	cin >> panjang;
	cout << "masukka lebar persegi : ";
	cin >> lebar;
	tampilkanLuas(panjang, lebar);
	tampilkanKeliling(panjang, lebar);

	return 0;
}