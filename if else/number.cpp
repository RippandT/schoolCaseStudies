#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int num;
	
	cout << "Enter an integer: ";
	cin >> num;
	
	if (num > 0){ // positive integer
		cout << "You've entered a positive integer: " << num << endl;
	}
	else if (num < 0){ // negative integer
		cout << "You've entered a negative integer: " << num << endl;
	}
	else if (num == 0){ // zero
		cout << "You've entered zero\n";
	}
	else{
		cout << "That's not a number\n";
	}
	

	return 0;
}
