#include <iostream>
using namespace std;
int main()
{
	// f(n) = f(n-1)+f(n-2)
	int n;
	int f_n;
	int f_n1;
	int f_n2;
	cout << "program deret fibonacci\n";
	cout << "masukkan nilai n : ";
	cin >> n;
	f_n1 = 1;
	f_n2 = 0;
	f_n = f_n1 + f_n2;
	cout << f_n2 << " ";
	cout << f_n1 << " ";
	for (int i = 1; i < n; i++)
	{
		f_n = f_n1 + f_n2;
		f_n2 = f_n1;
		f_n1 = f_n;
		cout << f_n << " ";
	}
	cout << "\n";

	return 0;
}