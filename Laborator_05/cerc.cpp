#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double raza = 6.15;
    const double PI = 3.14;

    double diametru, lungime, arie;

    diametru = raza * 2;
    lungime = 2 * PI * raza;
    arie = PI * pow(raza, 2); // sau arie = PI * r * r;

    cout << "Raza cercului este: " << raza << endl;
    cout << "Diametrul cercului este: " << diametru << endl;
    cout << "Lungimea cercului este: " << lungime << endl;
    cout << "Aria cercului este: " << arie << endl;

    return 0;
}
