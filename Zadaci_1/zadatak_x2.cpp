#include < iostream >
#include < iomanip >

using namespace std;


int main() {

	int faktorijel = 1, 
		suma = 0;

	for (int i = 1; i <= 5; i++) {

		for (int j = 1; j <= i; j++) {

			faktorijel *= j;
		}
		suma += faktorijel;

	}
	cout << "Suma faktorijela iznosi: " << suma << endl;


	system("pause>0");
	return false;
}