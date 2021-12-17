#include < iostream >
#include < iomanip >

using namespace std;


int main() {

	int p = 1, 
		   s = 0;

	for (int i = 1; i <= 10; i++) {

		for (int j = -5; j <= 5; j++) {

			s+= (i - 1) * (1 - j);

		}
	}
	p *= s;
	cout << "Produkt je: " << p << endl;




	system("pause>0");
	return false;
}