#include<iostream>
using namespace std;

bool check(int a[100][100],int n) {
	int c[10000];
	for (int i = 0; i < n*n; i++) c[i] = 0;
	for (int i = 0; i < n; i++)for (int j = 0; j < n; j++) c[a[i][j]-1] = 1;
	for (int i = 0; i < n * n; i++) if (c[i - 1] == 0) return false;
	return true;
}

int main() {
	int n,a[100][100]; cin >> n;
	for (int i = 0; i < n; i++)for (int j = 0; j < n; j++)cin >> a[i][j];
	if (!check) {
		cout << "No";
		return 0;
	}
	int k=0,t;
	while (k != n) {
		int s1 = 0,s2 = 0,s3=0,s4=0;
		for (int i = 0; i < n; i++) {
			s1 += a[k][i]; s2 += a[i][k];
			if (k == 0) {
				s3 += a[i][i];
				int x = n - i - 1;
				s4 += a[x][i];
			}
		}
		if (k != 0) {
			if ((s1 != s2) && (s1 != t || s2 != t)) {
				cout << "No";
				return 0;
			}
		}
		else {
			if (s3 != s4) {
				cout << "No";
				return 0;
			}
			else if (s3 != s1||s3!=s2) {
				cout << "No";
				return 0;
			}
			else t = s1;
		}
		k++;
	}
	cout << "Yes";
}