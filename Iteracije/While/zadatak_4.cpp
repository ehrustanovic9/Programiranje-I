#include < iostream >
#include < iomanip >

using namespace std;

/*

Zadatak: 

Napi�ite program, po�tuju�i sve faze procesa programiranja, koji �e omogu�iti
unos jednog prirodnog broja, a ispisati njegov binarni ekvivalent.


*/

int main() {
	
	int broj,
		ostatak = 0,
		brojac = 0;

	double binarni = 0;

	cout << "Unesite jedan prirodan broj!" << endl;
	cin >> broj;

	if (broj<0) {

		broj = abs(broj);

	}

	while (broj > 0) {

		ostatak = broj % 2;
		binarni = binarni + ostatak * pow(10.0, brojac);
		brojac++;
		broj /= 2;

	}
	cout << "Binarni ekvivalent unesenog broja je: "<<binarni<<endl;

	system("pause>0");
	return false;
}