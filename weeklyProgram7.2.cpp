#include<iostream>
using namespace std;

int n;
int sm(int sum,int a) {
	if (n >= 3) {
		a = n / 3;
		n = n / 3 + n % 3;
		sum += a;
		sm(sum,a);
	}
	else return sum;
}

int main() {
	cin >> n;
	int sum = n,a=0;
	cout << sm(sum, a);
}