#include < iostream >

using namespace std;

int main() {

	for (int i = 97; i <= 122; i++) {

		if ((i - 1) % 2 == 0)
			cout << char(i) << " ";

	}

	system("pause>0");
	return false;
}