#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int nr, x1, x2, x3, x4, x5;
    cout << "Introduceti numarul de 5 cifre: " ;
    cin >> nr;    // 46852
    x5 = nr / 10000 ; // 4
    x4 = nr % 10000 / 1000 ; // 6
    x3 = nr % 1000 / 100 ; // 8
    x2 = nr % 100 / 10 ; // 5
    x1 = nr % 10 ; // 2

    cout << " Cifrele sunt: " << setw(4) << x5 << setw(4) << x4 << setw (4) << x3 << setw(4) <<x2 << setw(4) << x1;
    return 0;
}
