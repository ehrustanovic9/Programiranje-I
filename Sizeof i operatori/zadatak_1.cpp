#include < iostream >

using namespace std;

/*
 
ZADATAK: 

Napišite program koji æe ispisati velièinu svih tipova podataka (koje poznajete) izraženu u bajtima.

*/

int main() {

	cout <<"Velicina int-a iznosi: " << sizeof(int) << endl;
	cout << "Velicina short int-a iznosi: " << sizeof(short int) << endl;
	cout << "Velicina char-a iznosi: " << sizeof(char) << endl;
	cout << "Velicina float-a iznosi: " << sizeof(float) << endl;
	cout << "Velicina double-a iznosi: " << sizeof(double) << endl;

	system("pause>0");
	return false;
}