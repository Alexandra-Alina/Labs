#include <iostream>
#include <iomanip>


using namespace std;

struct Student
{
    string nume;
    string prenume;
    int varsta;
    string grupa;
    int an;
};

Student Get_Date_Student()
{
    Student s;
    cout << "Introduceti urmatoarele date ale studentului: " << endl;

    cout << "Numele: ";
    cin >> s.nume;

    cout << "Preumele: ";
    cin >> s.prenume;

    cout << "Varsta: ";
    cin >> s.varsta;

    cout << "Grupa: ";
    cin >> s.grupa;

    cout << "Anul de studiu: ";
    cin >> s.an;

    cout << endl;

    return s;
}

void Display_Date_Student(Student s)
{
    cout <<setw(15) << left << s.nume << setw(15) << left << s.prenume << setw(15) << left
         << s.varsta << setw(15) << left << s.grupa << setw(15) << left << s.an << endl;

}




int main()
{
    Student stud1;
    Student stud2;
    Student stud3;

    stud1 = Get_Date_Student();
    stud2 = Get_Date_Student();
    stud3 = Get_Date_Student();

    cout << "-------------------------------------------------------------------" << endl;

    cout <<setw(15) << left << "NUME" << setw(15) << left << "PRENUME" << setw(15) << left
         << "VARSTA" << setw(15) << left << "GRUPA" << setw(15) << left << "AN" << endl;

    cout << "-------------------------------------------------------------------" << endl;

    Display_Date_Student(stud1);
    Display_Date_Student(stud2);
    Display_Date_Student(stud3);


    return 0;
}
