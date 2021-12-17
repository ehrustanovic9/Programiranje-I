#include < iostream >
#include < iomanip >

using namespace std;


int main() {

	int n;

	double s = 0;

	do {

		cout << "Unesite n: ";
		cin >> n;

	} while (n < 1 || n > 16);

	for (int i = 1; i <= n; i++) {

		s += pow(i, 2);

		for (int j = 5; j <= 10; j++) {

			s += pow(i - j, 2) / pow(j, 2);

		}

	}
	cout << "Suma je: " << s << endl;

	system("pause>0");
	return false;
}