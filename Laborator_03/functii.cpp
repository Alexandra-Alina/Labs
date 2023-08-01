//Laborator sapt 3
//4LF623

#include <iostream>

using namespace std;

// declararea functiilor: Patrat, Cub, Suma
int Patrat(int);
int Cub(int);
void Suma( int, int);

int main()
{
    int a, b; // declaram local doua variabile: a si b

    cout << "a= ";
    cin >> a;

    cout << "b= ";
    cin >> b;

    Suma(a,b); // apelam functia Suma
    cout <<"Patratul lui a este " << Patrat(a) << endl; // apelam functiile Patrat, Cub
    cout << "si cubul lui b este " << Cub(b) << endl;

    return 0;
}

int Patrat(int n) // functie de tip int, returneaza un int
                  // primeste un parametru de tip int (cel din paranteze)
{
  return n*n;
}

int Cub(int n)
{
  return n*n*n;
}

void Suma(int a, int b) // functie de tip void, nu returneaza nimic
                        // primeste doi param a, b de tip int
{
    cout << "Suma celor doua numere este: a + b = " << a+b << endl;
}






