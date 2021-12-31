#include <iostream>
#include <string>
using namespace std;

int getOption();

int main()
{
	int pilihan = getOption();
	char is_continue;

	enum option
	{
		CREATE = 1,
		UPDATE,
		READ,
		DELETE,
		FINISH
	};

	while (pilihan != FINISH)
	{

		switch (pilihan)
		{
		case CREATE:
			cout << "menambah data mahasiswa" << endl;
			break;
		case READ:
			cout << "tampilkan data mahasiswa" << endl;
			break;
		case UPDATE:
			cout << "ubah data mahasiswa" << endl;
			break;
		case DELETE:
			cout << "hapus data mahasiswa" << endl;
			break;
		default:
			cout << "pilihan tidak ditemukan" << endl;
			break;
		}
	label_continue:

		cout << "lanjutkan?(y/n) : ";
		cin >> is_continue;
		if ((is_continue == 'y') | (is_continue == 'Y'))
		{
			pilihan = getOption();
		}
		else if ((is_continue == 'n') | (is_continue == 'N'))
		{
			break;
		}
		else
		{
			goto label_continue;
		}
	}

	cout << "akhir dari program" << endl;

	return 0;
}

int getOption()
{
	int input;
	system("cls");
	cout << "\nprogram CRUD data mahasiswa" << endl;
	cout << "=============================" << endl;
	cout << "1. tambah data mahasiswa" << endl;
	cout << "2. tampilkan data mahasiswa" << endl;
	cout << "3. ubah data mahasiswa" << endl;
	cout << "4. hapus data mahasiswa" << endl;
	cout << "5. selesai" << endl;
	cout << "=============================" << endl;
	cout << "pilih [1-5] = ";

	cin >> input;
	return input;
}
