#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	while (a + b != 0) {
		cout << a + b << endl;
		cin >> a >> b;
	}
}