#include <iostream>
#include <string>
using namespace std;
int main()
{
	// perbandingan string
	string input;
	string namaRahasia("ucup");
	while (true)
	{
		cout << "tebak nama : ";
		cin >> input;
		cout << input << endl;
		cout << "nama yang dimasukkan adalah " << input << endl;
		if (input == namaRahasia)
		{
			cout << "tebakkan anda benar" << endl;
			break;
		}
		cout << "tebakkan anda salah" << endl;
	}
	cout << "program selesai" << endl;

	return 0;
}
