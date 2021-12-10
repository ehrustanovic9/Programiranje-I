#include < iostream >

using namespace std;

/*

Zadatak: 

Napišite program, poštujuæi sve faze procesa programiranja, koji æe za
uneseno malo slovo engleske abecede ispisati to isto slovo samo veliko i obrnuto, za
uneseno veliko slovo ispisati malo. Obavezno upotrijebite uvjetni operator.

*/

int main() {
	
	char slovo;

	cout << "Unesite neko slovo" << endl;
	cin >> slovo;

	(slovo >= 65 && slovo <= 97) ? cout << char(slovo + 32) :
									cout << char(slovo - 32);

	system("pause>0");
	return false;
}