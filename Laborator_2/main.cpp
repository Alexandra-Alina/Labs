//Laborator saptamana 2


#include <iostream>

using namespace std;

int a = 0; // declarare si initializare a cu valoarea 0

int main()
{
    cout << "Numarul de tip intreg (int) are valoarea initiala: a = " << a << endl; // afisarea lui a in consola

    cout << "Introduceti o noua valoare pentru numarul intreg a = ";

    cin >> a; // alta val pt a

    cout <<"Numarul va avea valoarea: a = " << a << endl;

    a = 5;
    cout << "Am schimbat val lui a, aceasta va fi: a = " << a << endl;

    cout << "Introduceti o noua valoare pentru numarul intreg a = ";

    cin >> a; // alta val pt a

    /// Verificam daca a = 5
    if( a == 5) // daca este egal cu 5, vom afisa un mesaj
    {
       cout << "a = 5" << endl;
    }
    else // daca nu este egal cu 5, ii vom schimba noi val
    {
        a = 5;
        cout << "Am schimbat val lui a, aceasta va fi: a = " << a << endl;
    }

    return 0;
}
