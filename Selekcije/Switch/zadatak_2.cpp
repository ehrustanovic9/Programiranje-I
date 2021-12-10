#include < iostream >

using namespace std;

/*

Zadatak: 

Napišite program koji æe za uneseni broj mjeseca ispisati koliko taj mjesec ima
dana. Predvidite što se dešava u sluèaju prijestupne godine. Poštujte sve faze procesa
programiranja.

*/

int main() {
	
	int mjesec;

	const int godina = 2021;

	cout << "Unesite broj mjeseca ( 1 - 12 )!" << endl;
	cin >> mjesec;

	switch (mjesec) {

	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: cout << "Mjesec kojeg ste unjeli ima 31 dan!" << endl;
		break;

	case 2:
		if (godina % 4 != 0) {

			cout << "Mjesec kojeg ste unjeli ima 28 dana!" << endl;

		}
		else
			cout << "Mjesec kojeg ste unjeli ima 29 dana!" << endl;
		break;

	case 4:
	case 6:
	case 9:
	case 11:cout << "Mjesec kojeg ste unjeli ima 30 dana!" << endl;
		break;

	default:cout << "Unjeli ste pogresan broj mjeseca!" << endl;
		break;
	}

	system("pause>0");
	return false;
}