#include<iostream>
using namespace std;
int n;
int pnt(int i) {
	if (i != n) {
		cout << "*";
		i++;
		pnt(i);
	}
	else return 0;
}
int main() {
	cin >> n;
	int i = 0;
	pnt(i);
}