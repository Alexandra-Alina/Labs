// Laborator saptamana 3
// 4LF623
// exercitii

#include <iostream>
#include <math.h>

#define PI 3.14159265358979323846
#define square(x) ((x) * (x))

//exercitiul 9
#define YES 1
#define NO 0

#define TRUE 0

using namespace std;

int main()
{   // exercitiul 8
    cout << __FILE__ << endl;
    cout << __LINE__ << endl;
    cout << __TIME__ << endl;
    cout << __STDC__ << endl;
    cout << __DATE__ << endl; // sunt definite in preprocesor

    cout << PI << endl; // cel definit de noi
    cout << M_PI << endl; // definit in math.h

    cout << square(PI) << endl;

     cout << "TRUE dupa primul define: " << TRUE << endl;
    #ifdef TRUE // daca TRUE e definit deja
    #undef TRUE // redevine nedefinit
    #define TRUE 1 // redefineste-l
    #endif
    cout << "TRUE dupa ce l-am redefinit: " << TRUE << endl;

#define CEVA
#ifndef CEVA
	cout << "YES" << endl;
#else
	cout << "NO" << endl;
#endif

#define ALTCEVA
#ifdef ALTCEVA
	cout << "YES" << endl;
#else
	cout << "NO" << endl;
#endif
  return 0;
}
