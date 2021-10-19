#include <iostream>
using namespace std;

int x = 10; // variable global

int ambilGlobal()
{
	return x; // mengambil variable global
}

int xLocal()
{
	int x = 5; // variable local scopenya xLocal()
	return x;
}

int main()
{
	cout << "1. variable global : " << x << endl;
	int x = 8; // variable local untuk main
	cout << "2. variable local main : " << x << endl;
	cout << "3. variable ambilGlobal : " << ambilGlobal() << endl;
	cout << "4. variable local main : " << x << endl;
	cout << "5. variable xLocal : " << xLocal() << endl;
	cout << "6. variable local main : " << x << endl;
	cout << "7. variable local main : " << x << endl;
	{
		cout << "8. variable local main : " << x << endl;
		int x = 1; // block scope
		cout << "9. variable local block : " << x << endl;
		cout << "10. variable global : " << ::x << endl;
	}
	cout << "11. variable local main : " << x << endl;

	return 0;
}