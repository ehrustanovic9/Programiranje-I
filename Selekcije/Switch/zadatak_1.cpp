#include < iostream >

using namespace std;

/*

Zadatak: 

Napraviti program koji æe na osnovu dva unesena realna broja i znaka za
operaciju (+, -, * i /) izvršiti operaciju nad unesenim brojevima. Poštujte sve faze
procesa programiranja

*/

int main() {
	
	int broj_1,
		broj_2;

	char operacija;

	cout << "Unesite dva broja" << endl;
	cin >> broj_1 >> broj_2;

	cout << "Unesite operaciju koju zelite izvrsiti nad ova dva broja" << endl;
	cin >> operacija;

	switch (operacija)
	{
		case char('+') : {

			cout <<"Zbir dva broja iznosi: " << broj_1 + broj_2 << endl;

		}
		break;

		case char('-') : {

			cout << "Razlika dva broja iznosi: " << broj_1 - broj_2 << endl;

		}
		break;

		case char('/') : {

			if (broj_2 == 0)
			{
				cout << "Djeljenje s 0 nije moguce!" << endl;
			}
			else
				cout << "Kolicnik dva broja iznosi: " << broj_1 / broj_2 << endl;

		}
		break;

		case char('*') : {

			cout << "Produkt dva broja iznosi: " << broj_1 * broj_2 << endl;

		}
		break;

		default: cout << "Unjeli ste pogresnu operaciju" << endl;
		break;
	}

	system("pause>0");
	return false;
}