#include < iostream >
#include < iomanip >

using namespace std;


int main() {

	for (int u_1 = 0; u_1 <= 1; u_1++) {

		for (int u_2 = 0; u_2 <= 1; u_2++) {

			for (int u_3 = 0; u_3 <= 1; u_3++) {

				cout << u_1 << " " << u_2 << " " << u_3 << " " << " ( NOR ) " << !(u_1 || u_2 || u_3) << endl;

			}

		}

	}

	system("pause>0");
	return false;
}