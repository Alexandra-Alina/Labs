#include <iostream>

using namespace std;

int main() {

	int x = 3;
	cout << "Valoarea lui x: " << x << endl;
	cout << "Adresa lui x: " << &x << endl;
	cout << endl << endl;

	int* p;
	p = &x;

	cout << "Valoarea lui p: " << p << endl;
	cout << "Adresa lui p: " << &p << endl;
	cout << "Valoarea la care 'pointeaza' p: " << *p << endl;
	cout << endl << endl;

	// adresele elementelor unui vector sunt consecutive
	int v[5] = {1, 2, 3, 4, 5};
	for(int i = 0; i < 5; ++i)
		cout << "Adresa lui v[" << i << "]: " << &v[i] << endl;
	cout << endl << endl;

	// vectorii sunt pointeri la primul element
	// v 'simplu' e de tip int*
	cout << "Adresa lui v: " << v << endl;
	cout << endl << endl;

	x = 7; // il schimb pe x
	cout << "Valoarea lui x: " << x << endl;
	cout << "Valoarea la care 'pointeaza' p: " << *p << endl;
	cout << endl << endl;

	*p = 9; // il schimb pe x prin p
	cout << "Valoarea lui x: " << x << endl;
	cout << "Valoarea la care 'pointeaza' p: " << *p << endl;
	cout << endl << endl;

	// tip de date* p;
	// p + 1 <=> p + sizeof(tip de date)

	return 0;
}
