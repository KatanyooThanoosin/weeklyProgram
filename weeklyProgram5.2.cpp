#include<iostream>
using namespace std;
int n;
int pnt(int i, int j) {
	if (i != n) {
		if (j != n) {
			cout << "*";
			j++;
			pnt(i, j);
		}
		else {
			cout << "\n";
			j = 0;
			pnt(i + 1, j);
		}
	}
	return 0;
}
int main() {
	cin >> n;
	int i = 0, j = 0;
	pnt(i, j);
}