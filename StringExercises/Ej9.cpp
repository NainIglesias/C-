#include <iostream>
#include <string>
#include <regex>
using namespace std;
string cutDays(string date);
string cutMonths(string date);
string cutYears(string date);
int main(){
string inputDate {""};
regex datePattern(R"(\b((|[0-1])[1-9]|[12][0-9]|3[01])/((|0)[1-9]|1[0-2])/\d{4}\b)");
do{
cout << "Input a date using this date format dd/mm/yyy: ";
cin >> inputDate;
}while(!regex_match(inputDate, datePattern));
string days = cutDays(inputDate);
string months = cutMonths(inputDate);
string years = cutYears(inputDate);
cout << "Days: " << days << endl;
cout << "Months: " << months << endl;
cout << "Years: " << years << endl;
return 0;
}
string cutDays(string date){
string days {""};
int counter {0};
do{
days += date[counter];
counter++;
}while(date[counter] != 47);
return days;
}

string cutMonths(string date){
string months {""};
int counterBackSlash {0};
int counter {1};
do{
if(counterBackSlash >= 1 && date[counter] != 47){
months += date[counter];
};
if(date[counter] == 47 ){counterBackSlash++;};
counter++;
}while(counterBackSlash != 2);
return months;
}

string cutYears(string date){
string years {""};
int counterBackSlash {0};
int counter {1};
do{
if(counterBackSlash >= 2 && date[counter] != 0){
years += date[counter];
};
if(date[counter] == 47 ){counterBackSlash++;};
counter++;
}while(date[counter] != 0);
return years;
}
