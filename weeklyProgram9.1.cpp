#include<iostream>
using namespace std;

bool check(int a[100][100], int n) {
	int c[10000];
	for (int i = 0; i < n * n; i++) c[i] = 0;
	for (int i = 0; i < n; i++)for (int j = 0; j < n; j++) c[a[i][j] - 1] = 1;
	for (int i = 0; i < n * n; i++) if (c[i - 1] == 0) return false;
	return true;
}

int main() {
	int n, a[100][100]; cin >> n;
	for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> a[i][j];
	if (!check) {
		cout << "No";
		return 0;
	}
	int k = 0, sum, t;
	while (k != n) {
		sum = 0;
		for (int i = 0; i < n; i++)sum += a[k][i];
		if (k != 0) {
			if (sum != t) {
				cout << "No";
				return 0;
			}
		}
		else t = sum;
		k++;
	}
	k = 0;
	while (k != n) {
		sum = 0;
		for (int i = 0; i < n; i++)sum += a[i][k];
		if (k != 0) {
			if (sum != t) {
				cout << "No";
				return 0;
			}
		}
		k++;
	}
	sum = 0;
	for (int i = 0; i < n; i++) sum += a[i][i];
	if (sum != t) {
		cout << "No";
		return 0;
	}
	sum = 0;
	for (int i = 0; i < n; i++) {
		int x = n - i - 1;
		sum += a[x][i];
	}
	if (sum != t) {
		cout << "No";
		return 0;
	}
	cout << "Yes";
}