#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char** argv) {
	/* Variables */
	int input;
	int fib1;
	int fib2;
	int fibOut = 1; // the first number of the sequence is 1
	
	/* User Input */
	cout << "Fibonacci Sequence\n\n";
	cout << "How many loops? ";
	cin >> input;
	
	/* Output */
	if (input > 0){
		cout << "\nThe Sequence is:\n";
		
		//Sequencing
		for (int loop = 0; loop < input; loop++){
			//sequence output
			cout << fibOut;
			
			//outputs a comma if the sequence continues
			if (loop < input - 1){
				cout << ", ";
			}
			
			//computation
			fib1 = fib2;
			fib2 = fibOut;
			fibOut = fib1 + fib2;
		}
	}
	/* If input is either a 0 or a negative integer */
	else {
		cout << "You have entered 0 or a negative integer. Program does not compute.";
	}
	
	/* Executable use */
	cout << "\n\n";
	
	system("pause");
	return 0;
}
