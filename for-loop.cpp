#include <iostream>
using namespace std;
int main()
{
	cout << "loop 1\n";
	for (int i = 1; i <= 10; i++)
	{
		cout << "hore ";
		cout << i << endl;
	}
	cout << "\n loop 2 \n";
	for (int i = 1; i <= 10; i += 2)
	{
		cout << "hore ";
		cout << i << endl;
	}
	cout << "\n loop 3 \n";
	for (int i = 1; i >= -10; i--)
	{
		cout << "hore ";
		cout << i << endl;
	}
	cout << "\n loop 4 \n";
	int total = 0;
	for (int i = 1; i <= 10; i++, total += i)
	{
		cout << i << " || " << total << endl;
	}

	return 0;
}