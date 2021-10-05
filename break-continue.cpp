#include <iostream>
using namespace std;
int main()
{
	int i = 0;
	while (i <= 10)
	{
		i++;
		if (i == 5)
		{
			continue;
			// break;
		}
		cout << i << endl;
	}
	cout << "akhir" << endl;

	return 0;
}