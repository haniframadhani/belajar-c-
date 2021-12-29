#include <iostream>
#include <fstream> //ofstream, ifstream, fstream
using namespace std;
int main()
{
    ofstream myFile;

    // ios::out = default, operasi output
    // ios::app = menuliskan pada akhir baris
    // ios::trunc = default, membuat file jika tidak ada, jika ada akan dibuat baru dan yang lama dihapus

    myFile.open("data3.txt", ios::app); // append
    myFile << "\nmenuliskan baru pada data3";
    myFile.close();

    int a = 123876;
    myFile.open("data1.txt", ios::out);
    myFile << "menuliskan baru pada data1\n";
    myFile << a;
    myFile.close();

    myFile.open("data2.txt", ios::trunc);
    myFile << "\nmenuliskan baru pada data2";
    myFile.close();

    return 0;
}
