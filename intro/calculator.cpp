#include <iostream>

using namespace std;

int main() {
	double a, b;
	char op;

	cout.setf(ios::fixed);
	cout.precision(3);
	cin >> a >> op >> b;

	switch (op) {
	case '+':
		cout << a + b << endl;
		break;
	case '-':
		cout << a - b << endl;
		break;
	case '*':
		cout << a * b << endl;
		break;
	case '/':
		if (b == 0.0) {
			cout << "ze" << endl;
		} else {
			cout << a / b << endl;
		}
		break;
	default:
		cout << "ze" << endl;
		break;
	}
}
