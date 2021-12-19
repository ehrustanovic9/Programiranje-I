#include < iostream >
#include < iomanip >

using namespace std;

/*
 
Zadatak:

Napisati C++ program koji uèitava vrijednosti prijeðenog puta u kilometrima, a zatim vrši
konverziju u mjernu jedinicu po izboru korisnika: centimetre, milimetre, milje ili stope.
Problem riješiti pomoæu funkcija!

*/

void menu();

double centimetar(double km);
double milimetar(double km);
double milja(double km);
double stopa(double km);

int main() {

	double kilometar;
	int mn_list;
	
	do {

		cout << "Unesite prijedjeni put u kilomerima ( mora biti veci od 0! )" << endl;
		cin >> kilometar;

	} while (kilometar <= 0);

	menu();
	cin >> mn_list;

	switch (mn_list) {

		case 1: {

			cout << "\n" << kilometar << " kilometra ima: " << centimetar(kilometar) << " centimetara!" << endl;
		}
		break;
		case 2: {

			cout << "\n" << kilometar << " kilometra ima: " << milimetar(kilometar) << " milimetara!" << endl;
		}
		break;
		case 3: {

			cout << "\n" << kilometar << " kilometra ima: " << milja(kilometar) << " milja!" << endl;
		}
		break;
		case 4: {

			cout << "\n" << kilometar << " kilometra ima: " << stopa(kilometar) << " stopa!" << endl;
		}
		break;

	default:cout << "Unjeli ste pogresan izborni broj!" << endl;
	break;
	}

	system("pause>0");
	return false;
}

void menu() {

	cout << "\nKilometre u centimetre\t|1|" << endl;
	cout << "Kilometre u milimetre \t|2|" << endl;
	cout << "Kilometre u milje     \t|3|" << endl;
	cout << "Kilometre u stope     \t|4|" << endl;

}

double centimetar(double km) {

	return km * pow(10.0, 5);
}

double milimetar(double km) {

	return centimetar(km) * 10;
}

double milja(double km) {

	return km*0.62137;
}

double stopa(double km) {

	return (km * 1000) / 0.3048;
}


