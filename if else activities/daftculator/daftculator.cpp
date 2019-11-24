#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
	//variables (and the algorithm)
	float num1;
	char operation;
	float num2;
	float result;
	
	//user input
	cout << "The Daftculator Too: Now with decimals!\n";
	cout << "Enter an integer: ";
	cin >> num1;
	cout << "Operation (+ - / *): ";
	cin >> operation;
	cout << "Enter another integer: ";
	cin >> num2;
	cout << endl;
	
	//rounding off
	cout << fixed;
	cout << setprecision(2);
	
	//calculations and output
	if (operation == '+'){
		result = num1 + num2;
		
		cout << num1 << " + " << num2 << " = " << result;
		cout << "\n\n";
	}
	else if (operation == '-'){
		result = num1 - num2;
		
		cout << num1 << " - " << num2 << " = " << result;
		cout << "\n\n";
	}
	else if (operation == '*'){
		result = num1 * num2;
		
		cout << num1 << " * " << num2 << " = " << result;
		cout << "\n\n";
	}
	else if (operation == '/'){
		if (num2 != 0){
			result = num1 / num2;
			
			cout << num1 << " / " << num2 << " = " << result;
			cout << "\n\n";
		}
		else{
			cout << "You are trying to divide by zero! Luckily, the world won't end with someone trying to divide by zero.\n";
			cout << "Seriously though, what were you thinking?\n\n";
		}
	}
	else{
		cout <<"Invalid operator!\n";
	}
	
	//prevents Command Prompt from closing after pressing the last enter prompt when the .exe is used
	system("pause");
	return 0;
}
