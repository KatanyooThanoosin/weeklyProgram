#include<iostream>
using namespace std;
int main(){
	int n; cin >> n;
	int sum = n,a=0;
	while (n>=3) {
		a = n / 3;
		n = n / 3 + n % 3;
		sum += a;
	}
	cout << sum;
}