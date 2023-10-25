#include <iostream>

using namespace std;

int main(){
	int n1 = 0;
	int n2 = 0;
	cout << "Number 1: ";
	cin >> n1;
	cout << "Number 2: ";
	cin >> n2;
	double  division = static_cast<double> (n1/n2);
	double quotient = static_cast<double> (n1%n2);
	cout << n1 << " / " << n2 << " da un cociente de " << division << " and a quotient " << quotient << endl;
	return 0;
}
