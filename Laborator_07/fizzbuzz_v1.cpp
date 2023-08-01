

#include <iostream>

using namespace std;

int main()
{
    int n; // declaram n
    cout << "n= ";
    cin >> n; // introducem de la tastatura o valoare pentru n

    for(int x=1; x<=n; x++) // parcurgem numerele de la 1 la n, inclusiv n
    {
        /// pentru fiecare dintre ele, verificam:

        if(x%3 == 0) //daca x divizibil cu 3
        {
            if(x%5 == 0) // daca da, verificam si divizibilitatea cu 5
            {
                cout << "fizzbuzz" << endl;
            }
            else // daca nu se imparte exact la 5, atunci ramane doar divizibil cu 3
            {
                cout << "fizz" << endl;
            }
        }

        else if(x%5 == 0) //altfel, daca x nu e divizibil cu 3, verificam cu 5
        {
            cout << "buzz" << endl;
        }

        else cout << x << endl; // altfel, x nu e divizibil cu niciunul
    }
    

    return 0;
}




