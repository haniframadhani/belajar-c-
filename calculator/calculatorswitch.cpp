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
	switch (aritmatika)
	{
	case '+':
		hasil = a + b;
		break;
	case '-':
		hasil = a - b;
		break;
	case '*':
		hasil = a * b;
		break;
	case '/':
		hasil = a / b;
		break;
	}
	cout << " = " << hasil << endl;
	return 0;
}