#include <iostream>
#include <array>

using namespace std;

int main() {

	array <int, 5> myArray{}; //{} inizialite array values in 0


	for (int a: myArray) {
		cout << a << endl;
	}

	cout << "size of Array : " << myArray.size() << endl;


	return 0;
}