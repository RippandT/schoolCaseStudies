#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	//declaration of variables
	double pounds;
	double grams;
	
	//rounds off to the nearest hundredths
	cout << fixed;
	cout << setprecision(2);
	
	//user input
	cout << "Enter the amount of pounds you want to be converted to grams: \n";
	cin >> pounds;
	
	//clears screen before showing the output
	system("cls");
	
	//computation
	grams = pounds * 454;
	
	//output
	cout << pounds << " pounds is \n" << grams << " in grams!" << endl;
	
	//for .exe use
	system("pause");
	return 0;
}
