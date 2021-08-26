#include<iostream>
using namespace std;
int main() {
	int x, y, z;
	cin >> x >> y >> z;
	if (x < y && x < z)cout << y << "," << z;
	else if(y<z)cout << x << "," << z;
	else cout << x << "," << y;
}