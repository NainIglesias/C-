#include <iostream>

using namespace std;

int main(){
	double breadsPrice {3.49};
	double discount {0.6};
	int numberOfBreads = 0;
	cout << "How many breads: ";
	cin >> numberOfBreads;
	double totalPriceWithDiscount = breadsPrice * discount * numberOfBreads;
	cout << "Price of a bread: " << breadsPrice << endl;
	cout << "Discount: " << discount << endl;
	cout << "Total: " << totalPriceWithDiscount << endl;

	return 0;
}
