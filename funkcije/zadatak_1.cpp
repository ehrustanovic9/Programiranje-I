#include < iostream >
#include < iomanip >

using namespace std;

/*
* 
Zadatak:
Napišite program koji æe omoguæiti kvadriranje bilo koje cjelobrojne vrijednosti.
Upotrijebite funkciju kako bi ste izvršili kvadriranje.

*/

int kvadrat(int br);

int main() {

	int broj;

	cout << "Unesite cijeli broj: ";
	cin >> broj;

	cout << "Kvadrat broja: " << broj << " iznosi: " << kvadrat(broj) << endl;

	system("pause>0");
	return false;
}

int kvadrat(int br) {

	return br * br;
}