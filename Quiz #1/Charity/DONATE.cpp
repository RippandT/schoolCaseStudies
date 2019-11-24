#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	//variables
	string movie;
	double adult_tixCost;
	double child_tixCost;
	double adult_tixSold;
	double child_tixSold;
	double charity_gross;
	double charity_donation;
	
	//user input
	cout << "\"Movie gross amount to be donated to a charity\" computation software \n";
	cout << "Movie name: (no spaces)\n";
	cin >> movie;
	cout << "Adult's admission fee: \n";
	cin >> adult_tixCost;
	cout << "Adult\'s tickets sold: \n";
	cin >> adult_tixSold;
	cout << "Children\'s admission fee: \n";
	cin >> child_tixCost;
	cout << "Children\'s tickets sold: \n";
	cin >> child_tixSold;
	cout << "Percentage of the gross to be donated: (input in whole numbers)\n";
	cin >> charity_gross;
	cout << endl;
	
	//computation and rounding off
	cout << fixed;
	cout << setprecision(2);
	
	charity_donation = ((adult_tixCost * adult_tixSold) + (child_tixCost * child_tixSold)) * (charity_gross * 0.01);
	
	//output
	cout << "You will donate " << charity_donation << " to charity using the gross earnings of your movie, \"" << movie << ".\" \n";
	cout << "Your generousity will reward you in the future! \n";
	
	//.exe
	system("pause");	
	
	return 0;
}
