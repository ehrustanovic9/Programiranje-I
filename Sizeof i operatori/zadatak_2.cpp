#include < iostream >

using namespace std;

/*

ZADATAK: 

Napišite program koji æe pokušati poveæati vrijednost cjelobrojne varijable 
Broj=2147483647 za 1.

*/

int main() {

	int broj = 2147483647;

	broj++;

	cout << broj;

	//ZAKLJUÈAK: Dobili smo prekoraèenje opsega vrijedosti - odnosno vrijednost se ponavlja od najmanje ka najvecoj

	system("pause>0");
	return false;
}