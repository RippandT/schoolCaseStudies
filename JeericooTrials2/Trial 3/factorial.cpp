#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char** argv) {
	/* Variables */
	int input;
	int product = 1;
	int factor;
	
	/* User Input */
	cout << "Factorials!\n\n";
	cout << "Enter a positive integer: ";
	cin >> input;
	cout << endl;
	
	/* Output */
	if (input > 0){
		cout << input << "! is:\n";
		
		for (int loop = input, factorOut = input; loop != 0; loop--){
			cout << factorOut; //Shows in the output
				
				//adds a * when the last number isn't 1
				if (factorOut != 1){
					cout << " \* ";
				}
				
			//computation for the factorial
			product *= factor;
			factor = factor + 1;
			
			//computation for the output
			factorOut -= 1;
		}
		
		cout << " = " << product;
	}
	/* if input is 0 */
	else if (input == 0){
		cout << "0! is 0";
	}
	/* if input is a negative integer */
	else {
		cout << "We don't do negative integers here!";
	}
	
	/* Executable use */
	cout << "\n\n";
	system("pause");
	
	return 0;
}

