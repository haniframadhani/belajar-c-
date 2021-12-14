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
void printArray(std::array<char, arraySize> &angka)
{
	std::cout << "array: ";
	for (char &a : angka)
	{
		std::cout << a << " ";
	}
	std::cout << std::endl;
}
int main()
{
	std::array<int, arraySize> angka = {9, 1, 5, 2, 6, 3, 7, 4, 8, 0};
	std::array<char, arraySize> huruf = {'c', 'h', 'j', 'e', 'r', 't', 'y', 'v', 'b', 'a'};
	printArray(angka);
	printArray(huruf);
	std::cout << std::endl;
	std::sort(angka.begin(), angka.end());
	printArray(angka);
	std::sort(huruf.begin(), huruf.end());
	printArray(huruf);

	return 0;
}
