#include <iostream>

using namespace std;

int main() {

	int count=0;
		/*while (count < 10)
		{
			if (count == 5)
			{
				count++;
				continue;
			}

			cout << count << endl;
			count++;
		}*/

	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			//continue; //goes back to the loop the i++ is taking care of the loop, similar to count++ in the while loop
			break; //breaks entirely the loop
		}
		cout << i << endl;
	}

	return 0;
}