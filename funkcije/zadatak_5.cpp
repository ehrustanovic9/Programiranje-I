#include < iostream >
#include < iomanip >

using namespace std;

/*
 
Zadatak:

Napi�ite program koji �e za unesenu cijenu proizvoda i koli�inu proizvoda ra�unati
ukupnu cijenu � tj. ispisati ra�un. Omogu�ite unos cijena i koli�ine za vi�e proizvoda.
Upotrijebite funkciju koja se zove Racun i koja ne vra�a nikakvu vrijednost (tipa void).
Ukupnu cijenu ispisati u funkciji main.

*/

void racun(float cijena, float kolicina, float& ukupno);

int main() {

	float cijena,
		  kolicina,
		  ukupno = 0;

	char odgovor;

	do {

		cout << "Cijena proizvoda: ";
		cin >> cijena;
		cout << "Kolicina proizvoda: ";
		cin >> kolicina;
		racun(cijena, kolicina, ukupno);
		cout << "Da li zelite jos nesto? ( y-da )!" << endl;
		cin >> odgovor;
		
	} while (odgovor == char('y'));

	cout << "Ukupno: " << ukupno << "KM" << endl;

	system("pause>0");
	return false;
}

void racun(float cijena, float kolicina, float& ukupno) {

	ukupno += cijena * kolicina;
}




