#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
	//variables
	double diameter;
	double radius;
	double surarea;
	double circumference;
	double volume;
	
	//defines pi
	double pi = 3.14;
	
	//rounding off from 0.0X
	cout << fixed;
	cout << setprecision(2);
	
	//input
	cout << "Compute a S P H E R E \n Diameter: ";
	cin >> diameter;
	cout << endl;
	
	//computation
	radius = diameter / 2;
	surarea = 4 * pi * pow(radius, 2);
	circumference = pi * diameter;
	volume = (4 * pi * pow(radius, 3))/3;
	
	//clear screen
	system("cls");
	
	//output
	cout << "A " << diameter << " diameter sphere has a:\n\n";
	cout << "Radius of " << radius << endl;
	cout << "Surface Area of " << surarea << endl;
	cout << "Circumference of " << circumference << endl;
	cout << "Volume of " << volume << endl << endl;
	
	//.exe
	system("pause");
	return 0;
}
