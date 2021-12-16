#include < iostream >
#include < iomanip >

using namespace std;

/*

Zadatak

Napi�ite program za izra�unavanje prosje�ne godi�nje koli�ine padalina. Po�tujte sve faze
procesa programiranja.

Upute: 

Prosje�na godi�nja koli�ina padalina se dobije zbrajanjem koli�ine padalina za
svaki mjesec i dijeljenjem s brojem mjeseci (12). Dakle, potrebno je omogu�iti unos
koli�ine padalina 12 puta (za svaki mjesec), te unesene vrijednosti zbrojiti. Budu�i da se
odre�ena aktivnost (unos koli�ine padalina) treba izvr�iti zadani broj puta (12) for petlja
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