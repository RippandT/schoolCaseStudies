#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	//variables
	float x;
	float y;
	
	//user input
	cout << "Cartesian plane locator\n\n";
	cout << "Enter x co-ordinate: ";
	cin >> x;
	cout << "Enter y co-ordinate: ";
	cin >> y;
	cout << endl;
	
	//(x, y) checker
	if (x > 0){ // (+, y)
		if (y > 0){ // (+, +)
			cout << "(" << x << ", " << y << ") is located in Quadrant I (+, +)\n\n";
		}
		else if (y < 0){ // (+, -)
			cout << "(" << x << ", " << y << ") is located in Quadrant IV (+, -)\n\n";
		}
		else{ // (+, 0)
			cout << "(" << x << ", " << y << ") is located in the + x-axis\n\n";
		}
	}
	else if (x < 0){ // (-, y)
		if (y > 0){ // (-, +)
			cout << "(" << x << ", " << y << ") is located in Quadrant II (-, +)\n\n";
		}
		else if (y < 0){ // (-, -)
			cout << "(" << x << ", " << y << ") is located in Quadrant III (-, -)\n\n";
		}
		else{ // (-, 0)
			cout << "(" << x << ", " << y << ") is located in the - x-axis \n\n";
		}
	}
	else if (x == 0){ // (0, y)
		if (y > 0){ // (0, +)
			cout << "(" << x << ", " << y << ") is located in the + y-axis\n\n";
		}
		else if (y < 0){ // (0, -)
			cout << "(" << x << ", " << y << ") is located in the - y-axis\n\n";
		}
		else { // (0, 0)
			cout << "(0, 0) is the origin point\n\n";
		}
	}
	else{
		cout << "You've entered something other than a number\n";
	}
	
	//prevents .exe from closing after Enter is pressed
	system("pause");
	
	return 0;
}
