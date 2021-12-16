#include < iostream >
#include < iomanip >

using namespace std;

/*

Zadatak: 

Napišite program koji æe omoguæiti unos pozitivnih cijelih brojeva, te izraèunati 
njihovu sumu. U trenutku kad korisnik unese negativan broj, program treba ispisati
izraèunatu sumu (ne raèunajuæi taj negativni broj) i završiti s radom.

*/

int main() {
	
	int broj, suma=0;

	cout << "Unesite pozitivan cijeli broj!" << endl;
	cin >> broj;

	while (broj>0)
	{
		suma += broj;
		cout << "Unesite pozitivan cijeli broj!" << endl;
		cin >> broj;
	}
	cout << "Suma svih unesenih brojeva iznosi: " << suma << endl;


	system("pause>0");
	return false;
}