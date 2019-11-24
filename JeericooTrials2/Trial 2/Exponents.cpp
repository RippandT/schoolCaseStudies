#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char** argv) {
	/* Variables */
	int firstno;
	int secondno;
	int add;
	int product = 0;
	
	/* User Input */
	cout << "Exponents and \"tutorial\" (no negatives!)\n\n";
	cout << "Enter a number: ";
	cin >> firstno;
	cout << "Enter the exponent: ";
	cin >> secondno;
	
	/* If both factors is above 0 */
	if (firstno >= 0 && secondno >= 0){
		cout << "\nThe Exponential process is: \n";
		
		//the exponent process
		for (add = 0, product = firstno; add < secondno - 1; add++){
			product *= firstno;
			cout << firstno << " * ";
		}
		
		//output
		cout << firstno << " = " << product << "\n\nThus: \n";
		cout << firstno << " ^ " << secondno << " = " << product << "\n\n";
	}
	/* If one of the factors is a negative integer */
	else {
		cout << "\nSorry, we don't do negative integers!\n\n";
	}
	
	/* Executable use */
	system("pause");
	return 0;

	return 0;
}
