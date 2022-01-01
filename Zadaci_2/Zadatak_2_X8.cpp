#include < iostream >

using namespace std;

void transformation(int, int);

int main() {

	int a, b;

	do {

		cout << "Unesite a: ";
		cin >> a;

	} while (a < 0 || a>10000);

	do {

		cout << "Unesite b: ";
		cin >> b;

	} while (b < 0 || b>10000);

	transformation(a, b);

	system("pause>0");
	return false;
}

void transformation(int x, int y) {

	int cA = 0, cB = 0, parni = 0, neparni = 0;

	while (x > 0 && y > 0) {

		cA = x % 10;
		cB = y % 10;

		if ((cA % 2) == 0) {

			parni *= 10;
			parni += cA;
		}
		else {

			neparni *= 10;
			neparni += cA;

		}

		if ((cB % 2) == 0) {

			parni *= 10;
			parni += cB;
		}
		else {

			neparni *= 10;
			neparni += cB;

		}
		x /= 10;
		y /= 10;

	}
	cout << "Broj sa svim parnim brojevima: " << parni << endl;
	cout << "Broj sa svim neparnim brojevima: " << neparni << endl;
}