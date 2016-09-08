#include<iostream>
using namespace std;

int main() {
	int i;
	int n;
	int r;
	int x;
	int z;
	x = 0;
	z = 1;
	cout << "Ingrese un numero" << endl;
	cin >> n;
	for (i=0;i<=n;i++) {
		r = x+z;
		z = x;
		x = r;
		cout << r << endl;
	}
	return 0;
}
