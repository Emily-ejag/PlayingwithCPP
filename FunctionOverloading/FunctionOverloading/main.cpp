#include <iostream>
#include <string>
using namespace std;

int getResult(int num1,int num2);
string getResult(string st1, string st2);

int main() {
	cout << getResult(20, 30) <<endl;
	cout << getResult("Emily", "Arteaga") << endl;
	return 0;
}

int getResult(int num1, int num2) {
	return num1 * num2;
}
string getResult(string st1, string st2) {
	return st1 + " " + st2;
}
