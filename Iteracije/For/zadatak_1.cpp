#include < iostream >
#include < iomanip >

using namespace std;

/*

Zadatak

Napišite program za izraèunavanje prosjeène godišnje kolièine padalina. Poštujte sve faze
procesa programiranja.

Upute: 

Prosjeèna godišnja kolièina padalina se dobije zbrajanjem kolièine padalina za
svaki mjesec i dijeljenjem s brojem mjeseci (12). Dakle, potrebno je omoguæiti unos
kolièine padalina 12 puta (za svaki mjesec), te unesene vrijednosti zbrojiti. Buduæi da se
odreðena aktivnost (unos kolièine padalina) treba izvršiti zadani broj puta (12) for petlja
je idealan izbor.

*/

int main() {
	
	const int mjesec = 12;

	double padaline,
		   ukupno = 0;

	for (int i = 1; i <= mjesec; i++) {

		cout << "Unesite kolicinu padalina za " << i << " mjesec: ";
		cin >> padaline;
		ukupno += padaline;

	}
	ukupno = padaline / mjesec;
	cout << "Ukupna godisnja kolicina padalina iznosi: " << setprecision(2) <<ukupno << endl;

	system("pause>0");
	return false;
}