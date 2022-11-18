#include <iostream>

using namespace std;

int main()
{
    int a;

    // initializare si init valori pt elem array-ului
    int arr[4] = {14, 23, 22, 5};

    // putem schimba valoarea unui element din array-ul nostru
    arr[1] = 0;

    //pentru a accesa un element din array, ne folosim de indexul care indica pozitia acestuia
    cout << "Elementele din arr[4] sunt: " << endl;

    cout << arr[0] << endl << arr[1] << endl << arr[2] << endl << arr[3] << endl << endl;



    // adunare elem unui array:

    // n va lua valori de la 0 la numarul de elem din array
    /// nu ultimul index, care e cu o unitate mai mic decat numarul de elemente!!!

    int suma_elem_array = 0;

    for(int j=0; j<4; j++)
    {
        cout << " --- la indexul " << j << " avem valoarea " << arr[j] << endl;

        suma_elem_array = suma_elem_array + arr[j];
    }

    cout << "Suma elementelor din array este: " << suma_elem_array << endl  << endl;




    int  n = 6; // declaram si initializam o variabila de tip intreg n
    // calculam suma a n numere folosind formula lui Gauss

    int suma_gauss = n*(n+1)/2;

    cout << "Suma lui Gauss pt n = 6: " << suma_gauss << endl;

    // putem calcula aceeasi suma, folosind un for

    int suma = 0;

    for(int i=0; i <= n ; i++) // parcurgem toate numerele pana la n
    {
        suma = suma + i; // adaugam in suma curenta noua valoare a lui n (de la 0 la 6, in cazul acesta)
    }

    cout << "Suma numerelor de la 1 la 6 ( folosind un for) este: " << suma << endl;



    return 0;
}
