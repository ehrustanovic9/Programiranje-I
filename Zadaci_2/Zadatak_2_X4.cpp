#include < iostream >

using namespace std;

int f1(int, int);

bool f2(int, int);

int main() {

	int n, c = 0, c_1, c_2;

	do {

		cout << "Unesite n: ";
		cin >> n;

	} while (n < 100 || n>10000);

	do {

		cout << "Unesite c_1: ";
		cin >> c_1;

	} while (c_1 < 0 || c_1>9);

	do {

		cout << "Unesite c_2: ";
		cin >> c_2;

	} while (c_2 < 0 || c_2>4);

	for (int i = 0; i <= n; i++) {
		
		c += f2(c_2, f1(i, c_1));

	}
	cout << "Rezultat: C je jednako: " << c << endl;
	
	system("pause>0");
	return false;
}

int f1(int x, int d) {

	int br_p = 0;

	while (x > 0) {

		if (x % 10 == d) 
			br_p++;

		x /= 10;
	}
	return br_p;
}

bool f2(int x, int y) {

	bool isti = false;

	if (x == y)
		isti = true;

	return isti;
}