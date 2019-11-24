#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
	//variables
	double price_1;
	double liters_1;
	double price_2;
	double liters_2;
	double output_1;
	double output_2;
	
	//user input (Gas Station #1)
	cout << "How much did you spent on Gas Station #1? \n";
	cout << "Cost: ";
	cin >> price_1;
	cout << "How many liters did you get out from that? \n";
	cout << "Liters: ";
	cin >> liters_1;
	cout << endl;
	
	//user input (Gas Station #2)
	cout << "How much did you spent on Gas Station #2? \n";
	cout << "Cost: ";
	cin >> price_2;
	cout << "How many liters did you get out from that? \n";
	cout << "Liters: ";
	cin >> liters_2;
	cout << endl;
	
	//rounding off
	cout << fixed;
	cout << setprecision(2);
	
	//computation
	output_1 = price_1 / liters_1;
	output_2 = price_2 / liters_2;
	
	//output
	cout << "Let's compare... \n";
	cout << "Gas Station #1: " << output_1 << "/liter" << endl;
	cout << "Gas Station #2: " << output_2 << "/liter" << endl;
	
	//.exe
	cout << endl;
	system("pause");
	return 0;
}
