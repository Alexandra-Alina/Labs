#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //citirea din fisier:
	ifstream fin("enc.txt"); // folosim tipul de data ifstream pentru intrare

	char c;
	// citim primul caracter, acesta va fi v
	fin.get(c);
	// acesta va fi citit drept un char, iar noi dorim ca acesta sa fie de tip int
	// in ASCII, cifrele de la 0-9 pornesc de la 48, asa ca:
	int v = c - '0'; // vezi tabel ASCII

	while(fin.get(c)) // cat timp citim caracter cu caracter din fisier . . .
        // scriem in consola caracterul decriptat
		cout << (char)((c - v + 256) % 256);

	return 0;
}
