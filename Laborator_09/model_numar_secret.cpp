///TEMA ! PCLP
/// Scrieți un program C++ pentru jocul "Găsește numărul secret".
#include <iostream>
#include <time.h>
#include <chrono>
#include<random>
#include <cstring>
#include <cstdlib>
using namespace std;


int main()
{
    int contor, numar, i, ok;
    char caracter[10];

    srand(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count());

    int n = rand()%1000 - 500;

    contor = 0;

    cout << "Buna! In acest joc vei avea de ghicit un numar! Succes! :)" << endl << endl;

    while(contor < 10) // Atat timp cat numarul de incercari este mai mic sau egal cu 10, jocul poate continua.
    {

        do
        {
            cout << " Alege un numar cuprins intre -500 si 500: ";

            cin >> caracter;  // citim input

            for (i=0; i<strlen(caracter); i++) // verific daca apare - pe o pozitie gresita, sau de mai multe ori
            {
                if ( caracter[i] == '-' && i!=0)
                {
                  break;
                }
                if((caracter[i]< '0' || caracter[i]> '9') && caracter[i] != '-')// verific daca are si alte caractere

                break; // daca a gasit ceva care nu este cifra se opreste din cautare, adica iese din for
            }

            if(i==strlen(caracter)) // daca a juns la sfarsitul inputului fara sa gaseasca alte caractere, atunci el este numar
            {
                numar = atoi(caracter); // il convertim intr-un intreg

                    ok = 1; // oprim citirea altor valori pentru ca a gasit un input valid
            }
                else
                {
                    cout << " Input invalid. Nu ati introdus un numar!" << endl << endl; // nu a fost input valid, a gasit carctere diferite de cifre

                    ok = 0; // continua cautarea
                }
        }   while(ok == 0);


        while((numar < -500) || (numar > 500)) // Se verifica daca utilizatorul a introdus un numar din intervalul stabilit.
        {
            cout << " Numarul nu corespunde intervalului impus!  Introduceti un alt numar." << endl << endl; // Jocul va continua atunci cand conditiile sunt respectate.

            do
            {
                cout << " Alege un numar cuprins intre -500 si 500: ";

                cin >> caracter;  // citim input

                for (i=0; i<strlen(caracter); i++) // verific daca apare - pe o pozitie gresita, sau de mai multe ori
                {
                    if ( caracter[i] == '-' && i!=0)
                    {
                        break;
                    }
                    if((caracter[i]< '0' || caracter[i]> '9') && caracter[i] != '-')// verific daca are si alte caractere

                    break; // daca a gasit ceva care nu este cifra se opreste din cautare, adica iese din for
                }

                if(i==strlen(caracter)) // daca a juns la sfarsitul inputului fara sa gaseasca alte caractere, atunci el este numar
                {
                    numar = atoi(caracter); // il convertim intr-un int

                    ok = 1; // oprim citirea altor valori pentru ca a gasit un input valid
                }
                    else
                    {
                        cout << " Input invalid. Nu ati introdus un numar!" << endl << endl; // nu a fost input valid, a gasit carctere diferite de cifre

                        ok = 0; // continua cautarea
                    }
            }   while(ok == 0);
        }

        contor++;


        if( numar == n ) // Se verifica daca numarul ales este cel generat de calculator.
            {
                cout << endl << "    Felicitari! Numarul secret este " << n << "!" << " Ati castigat! :D" << endl; // Utilizatorul este anuntat ca a castigat.

                cout << "    Numarul de incercari este: " << contor; // Se afiseaza numarul de incercari dupa care jocul a fost castigat.

                break; // Atunci cand castiga, nu mai este nevoie sa fie parcursa din nou instructiunea.
            }
                else if ( numar > n) // Se verifica daca numarul ales este mai mare decat cel generat de calculator.
                {
                    cout << " Numarul ales este prea mare. " << endl;

                    if( 10 - contor == 0)  cout << " Nu mai aveti incercari. " << endl << endl;

                        else if (10 - contor == 1)  cout << " Mai aveti o incercare." << endl << endl;

                            else  cout << " Mai aveti " <<  10 - contor << " incercari." << endl << endl;

                }
                    else // Daca nr. introdus nu este nici egal cu cel secret, nici mai mare, atunci este mai mic.
                    {
                        cout << " Numarul ales este prea mic." << endl;

                        if( 10 - contor == 0)  cout << " Nu mai aveti incercari. " << endl << endl;

                            else if (10 - contor == 1)  cout << " Mai aveti o incercare." << endl << endl;

                                else  cout << " Mai aveti " <<  10 - contor << " incercari." << endl << endl;
                    }


    }

    if ((contor == 10) && (numar != n))
    {
        cout << " Din pacate, ati pierdut, numarul de incercari este depasit. :(" << endl; // Atunci cand este depasit numarul de incercari
                                                                                               //si nr. secret nu a fost gasit, jocul este pierdut.
        cout << " Numarul secret era: " << n;
    }
 return 0;
}
