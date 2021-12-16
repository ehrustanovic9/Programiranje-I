#include < iostream >
#include < iomanip >

using namespace std;

/*

Zadatak

Napišite program koji upotrebom for petlji i "\t" sekvence ispisjue sljedeæe:N		10*N	100*N	1000*N

																			 1		10		100		1000
																			 2		20		200		2000
																			 3		30		300		3000
																			 4		40		400		4000
																			 5		50		500		5000

*/

int main() {

	cout << "N\t10*N\t100*N\t1000*N\n" << endl;
	
	for (int i = 1; i <= 5; i++) {

		cout << i;

		for (int j = 10; j <= 1000; j *= 10) {

			cout << "\t" << i * j;

		}
		cout << endl;
		

	}

	system("pause>0");
	return false;
}