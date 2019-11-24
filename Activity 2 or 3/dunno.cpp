#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int num1;
	int num2;
	int num3;
	int num4;
	int result;
	int result_too;
	char name[10];
	
	//Name input
	cout << "Enter a name:" << endl;
	cin >> name;
	cout << "Hi " << name << "!"<< endl;
	
	//Input
	cout << "Enter a digit:" << endl;
	cin >> num1;
	cout << "Enter another digit:" << endl;
	cin >> num2;
	cout << "Enter another digit:" << endl;
	cin >> num3;
	cout << "Enter another digit:" << endl;
	cin >> num4;
	
	//EXPRESSIONS
	result=(num1+num2)*(num3/num4);
	result_too=(num1+num2)*num3/num4;
	
	//Output
	cout << name << ", " << num1 << " plus " << num2 << " multiplied by " << num3 << " divided by " << num4 << " is " << result << "..." << endl;
	cout << "or is it " << result_too << "?" << endl;
	cout << "Programming is funny" << endl;
	
	//When ran using the .exe file, the program won't cut off before the result
	system("pause");
	
	return 0;
}
