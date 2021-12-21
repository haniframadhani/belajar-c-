#include <iostream>
#include <string>
using namespace std;
int main()
{
	string kalimat1("dayat suka olahraga supaya sehat");
	string kalimat2("ucup suka makan pisang dipagi hari");
	cout << "1. " << kalimat1 << endl;
	cout << "2. " << kalimat2 << endl;

	// substring, mengambil string ditengah-tengah
	// substr(index, panjang)
	cout << kalimat1.substr(11, 8) << " ";
	cout << kalimat2.substr(16, 6) << endl;

	// mencari posisi dari substring
	cout << "posisi olahraga : ";
	cout << kalimat1.find("olahraga") << endl;
	cout << "posisi pisang : ";
	cout << kalimat2.find("pisang") << endl;

	int a = kalimat1.find("a");
	cout << a << endl;
	cout << kalimat1.find("a", a + 1) << endl;

	// mencari posisi dari belakang --> rfind
	cout << kalimat2.rfind("i") << endl;

	return 0;
}
