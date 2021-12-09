#include <iostream>
#include <array>
using namespace std;
int main()
{
	array<int, 10> nilai;
	cout << "menampilkan grafik nilai\n\n";
	for (int i = 0; i <= nilai.size(); i++)
	{
		cout << "jumlah mahasiswa dengan nilai ";
		if (i == 0)
		{
			cout << "0-9 : ";
		}
		else if (i == 10)
		{
			cout << "100 : ";
		}
		else
		{
			cout << i * 10 << "-" << (i * 10) + 9 << ": ";
		}
		cin >> nilai[i];
	}
	cout << "\ngrafik nilai\n\n";
	for (int i = 0; i <= nilai.size(); i++)
	{
		if (i == 0)
		{
			cout << "0-9  : ";
		}
		else if (i == 10)
		{
			cout << "100  : ";
		}
		else
		{
			cout << i * 10 << "-" << (i * 10) + 9 << ": ";
		}
		for (int j = 0; j < nilai[i]; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
