#include <iostream>
using namespace std;
int main()
{
	float a, b, hasil;
	char aritmatika;
	cout << "selamat datang di program kalkulator" << endl;
	// masukkan input dari user
	cout << "masukkan nilai pertama : ";
	cin >> a;
	cout << "masukkan operator +,-,*,/ : ";
	cin >> aritmatika;
	cout << "masukkan nilai kedua : ";
	cin >> b;
	cout << "\nhasil perhitungan : ";
	cout << a << aritmatika << b;
	if (aritmatika == '+')
	{
		hasil = a + b;
	}
	else if (aritmatika == '-')
	{
		hasil = a - b;
	}
	else if (aritmatika == '*')
	{
		hasil = a * b;
	}
	else if (aritmatika == '/')
	{
		hasil = a / b;
	}
	else
	{
		cout << "operator salah" << endl;
	}
	cout << " = " << hasil << endl;
	return 0;
}