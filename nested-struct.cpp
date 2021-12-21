#include <iostream>
#include <string>
using namespace std;

struct aktor
{
	string nama;
	int tahunLahir;
};

struct film
{
	string judul;
	string genre;
	int tahun;
	// struct akor
	aktor pemeran1;
	aktor pemeran2;
};

int main()
{
	aktor aktor1, aktor2;
	film film1, film2;
	// buat aktor 1
	aktor1.nama = "Michael Otong";
	aktor1.tahunLahir = 1992;

	// buat aktor 2
	aktor2.nama = "Sandra Bulog";
	aktor2.tahunLahir = 1995;

	// buat film
	film1.judul = "Pengabdi Wakanda";
	film1.genre = "Dokumenter";
	film1.tahun = 2018;
	film1.pemeran1 = aktor1;
	film1.pemeran2 = aktor2;

	film2.judul = "Dilan 2000";
	film2.genre = "Action";
	film2.tahun = 2040;
	film2.pemeran1 = aktor1;

	cout << film1.judul << endl;
	cout << film1.pemeran1.nama << endl;
	cout << film1.pemeran2.nama << endl;

	cout << film2.judul << endl;
	cout << film2.pemeran1.nama << endl;
	cout << film2.pemeran2.nama << endl;

	return 0;
}
