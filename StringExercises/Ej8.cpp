#include <iostream>
#include <string>
#include <regex>
#include <cmath>
using namespace std;

int main(){
string price{""};
do{
cout << "Price with 2 decimals: ";
cin >> price;
}while(!regex_match(price,regex("\\d+\\.\\d{2}")));
int intPrice = stoi(price);
double doublePrice = stod(price);
double decimalPart = (doublePrice - floor(doublePrice)) * 100;
cout << "Euros: " << intPrice << endl;
cout << "Cents: " << decimalPart << endl;
return 0;
}
