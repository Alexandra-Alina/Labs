#include <iostream>

using namespace std;

int main()
{
    int n; // declaram n
    cout << "n= ";
    cin >> n; // introducem de la tastatura o valoare pentru n

    for(int x=1; x<=n; x++) // parcurgem numerele de la 1 la n, inclusiv n
    {
        int okie = 1;
        /// pentru fiecare dintre ele, verificam:

        if( x% 3 == 0)
        {
            cout << "FIZZ";
            okie = 0;
        }
        if( x% 5 == 0)
        {
            cout << "BUZZ";
            okie = 0;
        }
        if(okie == 1) // daca nu i s a schimbat val, adica nr nu e div cu 3 sau 5
           {
                cout << x;
           }
        cout << endl;

    }

    return 0;
}