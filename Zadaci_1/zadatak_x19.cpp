#include < iostream >

using namespace std;

bool isPrijestupna(int g);
bool isValidan(int d, int m, int g);

int getBrojDana(int m, int g);

int main() {

	int dan, mjesec, godina;

	cout << "Unesite dan: ";
	cin >> dan;
	cout << "Unesite mjesec: ";
	cin >> mjesec;
	cout << "Unesite godinu: ";
	cin >> godina;

	if (isValidan(dan, mjesec, godina))
		cout << "\nUneseni datum je validan: " << dan << "." << mjesec << "." << godina << endl;
	else
		cout << "\nUneseni datum nije validan" << endl;


	system("pause>0");
	return false;
}

bool isPrijestupna(int g) {

	if (g % 400 == 0 || g % 4 == 0 && !(g % 100 == 0))
		return true;
	else
		return false;
}

int getBrojDana(int m, int g) {

	int broj_dana = 0;

	switch (m) {

	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: broj_dana = 31;
		break;

	case 2: {

		if (isPrijestupna(g) == 0)
			broj_dana = 28;
		else
			broj_dana = 29;
	}
		  break;

	case 4:
	case 6:
	case 9:
	case 11: broj_dana = 30;
		break;

	}
	return broj_dana;
}

bool isValidan(int d, int m, int g) {

	bool validan = false;

	int dan = getBrojDana(m, g);

	if (d <= dan) {

		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12 || isPrijestupna(g) == 1 && m == 2)
			validan = true;
		else if (d <= dan)
			if (m == 4 || m == 6 || m == 9 || m == 11)
				validan = true;
			else
				validan = false;
	}
	return validan;
}