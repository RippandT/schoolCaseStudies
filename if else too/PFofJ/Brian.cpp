#include <iostream>
using namespace std;

/* Reused the code from problem #1. LOL */
int main(int argc, char** argv) {
	/* input field */
	cout << "Numbers to Roman Numerals Converter\n\n";
	cout << "Enter a number (1 - 3999): "; //prompt
	int number; //number storage
	cin >> number; //input
	cout << endl;
	
	/* computation */
	int digit1 = number % 10; //ones digit
	int digit2 = number / 10 % 10; //tens digit
	int digit3 = number / 100 % 10; //hundreds digit
	int digit4 = number / 1000 % 10; //thousands digit
	
	/* output */
	if(number < 4000 && number > 0){
		cout<< "The Roman Numeral equivalent for your number is:\n";
		// thousands place
		switch(digit4){ 
			case 1:
				cout << "M";
				break;
			case 2:
				cout << "MM";
				break;
			case 3:
				cout << "MMM";
				break;
			default:
				break;
		}
		// hundreds place
		switch(digit3){ 
			case 1:
				cout << "C";
				break;
			case 2:
				cout << "CC";
				break;
			case 3:
				cout << "CCC";
				break;
			case 4:
				cout << "CD";
				break;
			case 5:
				cout << "D";
				break;
			case 6:
				cout << "DC";
				break;
			case 7:
				cout << "DCC";
				break;
			case 8:
				cout << "DCCC";
				break;	
			case 9:
				cout << "CM";
				break;
			default:
				break;
		}
		//tens place
		switch(digit2){ 
			case 1:
				cout << "X";
				break;
			case 2:
				cout << "XX";
				break;
			case 3:
				cout << "XXX";
				break;
			case 4:
				cout << "XL";
				break;
			case 5:
				cout << "L";
				break;
			case 6:
				cout << "LX";
				break;
			case 7:
				cout << "LXX";
				break;
			case 8:
				cout << "LXXX";
				break;	
			case 9:
				cout << "XC";
				break;
			default:
				break;
		}
		//ones place
		switch(digit1){ 
			case 1:
				cout << "I";
				break;
			case 2:
				cout << "II";
				break;
			case 3:
				cout << "III";
				break;
			case 4:
				cout << "IV";
				break;
			case 5:
				cout << "V";
				break;
			case 6:
				cout << "VI";
				break;
			case 7:
				cout << "VII";
				break;
			case 8:
				cout << "VIII";
				break;	
			case 9:
				cout << "IX";
				break;
			default:
				break;
		}
	}
	else{ //when the input exceeds the maximum digits
		cout << "Your number in not within the limit";
	}


	/* prevents .exe program to close after pressing "enter" on the last input */
	cout << "\n\n";
	system("pause");
	
	return 0;
}
