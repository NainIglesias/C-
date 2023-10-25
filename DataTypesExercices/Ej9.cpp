#include <iostream>

using namespace std;

double calculateInterest(double amount, double interest, int year);

int main(){
	double amount = 0;
	double interest = 0;
	int year = 0;
	cout << "Amount: ";
	cin >> amount;
	cout << "Interest: ";
	cin >> interest;
	cout << "Years: ";
	cin >> year;
	double total = calculateInterest(amount, interest, year);
	cout << "Total: " << total << endl;

	return 0;
}

double calculateInterest(double amount, double interest, int year){
return amount + (.01 * interest) * year * amount;
}
