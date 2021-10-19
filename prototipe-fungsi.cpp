#include <iostream>
using namespace std;

// prototipe
double luasPersegi(double panjang, double lebar);
void println(double x);

int main()
{
	double panjang, lebar, luas;
	cin >> panjang;
	cin >> lebar;
	luas = luasPersegi(panjang, lebar);
	println(luas);

	return 0;
}

double luasPersegi(double panjang, double lebar)
{
	return panjang * lebar;
}

void println(double x)
{
	cout << "hasil : " << x << endl;
}