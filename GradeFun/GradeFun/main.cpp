#include <iostream>

using namespace std;

void main() {
	char grade;

	cout << "Please enter a letter grade" << endl;
	cin >> grade;

	switch (grade)
	{
		case 'A':
			cout << "Great jod!"<< endl;
			break;
		case 'B':
			cout << "Good jod!" << endl;
			break;
		case 'C':
			cout << "You can do better!" << endl;
			break;
		case 'D':
			cout << "You are getting close to failing!" << endl;
			break;
		case 'F':
			cout << "You are failing the course!" << endl;
			break;
		default:
			cout << "You have entered and invalid grade. Try again" << endl;
	}
}