#include<iostream>
using namespace std;
int n;
int pnt1(int i,int j) {
	if (j < n) {
		cout << " ";
		pnt1(i, j + 1);
	}
	else return 0;
}
int pnt2(int i, int j) {
	if (j < i) {
		cout << "*";
		pnt2(i, j+1);
	}
	else return 0;
}

int pnt(int i) {
	if (i <= n) {
		pnt1(i, i);
		pnt2(i, 0);
		pnt2(i, 1);
		if(i<n)cout << "\n";
		pnt(i + 1);
	}
	else return 0;
}


int main() {
	cin >> n;
	int i = 1;
	pnt(i);
}