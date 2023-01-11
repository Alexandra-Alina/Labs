// Program care afiseaza daca ecuatia de gradul doi
// are radacini complexe sau nu

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float a, b, c, radacina1, radacina2, delta, x, d; //introducem variabilele

    cout << " a*x^2 + b*x + c = 0 " << endl;
	cout << "a = " ; cin >> a;
	cout << "b = " ; cin >> b;
	cout << "c = " ; cin >> c;

    //calculam delta

	delta = b * b - 4 * a * c ; // discriminant
	d = sqrt(delta) ;

	if(delta >= 0 )
	{
			if (d == 0)              // daca delta = 0 => radacina dubla
			{
				radacina1 = -b/(2*a);
				cout << " Valoarea radacinii duble este: " << radacina1;
			}

			else                              //daca delta > 0, calculam radacinile cu formula cunoscuta
			{
				radacina1 = (-b + d) / (2*a);
				radacina2 = (-b -d) / (2*a);
				cout << " Prima radacina a ecuatiei este: " << radacina1 << endl;
				cout << " A doua radacina a ecuatiei este: " << radacina2 << endl;
			}

	}
	else
	   	cout << " Delta este mai mica decat zero. Ecuatia nu are radacini reale. Radaciniile sunt complexe." ;     // mesaj pt. delta<0

	return 0;
}
