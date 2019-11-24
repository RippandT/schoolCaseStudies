#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	//variables
	int days_in;
	float days;
	float months;
	float years;
	
	//user input
	cout << "How many days have you spent on a project? \n";
	cout << "Days: ";
	cin >> days_in;
	
	//operation
	years = days_in / 365;
	months = (days_in % 365) / 30;
	days = (days_in % 365) % 30;
	
	//output
	system ("cls");
	cout << "You've spent: \n";
	cout << years << " year(s) \n";
	cout << months << " month(s) \n";
	cout << days << " day(s) \n";
	cout << "on a project. Get some rest, you've earned it! \n\n";
	
	//.exe
	system("pause");
	
	return 0;
}
