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
	cout << "Multiplication calculator and \"tutorial\" (no negatives!)\n\n";
	cout << "Enter the multiplicand: ";
	cin >> firstno;
	cout << "Enter the multiplier: ";
	cin >> secondno;
	
	/* If both factors is above 0 */
	if (firstno > 0 && secondno > 0){
		cout << "\nThe process of multiplying is: \n";
		
		//the multiplication process
		for (add = 0, product = firstno; add < secondno - 1; add++){
			product += firstno;
			cout << firstno << " + ";
		}
		
		//output
		cout << firstno << " = " << product << "\n\nThus: \n";
		cout << firstno << " x " << secondno << " = " << product << "\n\n";
	}
	/* If one of the factors is 0 */
	else if (firstno == 0 || secondno == 0){
		cout << "\nBecause of the Zero Property of Multiplication, \n";
		cout << firstno << " x " << secondno << " = " << product << "\n\n";
	}
	/* If one of the factors is a negative integer */
	else {
		cout << "\nSorry, we don't do negative integers!\n\n";
	}
	
	/* Executable use */
	system("pause");
	return 0;
}
