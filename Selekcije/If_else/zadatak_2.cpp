#include < iostream >

using namespace std;

/*

ZADATAK: 

Ve�ina velikih svjetskih gradova redovito vr�i mjerenja zaga�enja zraka.
O�itavanja se vr�e u 12:00 sati na tri razli�ita mjesta u gradu. Prosje�na vrijednost ova
tri o�itanja se naziva indeks zaga�enja. Napi�ite program za ra�unanje indeksa
zaga�enja, te ispi�ite odgovaraju�e poruke. Vrijednost indeksa zaga�enja ve�a ili jednaka
50 smatra se rizi�nom, a vrijednost manja od 50 se smatra prihvatljivom.

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