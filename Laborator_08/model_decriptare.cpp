#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ifstream fin("dec.txt");

	char c;
	fin.get(c); // cu fin citim din fisier, este de tip ifstream
	int cifra = c - '0'; // sau " cifra = c - 48; ", pt ca '0' se afla la indexul 48
	// daca vrem sa trecem de la un caracter care reprezinta o cifra, la cifra respectiva

	cout << cifra << endl;
	cout << c << " " << int(c); // vezi ascii

	return 0;
}
