#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
string shopList {""};
cout << "Write your shop list using commas: ";
getline(cin,shopList);
replace(shopList.begin(),shopList.end(),',','\n');
cout << "Your shop list: "<< endl << shopList << endl;
return 0;
}
