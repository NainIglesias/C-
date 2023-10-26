#include <iostream>
#include <string>

using namespace std;

string upperCase(string name);

int main() {
	string name {""};
	int nameLength {0};
	string upperName {""};
	cout << "Name: " ;
	getline(cin,name);
	nameLength = name.length();
	upperName = upperCase(name);
	cout << upperName << " has " << nameLength << " characters " << endl;
	return 0;
}

string upperCase(string name){
	string returnedName {""};
	for(int i = 0; i < name.length(); i++){
		returnedName += toupper(name[i]);
	}
	return returnedName;
}
