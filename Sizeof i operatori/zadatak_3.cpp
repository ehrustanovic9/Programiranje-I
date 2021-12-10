#include < iostream >

using namespace std;

/*

ZADATAK: 

Napišite program u kojem æete deklarirati onoliko varijabli tipa char koliko 
ima slova u vašem imenu. Svakoj od varijabli dodijelite po jedno slovo svog imena. 
Ispišite vrijednosti svih varijabli, a zatim promijenite vrijednosti varijabli tako da velika 
slova postanu mala i obrnuto.

*/

int main() {

	char slovo_1 = 'E', 
		 slovo_2 = 's', 
		 slovo_3 = 'a', 
		 slovo_4 = 'd';

	cout << slovo_1 << slovo_2 << slovo_3 << slovo_4 << endl;
	cout << "\t" << int(slovo_1) << "\t" << int(slovo_2) << "\t" << int(slovo_3) << "\t" << int(slovo_4) << endl; //vrijednosti karaktera na ASCII kodu
		
	slovo_1 += 32;
	slovo_2 -= 32;
	slovo_3 -= 32;
	slovo_4 -= 32;

	cout << slovo_1 << slovo_2 << slovo_3 << slovo_4 << endl;
	cout << "\t" << int(slovo_1) << "\t" << int(slovo_2) << "\t" << int(slovo_3) << "\t" << int(slovo_4) << endl; //vrijednosti karaktera na ASCII kodu


	system("pause>0");
	return false;
}