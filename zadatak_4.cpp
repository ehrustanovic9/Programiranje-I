#include < iostream >

using namespace std;

/*

Zadatak: 

Napi�ite program, po�tuju�i sve faze programiranja, u kojem �ete omogu�iti
unos tri cijela broja, a ispisati najve�i.

*/

int main() {
	
	int  broj_1, 
		 broj_2, 
		 broj_3;

	cout << "Unesite tri cijela broja" << endl;
	cin >> broj_1 >> broj_2 >> broj_3;

	(broj_1 > broj_2) ? cout << "Najveci broj je: " << broj_1 :
	(broj_2 > broj_3) ? cout << "Najveci broj je: " << broj_2 :
						cout << "Najveci broj je: " << broj_3 << endl;

	system("pause>0");
	return false;
}