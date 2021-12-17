#include < iostream >
#include < iomanip >

using namespace std;


int main() {

	int n;

	double s = 0.0;

	do {

		cout << "Unesite cijeli broj: ";
		cin >> n;

	} while (n < 1 || n>100);

	for (int i = 1; i <= n; i++) {

		s += pow(i, 2) / sqrt(i);

	}

	cout << "Suma iznosi: " << s << endl;


	system("pause>0");
	return false;
}