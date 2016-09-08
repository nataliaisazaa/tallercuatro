#include<iostream>
using namespace std;

int main() {
	int i;
	int n;
	int t;
	for (n=1;n<=20;n++) {
		for (i=1;i<=10;i++) {
			t = n*i;
			cout << n << "*" << i << "=" << t << endl;
		}
		cout << endl;
	}
	return 0;
}

