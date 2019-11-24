#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
	//variables (Compacted to LName, Votes, Percentage)
	string cand_1; double candVote_1; double candPerc_1;
	string cand_2; double candVote_2; double candPerc_2;
	string cand_3; double candVote_3; double candPerc_3;
	string cand_4; double candVote_4; double candPerc_4;
	string cand_5; double candVote_5; double candPerc_5;
	double totalVotes;
	
	//user input
	cout << "Candidate #1 \n";
	cout << "Last name: ";
	cin >> cand_1;
	cout << "Votes: ";
	cin >> candVote_1;
	cout << endl;
	
	cout << "Candidate #2 \n";
	cout << "Last name: ";
	cin >> cand_2;
	cout << "Votes: ";
	cin >> candVote_2;
	cout << endl;
	
	cout << "Candidate #3 \n";
	cout << "Last name: ";
	cin >> cand_3;
	cout << "Votes: ";
	cin >> candVote_3;
	cout << endl;
	
	cout << "Candidate #4 \n";
	cout << "Last name: ";
	cin >> cand_4;
	cout << "Votes: ";
	cin >> candVote_4;
	cout << endl;
	
	cout << "Candidate #5 \n";
	cout << "Last name: ";
	cin >> cand_5;
	cout << "Votes: ";
	cin >> candVote_5;
	system("cls");
	
	//computation and rounding off
	cout << fixed;
	cout << setprecision(2);
	
	totalVotes = candVote_1 + candVote_2 + candVote_3 + candVote_4 + candVote_5;
	
	candPerc_1 = (candVote_1 / totalVotes) * 100;
	candPerc_2 = (candVote_2 / totalVotes) * 100;
	candPerc_3 = (candVote_3 / totalVotes) * 100;
	candPerc_4 = (candVote_4 / totalVotes) * 100;
	candPerc_5 = (candVote_5 / totalVotes) * 100;
	
	//output
	cout << "THE VOTES ARE IN! \n";
	cout << endl;
	
	cout << "Candidate #1: " << cand_1 << endl;
	cout << "Votes: " << candVote_1 << endl;
	cout << "Percent: " << candPerc_1 << "%" << endl;
	cout << endl;
	
	cout << "Candidate #2: " << cand_2 << endl;
	cout << "Votes: " << candVote_2 << endl;
	cout << "Percent: " << candPerc_2 << "%" << endl;
	cout << endl;
	
	cout << "Candidate #3: " << cand_3 << endl;
	cout << "Votes: " << candVote_3 << endl;
	cout << "Percent: " << candPerc_3 << "%" << endl;
	cout << endl;
	
	cout << "Candidate #4: " << cand_4 << endl;
	cout << "Votes: " << candVote_4 << endl;
	cout << "Percent: " << candPerc_4 << "%" << endl;
	cout << endl;
	
	cout << "Candidate #5: " << cand_5 << endl;
	cout << "Votes: " << candVote_5 << endl;
	cout << "Percent: " << candPerc_5 << "%" << endl;
	cout << endl;
	
	cout << "Total Voters: " << totalVotes << endl;
	
	//.exe
	system("pause");
	
	return 0;
}
