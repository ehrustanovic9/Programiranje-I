#include < iostream >
#include < iomanip >

using namespace std;

/*

Zadatak: 

Napišite program, poštujuæi sve faze procesa programiranja, koji æe omoguæiti
unos jednog prirodnog broja, a izraèunati i ispisati broj znamenki tog broja.


*/

int main() {
	
	int broj,
		broj_2,
		brojac = 0;

	cout << "Unesite jedan prirodan broj!" << endl;
	cin >> broj;
	if (broj < 0)
	{
		broj = abs(broj);
	}

	broj_2 = broj;

	while (broj_2 > 0)
	{
		broj_2 /= 10;
		brojac++;
	}
	cout << "Broj " << broj << " ima " << brojac << " znamenki!" << endl;

	system("pause>0");
	return false;
}