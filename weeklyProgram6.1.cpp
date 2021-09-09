#include<iostream>
using namespace std;
int main() {
	int a,so = 0,se=0;
	cout << "Data in array: ";
	for (int i = 0; i < 10; i++) {
		cin >> a;
		if (a % 2 == 0) se += (i+1);
		else so += (i+1);
	}
	cout << "Result: " << so-se;
}