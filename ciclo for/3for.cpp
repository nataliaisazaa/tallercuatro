#include<iostream>
using namespace std;

int main() {
	float f;
	int i;
	float n;
	cout << "Digite un numero" << endl;
	cin >> n;
	f = 1;
	if (n>=0) {
		for (i=1;i<=n;i++) {
			f = f*i;
		}
		cout << "El factorial es" << f << endl;
	} else {
		cout << "No es factorial" << endl;
	}
	return 0;
}

