#include <iostream>
#include <string>

using namespace std;

string revertString(string name);

int main(){
	string name {""};
	string invertedName {""};
	cout << "Name: ";
	getline(cin,name);
	invertedName = revertString(name);
	cout << "Inverted: " << invertedName << endl;
	return 0;
}

string revertString(string name){
	string revertedString {""};
	for(int i = name.length(); i >= 0; i--){
		revertedString += name[i];
	}
	return revertedString;
}
