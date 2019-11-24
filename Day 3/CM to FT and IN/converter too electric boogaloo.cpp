#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	//declaration of variables
	double cm_in;
	double inches;
	double feet;
	
	//rounds down to the nearest hundredths
	cout << fixed;
	cout << setprecision(2);
	
	//user inputs centimeters
	cout << "Enter centimeters to be converted to feet and inches:" << endl;
	cin >> cm_in;
	
	//computation for inches and feet
	inches = (cm_in/2.54);
	feet = inches/12;
	
	//clears screen before the output is shown
	system("cls");
	
	//the output
	cout << cm_in << " centimeters is:" << endl;
	cout << endl;
	cout << inches << " in inches" << endl;
	cout << feet << " in feet" << endl;
	cout << endl;
	cout << "Thank you for using my program \n\n";
	
	//prevents the .exe, when used, from exiting after pressing enter
	system("pause");
	return 0;
}
