#include <iostream>
using namespace std;
int main() {
	cout << "Enter your age here.\n";
	int age;
	cin >> age;
	if (age > 18) {
		cout << "Your age is over 18.\n";
	}
	if (age < 18) {
		cout << "Your age is less than 18.\n";
	}
	if (age == 18) {
		cout << "Your age is 18.\n";
	}
	cin.get();
	return 0;
}
