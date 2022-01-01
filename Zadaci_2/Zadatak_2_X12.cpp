#include < iostream >

using namespace std;

bool binaran(int);

int operacija(int, int);
int brojCifri(int);

int main() {

	int b1, b2, brCifri;

	do {

		cout << "[1]: Unesite binarni broj: ";
		cin >> b1;

	} while (b1 < 0 && binaran(b1) != 1);

	brCifri = brojCifri(b1);

	do {

		cout << "[2]: Unesite binarni broj: ";
		cin >> b2;

	} while (!(brCifri == brojCifri(b2) && binaran(b2) == 1));

	cout << "\nRezultat je: " << operacija(b1, b2);

	system("pause>0");
	return false;
}

bool binaran(int x) {

	bool bin = false;

	while (x > 0) {

		int cifra;

		cifra = x % 10;
		if (!(cifra == 0 || cifra == 1)) {

			bin = false;
			break;
		}
		else
			bin = true;

		x /= 10;
	}
	return bin;
}

int operacija(int x,  int y) {

	int andOp, rez = 0, brojac = 0;

	if (brojCifri(x) == brojCifri(y)) {

		while (x > 0 && y > 0) {

			int cX, cY;

			cX = x % 10;
			cY = y % 10;

			andOp = ((!cX) || cY);
			rez += andOp * pow(10, brojac);

			x /= 10;
			y /= 10;
			brojac++;

		}
	}
	return rez;
}

int brojCifri(int x) {

	int brcX = 0;

	while (x > 0) {

		int cX;

		cX = x % 10;
		brcX++;
		x /= 10;

	}
	return brcX;	
}