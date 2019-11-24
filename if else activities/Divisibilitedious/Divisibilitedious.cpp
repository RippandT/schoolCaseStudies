#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	//variable
	int number;
	
	//user input
	cout << "Divisibility by 2, 3, 5 checker\n\n";
	cout << "Enter a number that's more than 9 and less than 10000:\n";
	cin >> number;
	cout << endl;
	
	//Decider
	if (number <= 9 || number >= 10000){
		cout << "That number is outside of the range of this program\n";
	}
	else{
		//number spliter
		int digit1 = number % 10;
		int digit2 = number / 10 % 10;
		int digit3 = number / 100 % 10;
		int digit4 = number / 1000 % 10;
		
		//Divisiblity by 2
		if (digit1 % 2 == 0){
			cout << number << " is divisible by 2\n";
		}
		else{
			cout << number << " is not divisible by 2\n";
		}
		
		//Divisiblity by 3
		if ((digit1 + digit2 + digit3 + digit4) % 3 == 0){
			cout << number << " is divisible by 3\n";
		}
		else{
			cout << number << " is not divisible by 3\n";
		}
		
		//Divisiblity by 5
		if (digit1 == 5 || digit1 == 0){
			cout << number << " is divisible by 5\n";
		}
		else{
			cout << number << " is not divisible by 5\n";
		}
	}
	
	//prevents .exe from colsing after pressing Enter
	cout << endl;
	system("pause");
	
	return 0;
}
