#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>

using namespace std;

int main()
{
//------------citim coord de la tastatura---------------------
    double longitudine_target, latitudine_target;

    cout << "Longitudine: ";
    cin >> longitudine_target;

    cout << "Latitudine: ";
    cin >> latitudine_target;

//---------------------citim csv-ul---------------------------
    ifstream fin("localitatiRO.csv");

    // citim header-ul
    string header;
    getline(fin, header);

    // pregatim fisierul de iesire
    ofstream fout("vecini.csv");
    fout << header << endl;

    string linie;
    string s_longitudine, s_latitudine, nume, judet, judet_auto, s_populatie, regiune;
    double longitudine, latitudine;
    int populatie;

    // citim linie cu linie
    while(getline(fin, linie))
    {
        // separam linia in token-uri
        stringstream stream(linie);

        getline(stream, s_longitudine, ',');
        getline(stream, s_latitudine, ',');
        getline(stream, nume, ',');
        getline(stream, judet, ',');
        getline(stream, judet_auto, ',');
        getline(stream, s_populatie, ',');
        getline(stream, regiune, ',');

        /* // varianta cu pointeri */
        /* s_longitudine = strtok((char*)(linie).c_str(), ","); */
        /* s_latitudine = strtok(NULL, ","); */
        /* nume = strtok(NULL, ","); */
        /* judet = strtok(NULL, ","); */
        /* judet_auto = strtok(NULL, ","); */
        /* s_populatie = strtok(NULL, ","); */
        /* regiune = strtok(NULL, ","); */

        // convertim token-urile in tipul corespunzator
        longitudine = stod(s_longitudine);
        latitudine = stod(s_latitudine);
        populatie = stoi(s_populatie);

        // verificam conditia
        if(populatie >= 1000 &&
                ((longitudine_target - 0.5 <= longitudine) && (longitudine <= longitudine_target + 0.5)) &&
                ((latitudine_target - 0.5 <= latitudine) && (latitudine <= latitudine_target + 0.5)))
        {
            fout << linie << endl;
        }
    }

    fin.close();
    fout.close();
    return 0;
}
