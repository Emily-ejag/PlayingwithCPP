#include <iostream>

using namespace std;

void valueChanged(int num1);
void valueChanged2(int& num2);

int main() {
	int myNumber=20;
	cout << "Before valueChanged= " << myNumber << endl;
	valueChanged(myNumber);
	cout << "After valueChanged= " << myNumber << endl;
	cout <<"\n\n" << endl;
	cout << "Before valueChanged2= " << myNumber << endl;
	valueChanged2(myNumber);
	cout << "After valueChanged2= " << myNumber << endl;

	return 0;
}

void valueChanged(int num1) {
	num1 = 100;
}

void valueChanged2(int& num2) {
	num2 = 100;
}