#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	//variable for input
	char tellypad; //look, I don't know what I'm supposed to call it
	char exit;
	
	do {
		cout << "Enter a number or letter in a telephone (letters must be in lower case): ";
		cin >> tellypad;
	
		//determinator
		if (tellypad == '2' || tellypad == 'a' || tellypad == 'b' || tellypad == 'c'){
			cout << "2 - ABC";
		}
		else if (tellypad == '3' || tellypad == 'd' || tellypad == 'e' || tellypad == 'f'){
			cout << "3 - DEF";
		}
		else if (tellypad == '4' || tellypad == 'g' || tellypad == 'h' || tellypad == 'i'){
			cout << "4 - GHI";
		}
		else if (tellypad == '5' || tellypad == 'j' || tellypad == 'k' || tellypad == 'l'){
			cout << "5 - JKL";
		}
		else if (tellypad == '6' || tellypad == 'm' || tellypad == 'n' || tellypad == 'o'){
			cout << "6 - MNO";
		}
		else if (tellypad == '7' || tellypad == 'p' || tellypad == 'q' || tellypad == 'r' || tellypad == 's'){
			cout << "7 - PQRS";
		}
		else if (tellypad == '8' || tellypad == 't' || tellypad == 'u' || tellypad == 'v'){
			cout << "8 - TUV";
		}
		else if (tellypad == '9' || tellypad == 'w' || tellypad == 'x' || tellypad == 'y'){
			cout << "9 - WXY";
		}
		else{
			cout << "Either the number or letter doesn't have a corresponding key, or the input is invalid";
		}	
		
		cout <<"\n\n";
		cout << "Do you want to exit this program? [Y/N]";
		cin >> exit;
	}	 
while (exit == 'N' || exit =='n ');
	//.exe use
	cout << "\n\n";
	system("pause");
	
	return 0;
}
