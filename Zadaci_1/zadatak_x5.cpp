#include < iostream >
#include < iomanip >

using namespace std;


int main() {

	double s = 0;

	for (int i = -10; i <= 10; i++) {

		s += pow(i, 2);
	}
	for (int i = -5; i <= 5; i++) {

		s -= i;

	}
	s *= 1 / sqrt(5);
	cout << "Suma je: " << s << endl;

	system("pause>0");
	return false;
}