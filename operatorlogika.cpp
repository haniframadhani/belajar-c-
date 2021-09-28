#include <iostream>
using namespace std;
int main()
{
	int a = 3;
	int b = 2;
	bool hasil;
	// operasi logika : not, or, and

	// not
	cout << "untuk not\n";
	hasil = !(a == 3);
	cout << hasil << endl;

	// and : kedua nilai harus benar untuk menghasilkan true
	cout << "untuk and" << endl;
	hasil = (a == 3) and (b == 2); // true and true
	cout << hasil << endl;
	hasil = (a == 4) and (b == 2); // false and true
	cout << hasil << endl;
	hasil = (a == 3) && (b == 3); // true and false
	cout << hasil << endl;
	hasil = (a == 4) && (b == 4); // false and false
	cout << hasil << endl;

	// or : salah satu nilai harus benar untuk menghasilkan true
	cout << "untuk or" << endl;
	hasil = (a == 3) or (b == 2); // true and true
	cout << hasil << endl;
	hasil = (a == 4) or (b == 2); // false and true
	cout << hasil << endl;
	hasil = (a == 3) || (b == 3); // true and false
	cout << hasil << endl;
	hasil = (a == 4) || (b == 4); // false and false
	cout << hasil << endl;

	return 0;
}