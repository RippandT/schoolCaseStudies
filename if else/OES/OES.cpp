#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int n;
	
	cout << "Enter an integer: ";
	cin >> n;
	
	if (n % 2 == 0){
		cout << n << " is an even number\n";
	}
	else{
		cout << n << " is an odd number\n";
	}
	return 0;
}
