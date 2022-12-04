#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ofstream fout("enc.txt"); // cu fout scriem in fisier

	char c;

	while(cin.get(c)){
		if(c == '\n') break; // pt new line - incheie bucla

		// vezi fiecare litera si corespondenta ei in ascii :

		fout << (int)(c) << " "; // pt "h" "e" "l" "l" "o" va scrie 104 101 108 108 111 - vezi tabel ascii

		fout << (char)(c % 256); // hint tema ;)

		fout << endl << endl;
	}

	return 0;
}
