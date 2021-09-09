#include <iostream>

using namespace std;

void countDown(int num);
int sumNums(int num);
int factorial(int num);

int main() {
	countDown(10);
	cout << sumNums(10) << endl;
	cout << factorial(3) << endl;
	return 0;
}

//recursive funtions
void countDown(int num) {
	if (num >= 0)
	{
		cout << num << endl;
		countDown(--num); // num= num - 1
	}
}

int sumNums(int num) {
	if (num >= 1)
	{
		return num + sumNums(num - 1);
	}
	return num;
}

int factorial(int num) {
	if (num == 0 || num == 1)
	{
		return 1;
	}
	else if(num > 1){
		return num * factorial(num - 1);
	}
}