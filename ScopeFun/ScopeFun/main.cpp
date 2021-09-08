#include <iostream>

using namespace std;

//lifetime of variables

void someFunction(int aParam);
double myGlobalDouble = 3.14159265;
int main() {
	int local = 20;
	cout << "My local variable is: " << local << endl;
	cout << "My global Double in main is: " << myGlobalDouble << endl;
	someFunction(25);
	someFunction(26);
	someFunction(27);
	return 0;
}

void someFunction(int aParam) {
	int myLocalNum = 100;
	static int mystatic = 500; //doesn't reset
	mystatic++;
	cout << "My local number is: " << myLocalNum << endl;
	cout << "My parameter is: " << aParam << endl;
	cout << "My global Double in someFunction is: " << myGlobalDouble << endl;
	cout << "My static variable is: " << mystatic << endl;
}