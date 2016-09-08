#include<iostream>
using namespace std;

int main() {
	int a;
	int c;
	a = 0;
	c = 1;
	while (c<=50) {
		if (c%2!=0) {
			a = a+c;
			c = c+2;
			cout << a << "+" << c << "=" << a+c << endl;
		}
	}
	return 0;
}

