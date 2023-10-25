#include <iostream>

using namespace std;

int main(){
	int clownsWeight {112};
	int dollsWeight {75};
	int numberOfClowns = 0;
	int numberOfDolls = 0;
	cout << "Number of clowns: ";
	cin >> numberOfClowns;
	cout << "Number of dolls: ";
	cin >> numberOfDolls;
	int totalWeight = clownsWeight * numberOfClowns + dollsWeight * numberOfDolls;
	cout << "Package weight: " << totalWeight << endl;
	return 0;
}
