#include < iostream >

using namespace std;

/*

ZADATAK: 

Pero Periæ instalira kabl za kompaniju Metro City Cable Company. Za svaku
instalaciju naplaæuje se osnovna usluga u iznosu od 25,00 $ i dodatna usluga u iznosu
od 2,00$ za svaki metar postavljenog kabla. Potrebno je napraviti program koji æe
raèunati ukupnu dobit od Perinog rada u toku mjeseca. Ako je Pero je instalirao 263
kilometra kabla na 27 razlièitih lokacija u toku mjeseca januara koliku je dobit ostvario za
svoju kompaniju? (Odgovor: 526 675$)

*/

int main() {
	
	const float instalacija = 25.00,
		        dodatna_usluga = 2.00;

	float ukupno, 
		  kilometri_kabla, 
		  lokacija;

	cout << "Unesite ukupnu vrijednost instaliranog kabla u toku mjeseca" << endl;
	cin >> kilometri_kabla;
	cout << "Unesite broj lokacija na kojima je vrsena instalacija kabla" << endl;
	cin >> lokacija;

	kilometri_kabla *= 1000;
	ukupno = lokacija * instalacija + kilometri_kabla * dodatna_usluga;

	cout << "Ukupna dobit koja je ostvarena u toku mjeseca iznosi: " << ukupno << endl;

	system("pause>0");
	return false;
}