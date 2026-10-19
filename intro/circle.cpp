#include <iostream>

using namespace std;

int main() {
	double pi = 3.14;
	double r;
	cin >> r;
	cout.setf(ios::fixed);
	cout.precision(3);
	cout << 2 * pi * r << " " << pi * r * r;
}
