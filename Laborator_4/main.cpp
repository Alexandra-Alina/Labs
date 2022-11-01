///Lab sapt 4
//4LF623

#include <iostream>

using namespace std;

void Paritate(int a)
{
    if(a%2==0) // daca numarul este divizibil cu 2, este par
    {
        cout << "Numarul este par." << endl;
    }
       else // daca nu, este impar
       {
            cout << "Numarul este impar." << endl;
       }
}

// un alt mod in care am putea scrie functia Paritate
/*
string Paritate(int a)
{
    if(a%2==0)
        return "Numarul este par.";
    else
        return "Numarul este impar.";

} */
// de data aceasta nu va fi de tip void, ci ne returneaza un string

void Ultima_cifra(int b)
{
    // folosind operatorul %, obtinem restul impartirii a doua numere integi
    // deimpartit = impartitor * cat + rest, unde pe noi ne intereseaza restul
    cout << "Ultima cifra a numarului " << b << " este " << b%10 << endl;
}

int main()
{
    int x;
    cout << " Introduceti un numar: ";
    cin >> x;

    Paritate(x);
    //cout << Paritate(x);
    Ultima_cifra(x);
    return 0;
}
