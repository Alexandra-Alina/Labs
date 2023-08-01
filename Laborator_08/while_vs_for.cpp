#include <iostream>
#include <fstream>

using namespace std;

int main(){

	int n = 100;

	for(int i=0; i<=n; ++i) {
		// ...
	}

	// echivalent cu:
	int i = 0;
	while(i <= n) {
		// ...

		++i;
	}

	// for(initializare; conditie; incrementare) {
	//		// ...
	// }
	//
	// vs
	//
	// initializare;
	// while(conditie) {
	// 		// ...
	//
	// 		incrementare;
	// 	}

	// Dc am folosi while in loc de for?
	//
	// 1. Poate nu stim de la inceput cate iteratii avem nevoie
	// 2. Nu avem o initializare / incrementare simpla, poate incrementarea are mai multe cazuri etc.
	
	// Exemplu: Collatz Cojecture
	//
	// Daca n este par, impartim la 2 => n = n / 2
	// Daca n este impar, inmultim cu 3 si adunam 1 => n = 3 * n + 1
	//
	// ne oprim cand ajungem la n = 1
	//
	// Conjectura: orice n, dupa un numar finit de iteratii, ajunge la 1

	n = 100;
	while(n != 1) {
		cout << n << " ";

		if(n % 2 == 0) {
			n = n / 2;
		} else {
			n = 3 * n + 1;
		}
	}
	cout << n << endl;

	// Cum am face codul cu for?
	for(int n = 100; n != 1; /* ??? */ --n); // ignora --n, fara nu face bucla infinita

	// Nu e imposibil dar e mai natural de folosit un while
	
	// e.g. 1
	for(int n = 100; n != 1;) {
		cout << n << " ";

		if(n % 2 == 0) {
			n = n / 2;
		} else {
			n = 3 * n + 1;
		}
	}
	cout << n << endl;

	// e.g. 2
	for(int n = 100; n != 1; n = (n % 2 == 0) ? n / 2 : 3 * n + 1) {
		cout << n << " ";
	}
	cout << n << endl;


	// do-while
	// face acelasi lucru ca while, dar verifica conditia dupa ce a executat blocul

	// do {
	//   executie
	// while(conditie);
	//
	// e echivalent cu:
	//
	// executie
	// while(conditie) {
	//  executie
	//  }
	
	// Atentie! la do-while bucla se executa cel putin o data

	return 0;
}
