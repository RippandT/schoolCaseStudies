#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char** argv) {
	/* Variables */
	int input;
	int product = 1;
	int factor;
	
	/* User Input */
	cout << "Product Accumulation\n\n";
	cout << "Enter a positive integer: ";
	cin >> input;
	cout << endl;
	
	/* Output */
	if (input > 0){
		cout << "The output for the accumulation is:\n";
		
		for (int loop = 0; loop != input; loop++){
			cout << factor;
		
				if (loop != input - 1){
					cout << " \* ";
				}
		
			product *= factor;
			factor = factor + 1;
		}
		
		cout << " \= " << product;
	}
	/* if input is 0 */
	else if (input == 0){
		cout << "0 * 0 = 0";
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
