#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	/* input field */
	cout << "Numbers to Number Words Converter\n\n";
	cout << "Enter a number (0 - 9999): "; //prompt
	int number; //number storage
	cin >> number; //input
	cout << endl;
	
	/* computation */
	int digit1 = number % 10; //ones digit
	int digit2 = number / 10 % 10; //tens digit
	int digit3 = number / 100 % 10; //hundreds digit
	int digit4 = number / 1000 % 10; //thousands digit
	
	/* output */
	if(number < 10000 && number > 0){
		cout << "The number word for your number is:\n";
		// thousands place
		switch(digit4){ 
			case 1:
				cout << "one thousand ";
				break;
			case 2:
				cout << "two thousand ";
				break;
			case 3:
				cout << "three thousand ";
				break;
			case 4:
				cout << "four thousand ";
				break;
			case 5:
				cout << "five thousand ";
				break;
			case 6:
				cout << "six thousand ";
				break;
			case 7:
				cout << "seven thousand ";
				break;
			case 8:
				cout << "eight thousand ";
				break;	
			case 9:
				cout << "nine thousand ";
				break;
			case 10:
				cout << "ten thousand ";
				break;
			default:
				break;
		}
		// hundreds place
		switch(digit3){ 
			case 1:
				cout << "one hundred ";
				break;
			case 2:
				cout << "two hundred ";
				break;
			case 3:
				cout << "three hundred ";
				break;
			case 4:
				cout << "four hundred ";
				break;
			case 5:
				cout << "five hundred ";
				break;
			case 6:
				cout << "six hundred ";
				break;
			case 7:
				cout << "seven hundred ";
				break;
			case 8:
				cout << "eight hundred ";
				break;	
			case 9:
				cout << "nine hundred ";
				break;
			default:
				break;
		}
		//tens and ones place
		if(digit2 == 1){ // is one (1) the tens digit?
			switch(digit1){ // tens place when one (1) is the tens place digit
				case 0:
					cout << "ten";
					break;
				case 1:
					cout << "eleven";
					break;
				case 2:
					cout << "twelve";
					break;
				case 3:
					cout << "thirteen";
					break;
				case 4:
					cout << "fourteen";
					break;
				case 5:
					cout << "fifteen";
					break;
				case 6:
					cout << "sixteen";
					break;
				case 7:
					cout << "seventeen";
					break;
				case 8:
					cout << "eighteen";
					break;	
				case 9:
					cout << "nineteen";
					break;
				default:
					break;
			}
		}
		else { //if the tens digit isn't 1
			switch(digit2){ // tens place (the "ty's")
				case 2:
					cout << "twenty ";
					break;
				case 3:
					cout << "thirty ";
					break;
				case 4:
					cout << "fourty ";
					break;
				case 5:
					cout << "fifty ";
					break;
				case 6:
					cout << "sixty ";
					break;
				case 7:
					cout << "seventy ";
					break;
				case 8:
					cout << "eightty ";
					break;	
				case 9:
					cout << "ninety ";
					break;
				default:
					break;
			}
			switch(digit1){ // ones place
				case 1:
					cout << "one";
					break;
				case 2:
					cout << "two";
					break;
				case 3:
					cout << "three";
					break;
				case 4:
					cout << "four";
					break;
				case 5:
					cout << "five";
					break;
				case 6:
					cout << "six";
					break;
				case 7:
					cout << "seven";
					break;
				case 8:
					cout << "eight";
					break;	
				case 9:
					cout << "nine";
					break;
				default:
					break;
			}
		}
	}
	else if (number == 0){
		cout << "The number word for your number is:\nzero";
	}
	else { //when the input exceeds the maximum digits
		cout << "Your number isn't within the limit'";
	}


	/* prevents .exe program to close after pressing "enter" on the last input */
	cout << "\n\n";
	system("pause");
	
	return 0;
}
