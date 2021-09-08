#include <iostream>

using namespace std;

int main() {

	int count = 0;
	//while loop
		/*while (count < 10) {
			cout << count << endl;
			count++;
		}*/


	//do-while loop
		/*do
		{
			cout << count << endl;
			count++;
		} while (count < 10);*/


	//for loop
		/*for (int i = 0; i < 10; i++)
		{
			cout << i << endl;
		}*/

	//exercise

	int input=0;

	while (input >= 0) {
		cout << "Please enter a non-negative number to continue, \n or negative if you want to quit " << endl;
		cin >> input;
		cout << input << endl;
	}

	return 0;

}