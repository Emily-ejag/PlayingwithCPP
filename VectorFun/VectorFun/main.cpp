#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	//vector are just like arrays but automatically resize as needed

	vector<int> someVec;

	vector<string> otherVec(3);

	//adding data to someVec

	someVec.push_back(1);
	someVec.push_back(2);
	someVec.push_back(3);
	someVec.push_back(4);

	//adding data to otherVec

	otherVec[0] = "Emily";
	otherVec[1] = "Cori";
	otherVec[2] = "Angie";

	otherVec.push_back("Vicky");

	for (int b : someVec) {
		cout << b << endl;
	}

	for (string a: otherVec) {
		cout << a << endl;
	}

	/*vector functions
	
	front: return the front element
	back: return the back element
	pop_back: remove the element at the end of the vector
	insert: insert an element given an specific location within the vector, the location has to be an iterator, not just indices
	begin: to know how to insert at the begining of the vector

	*/

	cout << "Front and Back " << endl;

	cout << "Front: " << otherVec.front() << endl;
	cout << "Back: " << otherVec.back() << endl;

	otherVec.pop_back();
	otherVec.insert(otherVec.begin(), "Danna"); //insert (fist element is the iterator, second is what you want to insert)

	cout << "Now Front is: " << otherVec.front() << endl;
	cout << "Now Back is: " << otherVec.back() << endl;

	return 0;
}