#include < iostream >
#include < iomanip >

using namespace std;

/*

Zadatak:

Napi�ite program koji korisniku omogu�ava unos pozitivnih cijelih brojeva (ve�ih od
nula). Program se treba izvr�avati sve dok korisnik ne unese broj 20. Na kraju program
treba ispisati sumu svih parnih unesenih brojeva. Broj 20 koji slu�i za prekid ne treba
dodavati na sumu. Po�tujte sve faze procesa programiranja.


*/

int main() {
	
	int broj = 0,
		suma = 0;

	do {

		if (broj < 0) {

			cout << "Broj mora biti pozitivan tj. veci od 0!" << endl;

		}
		else if (broj % 2 == 0) {

			suma += broj;

		}

		cout << "Unesite pozitivan cijeli broj: ";
		cin >> broj;

	} while (broj != 20);

	cout << "Suma svih unesenih brojeva iznosi: " << suma << endl;

	system("pause>0");
	return false;
}