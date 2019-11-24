#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int num1;
	int num2;
	int num3;
	
	cout << "Enter first integer: ";
	cin >> num1;
	cout << "Enter second integer: ";
	cin >> num2;
	cout << "Enter last integer: ";
	cin >> num3;
	
	if (num1 > num2 && num1 > num3){
		cout << num1 << " is the largest number";
	}
	else if (num2 > num1 && num2 > num3){
		cout << num2 << " is the largest number";
	}
	else if (num3 > num2 && num3 > num1){
		cout << num3 << " is the largest number";
	}
	else{
		cout << "Two or all of the numbers are of the same value";
	}
	
	return 0;
}
