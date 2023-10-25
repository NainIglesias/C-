#include <iostream>

using namespace std;

int main(){
int number = 0;
int counter = 0;
cout << "Write a number to calculate the sum of all numbers to n: ";
cin >> number;
for(int i = 1; i <=number; i++){
counter +=i;
}
cout << "The amount of numbers before " << number << " are " << counter << endl;
return 0;
}
