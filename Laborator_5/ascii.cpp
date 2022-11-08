#include <iostream>

using namespace std;

int main()
{
    cout << "Codul ASCII (" << 65 << ") corespunde caracterului: "  << static_cast< char >(65) << endl;

    cout << "Orice numar, prin conversie la bool, devine " << static_cast< bool >(65) << endl;
    // orice numar diferit de 0, convertit la bool, va fi 1.
    // doar 0 va fi 0 in urma conversiei

    int a; // declaram local o variabila de tip int
    float b = 7.8; // declaram local o variabila de tip float

    // cand folosim sintaxa de tipul "cout << (variabila = o anumita valoare);" - afisam acea valoare, dar o si atribuim variabilei
    // exista mai multe moduri in care facem conversia de tip
    // static_cast ul este recomandat, e mai safe
    cout << (a = static_cast <int> (b)) << endl;
    //sau
    a = int(b);
    //sau
    a = (int)b;

	return 0;
}

