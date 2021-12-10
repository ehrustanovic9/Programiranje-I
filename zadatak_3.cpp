#include < iostream >

using namespace std;

/*

Zadatak: 

Napišite program, poštujuæi sve faze procesa programiranja, koji æe
omoguæiti unos troznamenkastog cijelog broja, a ispisati srednju znamenku tog broja.

*/

int main() {
	
	int  broj;

	cout << "Unesite troznamenkasti broj" << endl;
	cin >> broj;

	(broj >= 100 && broj <= 999) ? cout << "Srednja znamenka broja " << broj << " je: " << broj /10 %10 :
								   cout << "Broj mora imati tri znamenke!" << endl;

	system("pause>0");
	return false;
}