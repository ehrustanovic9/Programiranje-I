#include < iostream >

using namespace std;

/*

ZADATAK: 

Veæina velikih svjetskih gradova redovito vrši mjerenja zagaðenja zraka.
Oèitavanja se vrše u 12:00 sati na tri razlièita mjesta u gradu. Prosjeèna vrijednost ova
tri oèitanja se naziva indeks zagaðenja. Napišite program za raèunanje indeksa
zagaðenja, te ispišite odgovarajuæe poruke. Vrijednost indeksa zagaðenja veæa ili jednaka
50 smatra se riziènom, a vrijednost manja od 50 se smatra prihvatljivom.

*/

int main() {
	
	float mjerenje_1,
		  mjerenje_2,
		  mjerenje_3, 
		  index_zagadjenja;

	const int index=50,
		      br_mjerenja = 3;

	cout << "Unesite vrijednosti mjerenja zagadjenja zraka!" << endl;
	cin >> mjerenje_1 >> mjerenje_2 >> mjerenje_3;

	index_zagadjenja = (mjerenje_1 + mjerenje_2 + mjerenje_3)/br_mjerenja;

	if (index_zagadjenja >= index) {

		cout << "Rizicno zagadjenje zraka koje iznosi: " << index_zagadjenja << endl;
	}
	else
		cout << "Prihvatljivo zagadjenje zraka koje iznosi: " << index_zagadjenja << endl;


	system("pause>0");
	return false;
}