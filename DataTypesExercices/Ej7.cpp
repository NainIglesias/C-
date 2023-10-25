#include <iostream>
#include <cmath>
using namespace std;

double ims(double weight,double height);

int main(){
	double weight = 0;
	double height = 0;
	double imsResult = 0;
	cout << "Your weight: ";
	cin >> weight;
	cout << "Your height: ";
	cin >> height;
	imsResult = ims(weight, height);
	cout << "Your ims is : " << imsResult << endl;
return 0;
}
double ims(double weight,double height){
	return weight / pow(height, 2);
}
