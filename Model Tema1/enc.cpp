#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // scrierea in fisier:
	ofstream fout("enc.txt"); // folosim tipul de data ofstream pentru iesire

	int v; // declaram v de tip int - "cheia" pentru codificare
	char c; // declaram un caracter c folosit pentru scrierea in fisier

	cout << "Introduceti o valoare pentru cheie: " << endl << "v = ";
	cin >> v;
	cin.get(); // sarim peste '\n' (de la cin)

	fout << v; // v va fi primul caracter scris in fisier

	cout << "Introduceti textul care trebuie criptat: " << endl;

	while(cin.get(c)) // cat timp citim caracter cu caracter de la tastatura ...
    {
        // daca c va fi newline - iesi din while
		if(c == '\n') break;
        // scriem in fisier caracter cu caracter, folosind formula data
		fout << (char)((c + v) % 256);
	}

	return 0;
}
