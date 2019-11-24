#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	//variables
	double sal_total;
	double days;
	double sal_avg;
	string currency;
	
	//rounding off
	cout << fixed;
	cout << setprecision(2);
	
	//input
	cout << "Average Salary per Day calculator \n";
	cout << "Total salary: \n";
	cin >> sal_total;
	cout << "Currency: \n";
	cin >> currency;
	cout << "Days the employee worked: \n";
	cin >> days;
	
	//formula
	sal_avg = sal_total / days;
	
	//output
	cout << "The employee earns " << sal_avg << currency << " per day \n";
	
	//.exe
	system("pause");
	return 0;
}
