#include <iostream>
#include <array>
#include <algorithm>
// using namespace std;

const size_t arraySize = 10;

void printArray(std::array<int, arraySize> &angka)
{
	std::cout << "array: ";
	for (int &a : angka)
	{
		std::cout << a << " ";
	}
	std::cout << std::endl;
}

int main()
{
	std::array<int, arraySize> angka = {9, 1, 5, 2, 6, 3, 7, 4, 8, 0};
	printArray(angka);
	int angkaCari = 5;
	bool ketemu;
	// sort dulu
	// kemudian search --> binary search
	std::cout << "cari angka dari array diatas : \n";
	std::cin >> angkaCari;
	std::sort(angka.begin(), angka.end());
	ketemu = std::binary_search(angka.begin(), angka.end(), angkaCari);

	if (ketemu)
	{
		std::cout << "ketemu" << std::endl;
	}
	else
	{
		std::cout << "tidak ketemu" << std::endl;
	}

	return 0;
}
