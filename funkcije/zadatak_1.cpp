#include < iostream >
#include < iomanip >

using namespace std;

/*
* 
Zadatak:
Napi�ite program koji �e omogu�iti kvadriranje bilo koje cjelobrojne vrijednosti.
Upotrijebite funkciju kako bi ste izvr�ili kvadriranje.

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