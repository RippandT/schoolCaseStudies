#include <iostream>
#include <iomanip>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
/* MY OLD WAY
int main(int argc, char** argv) {
	float in_M;
	float in_ft;
	float in_cm;
	float in_in;
	float in_km;
	
	float out_km;
	float out_ft;
	float out_cm;
	float out_in;
	
	in_ft=5280.00;
	in_in=12.00;
	in_cm=2.54;
	in_km=100000.00;
	
	
	cout << "Enter the mile to be converted" << endl;
	cin >> in_M;
	
	out_ft=in_M*in_ft;
	out_in=out_ft*in_in;
	out_cm=out_in*in_cm;
	out_km=out_cm/in_km;
	
	cout << fixed;
	cout << setprecision(2);
	cout << in_M << " is " << out_km;
	
	return 0;
}
*/
// Teacher's way
int main(int argc, char** argv) {
		double miles;
	cout << fixed;
	cout << setprecision(2);
	
	cout << "Miles to Kilometers converter" << endl;
	cout << "Enter Miles: " << endl;
	cin >> miles;
	
	double kilometer = (((miles * 5280) * 12) * 2.54) / 100000;
	
	cout << miles << "m converted to kilometers is: " << kilometer << "km";
	
	return 0;
}
