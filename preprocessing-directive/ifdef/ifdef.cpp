#include <iostream>
#include "bersama.h"
#include "foo.h"
#include "bar.h"

// // ifdef
// #ifdef FOO
// #define TEST_FOO "FOO ada"

// #else
// #define TEST_FOO "FOO tidak ada"

// #endif

// // ifndef
// #ifndef FOO
// #define FOO "FOO baru"

// #endif

// pragma once

using namespace std;
int main()
{
	mahasiswa mahasiswa;
	mahasiswa.nim = 10;
	cout << mahasiswa.nim << endl;

	return 0;
}
