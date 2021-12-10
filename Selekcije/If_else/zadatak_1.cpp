#include < iostream >

using namespace std;

/*

Primjer: 

Napišite program za jednostavnu igru pogaðanja brojeva (u intervalu od 1 do 10).

*/

int main() {
	
	int  broj, 
		 pogodak = 7;

	cout << "Unesite broj od 1 do 10" << endl;
	cin >> broj;

	if (broj == pogodak)
	{
		cout << "Cestitamo! Pogodili ste broj." << endl;
	}
	else
		cout << "Zao nam je. Niste pogodili broj." << endl;

	system("pause>0");
	return false;
}