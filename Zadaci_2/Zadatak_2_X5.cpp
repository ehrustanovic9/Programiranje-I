#include < iostream >

using namespace std;

int min(int, int);
int max(int, int);

int main() {

	int n, c = 0;

	do {

		cout << "Unesite n: ";
		cin >> n;

	} while (n > 1);

	for (int i = -5; i <= 5; i++) {

		for (int j = 1; j <= n; j++) {

			c += min(5, max(0, i * j));

		}

	}

	cout << "Rezultat: C je jednako: " << c << endl;

	system("pause>0");
	return false;
}

int min(int x, int y) {

	if (x < y)
		return x;
	else
		return y;	
}

int max(int x, int y) {

	if (x > y)
		return x;
	else
		return y;
}

