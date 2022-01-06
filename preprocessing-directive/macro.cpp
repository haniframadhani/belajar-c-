// preprocessing derective
#include <iostream>

// mengubah nilai dengan nama
#define PI 3.14285714
#define BAHASA "indonesia"

// macro untuk fungsi
#define KUADRAT(X) (X * X)
#define MAX(A, B) ((A > B) ? A : B)

// akhir dari prepocessing derective
using namespace std;

double pi = 3.14285714;

int main()
{
    cout << "nilai pi = " << PI << endl;
    cout << "bahasa = " << BAHASA << endl;
    cout << "kuadrat = " << KUADRAT(5) << endl;
    cout << "maksimum = " << MAX(5, 20) << endl;

#undef BAHASA
#define BAHASA "inggris"
    cout << BAHASA << endl;

    return 0;
}
