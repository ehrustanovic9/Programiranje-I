#include < iostream >

using namespace std;

bool isPrijestupna(int g);
bool isValidan(int d, int m, int g);
bool isStarije(int d1, int m1, int g1, int d2, int m2, int g2);

int getBrojDana(int m, int g);

int main() {

	int d1, d2, d3, m1, m2, m3, g1, g2, g3;

	cout << "Unesite datum a program ce ispisati najstariji!" << endl;

	do {

		cout << "\n[1]: Unesite dan: ";
		cin >> d1;
		cout << "[1]: Unesite mjesec: ";
		cin >> m1;
		cout << "[1]: Unesite godinu: ";
		cin >> g1;

	} while (isValidan(d1, m1, g1) != 1);

	do {

		cout << "\n[2]: Unesite dan: ";
		cin >> d2;
		cout << "[2]: Unesite mjesec: ";
		cin >> m2;
		cout << "[2]: Unesite godinu: ";
		cin >> g2;

	} while (isValidan(d2, m2, g2) != 1);

	do {

		cout << "\n[3]: Unesite dan: ";
		cin >> d3;
		cout << "[3]: Unesite mjesec: ";
		cin >> m3;
		cout << "[31]: Unesite godinu: ";
		cin >> g3;

	} while (isValidan(d3, m3, g3) != 1);

	if (isStarije(d1, m1, g1, d2, m2, g2) && isStarije(d1, m1, g1, d3, m3, g3)) {

		cout << "\nNajstariji datum je: " << d1 << "." << m1 << "." << g1 << endl;

	}
	else if (isStarije(d2, m2, g2, d3, m3, g3)) {

		cout << "\nNajstariji datum je: " << d2 << "." << m2 << "." << g2 << endl;

	}
	else
		cout << "\nNajstariji datum je: " << d3 << "." << m3 << "." << g3 << endl;

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

bool isStarije(int d1, int m1, int g1, int d2, int m2, int g2) {

	if (g1 < g2)
		return true;
	else if (g1 == g2 && m1 < m2)
		return true;
	else if (g1 == 0 && m1 == m2 && d1 < d2)
		return true;
	else
		return false;

}