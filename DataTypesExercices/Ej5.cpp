#include <iostream>

using namespace std;

int main(){
int workedHours = 0;
double costPerHour = 0;
double salary = 0;
cout << "How many hours did you work?: ";
cin >> workedHours;
cout << "How much is each hour of work?: ";
cin >> costPerHour;
salary = workedHours * costPerHour;
cout << "Your salary: " << salary << endl;
return 0;
}
