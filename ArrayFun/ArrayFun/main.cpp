#include <iostream>
#include <array>
using namespace std;

int main() {

	const int ARRAY_SIZE=5;

	int myArray[ARRAY_SIZE];

	myArray[0] = 10;
	myArray[1] = 20;
	myArray[2] = 30;
	myArray[3] = 40;
	myArray[4] = 50;

	string names[5]{"Luis","Maria","Emily","Corina","Angie"};

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << myArray[i] << endl;
	}

	for (int j = 0; j < 5; j++)
	{
		cout << names[j] << endl;
	}
	//for de recorrido de Arrays
	for (string name : names) {
		cout << name << endl;
	}


	return 0;
}