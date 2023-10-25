#include <iostream>
#include <string>
using namespace std;
int main(){
string name {""};
cout << "Name: ";
getline(cin, name);
// REMOVE LAST CHARACTER ---> name.pop_back();
cout << "Hello " << name;
return 0;
}
