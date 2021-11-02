#include <iostream>
using namespace std;

// faktorial
int faktorial(int n);

int main()
{
	int angka, hasil;
	cout << "menghitung faktorial dari = ";
	cin >> angka;
	hasil = faktorial(angka);
	cout << "nilai faktorialnya adalah " << hasil << endl;

	return 0;
}

int faktorial(int n)
{
	if (n <= 1)
	{
		cout << n;
		return n;
	}
	else
	{
		cout << n << " x ";
		return n * faktorial(n - 1);
	}
}