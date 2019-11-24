#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	//declaration of variables
	int cin_hrs;
	int weeks;
	int days;
	int hours;
	
	//input
	cout << "Steam Playtime Hours converter \n by RippandT \n";
	cout << "https://steamcommunity.com/id/RippandT \n\n";
	cout << "How many hours have you played a game? \n";
	cin >> cin_hrs;
	
	//computation
	weeks = cin_hrs / 168;
	days = cin_hrs % 7;
	hours = cin_hrs % 24;
	
	//clear screen before output
	system("cls");
	
	//output
	cout << "You have spent: \n";
	cout << weeks << " Week(s)\n";
	cout << days << " Day(s)\n";
	cout << hours << " Hour(s)\n";
	cout << "on a game on Steam. Now do something productive like programming or something.\n";
	
	//.exe use
	system("pause");
	return 0;
}
