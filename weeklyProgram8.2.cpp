#include<iostream>
using namespace std;
int main() {
	int a, sum = 0;
	cout << "Data in array: ";
	for (int i = 1; i < 11; i++){
		cin >> a;
		if (a % 2 == 0)sum -= i;
		else sum += i;
	}
	cout <<"Result: " << sum;
}