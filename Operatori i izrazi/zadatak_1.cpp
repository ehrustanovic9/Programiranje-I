#include < iostream >

using namespace std;

/*

Zadatak: 

Napi�ite program koji �e omogu�iti unos dva cijela broja, usporediti ih, te
ispisati ve�i broj. Obavezno upotrijebite uvjetni operator. Po�tujte sve faze procesa
programiranja.


*/

int main() {
	
	int broj_1, broj_2;

	cout << "Unesite dva broja" << endl;
	cin >> broj_1 >> broj_2;

	(broj_1 >= broj_2) ? cout << "Broj: " << broj_1 << " je veci od broja: " << broj_2  : cout << "Broj: " << broj_2 << " je veci od broja: " << broj_1 << endl;

	system("pause>0");
	return false;
}