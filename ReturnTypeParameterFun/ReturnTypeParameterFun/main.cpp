#include <iostream>

using namespace std;

void printHello();
void printNumber(int a);
int giveMe10();
int addThese(int a, int b);
int square(int n);

int main() {
	int a = 120;
	int b = 580;

	printHello();
	printNumber(100);

	cout << giveMe10() << endl;
	cout << addThese(a,b) << endl;
	cout << square(addThese(a,50)) << endl;


	return 0;
}

void printHello() {
	cout << "Hello there" << endl;
}

void printNumber(int a) {
	cout << "The number is: " << a << endl;
}

int giveMe10() {
	return 10;
}

int addThese(int a, int b) {
	return a + b;
}

int square(int n) {
	return n * n;
}