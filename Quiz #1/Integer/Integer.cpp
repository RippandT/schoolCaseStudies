#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	//variables
	int integer1;
	int integer2;
	double half1;
	double half2;
	double quart1;
	double quart2;
	double double1;
	double double2;
	double square1;
	double square2;
	
	//user input
	cout << "Fun with integers! \n";
	cout << "Enter an integer: ";
	cin >> integer1;
	cout << "Enter another integer: ";
	cin >> integer2;
	cout << endl;
	
	//computation
	half1 = integer1 / 2.00;
	half2 = integer2 / 2.00;
	
	quart1 = integer1 / 4.00;
	quart2 = integer2 / 4.00;
	
	double1 = integer1 * 2;
	double2 = integer2 * 2;
	
	square1 = integer1 * integer1;
	square2 = integer2 * integer2;
	
	//output
	cout << "For the first integer: \n";
	cout << "Half: " << half1 << endl;
	cout << "Quarter: " << quart1 << endl;
	cout << "Double: " << double1 << endl;
	cout << "Squared: " << square1 << endl;
	cout << endl;
	cout << "For the last integer: \n";
	cout << "Half: " << half2 << endl;
	cout << "Quarter: " << quart2 << endl;
	cout << "Double: " << double2 << endl;
	cout << "Squared: " << square2 << endl;
	
	//.exe
	system("pause");
	return 0;
}
