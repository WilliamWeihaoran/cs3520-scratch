#include <iostream>
#include <string>
using namespace std;

int main() {
	string greeting = "Hello World";

	for (char x: greeting) {
		if (x != 'l') {
			cout << x << endl;
		}
	}
}
