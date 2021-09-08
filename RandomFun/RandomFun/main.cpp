#include <iostream>
#include <cstdlib> //to use the random function
#include <ctime> //to generate the seed with the current system time

using namespace std;

int main() {
	
	srand(time(nullptr));

	/*So inside of Main, I am going to see the random number generator. So I've seeded the random number generator.
		We passed null pointer to time and then the result of that to the srand. So every time I launch the program, I am actually getting the current system time.
		And then that seeding the random number generator. So it will make sufficiently random values.*/

	int val1 = rand() % 10; //  0=< val1 < 10
	int val2 = rand() % 10 + 1; //  1=< val1 =< 10

	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;
	return 0;
}