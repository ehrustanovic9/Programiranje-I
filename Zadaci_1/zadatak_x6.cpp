#include < iostream >
#include < iomanip >

using namespace std;


int main() {

	int n;

	double s = 0;

	do {

		cout << "Unesite n: ";
		cin >> n;

	} while (n < 0);

	for (int i = 1; i <= n; i++) {

		for (int j = 5; j <= 10; j++) {

			s += pow(i, 2) * j - pow(j, 2) * i;

		}

	}
	cout << "Suma je: " << s << endl;

	system("pause>0");
	return false;
}