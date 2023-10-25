#include <iostream>
#include <cmath>

using namespace std;

double roundToDecimals(double number, double decimals);

double savings(double amount, int years);

int main(){
	double amount {0};
	int years {0};
	cout << "Amount to save: ";
	cin >> amount;
	cout << "Years saving: ";
	cin >> years;
	double totalSaved = savings(amount, years);
	cout << "Total save: " << totalSaved;
	return 0;
}

double roundToDecimals(double number, double decimals){
	double multiplier = pow(10, decimals);
	return round(number * multiplier) / multiplier;

}

double savings(double amount, int years){
	for(int i = 1; i<years; i++){
		amount += amount*.04;
	}
	return roundToDecimals(amount,2);
}
