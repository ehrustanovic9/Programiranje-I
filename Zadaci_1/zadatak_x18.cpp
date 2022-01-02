#include < iostream >

using namespace std;

int main() {

	int n;

	do {

		cout << "Unesite n: ";
		cin >> n;

	} while (n < 10);

	for (int i = 10; i <= n; i++) {

		if (i % 3 == 0 && i % 100 == 33)
			cout << i << " ";

	}

	system("pause>0");
	return false;
}