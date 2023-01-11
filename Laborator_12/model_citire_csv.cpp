#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

int main(){

	ifstream fin("Studenti.txt");

	string line;
	string nume, prenume, grupa;

    cout << left << setw(10) << " NUME" << setw(10) << " PRENUME" << setw(10) << " GRUPA" << endl;

	while(getline(fin, line))
    {
        stringstream ss(line);

        getline(ss, nume, ',');
        getline(ss, prenume, ',');
        getline(ss, grupa, ',');


        cout << left << setw(10) << nume << setw(10) << prenume << setw(10) << grupa << endl;
    }



	return 0;
}
