#include < iostream >
#include < iomanip >

using namespace std;

/*

Zadatak: 

Napi�ite program koji �e omogu�iti unos pozitivnih cijelih brojeva, te izra�unati 
njihovu sumu. U trenutku kad korisnik unese negativan broj, program treba ispisati
izra�unatu sumu (ne ra�unaju�i taj negativni broj) i zavr�iti s radom.

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