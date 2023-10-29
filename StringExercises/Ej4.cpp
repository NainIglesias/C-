#include <iostream>
#include <string>

using namespace std;

string cleanPhoneNumber(string phoneNumber);

int main(){
	string phoneNumber {""};
	cout << "Phone number like  +XX-XXXXXXXXX-XX: ";
	cin >> phoneNumber;
	string cleanedPhoneNumber = cleanPhoneNumber(phoneNumber);
	cout << "Clean phone number: " << cleanedPhoneNumber << endl;
	return 0;
}

string cleanPhoneNumber(string phoneNumber){
	string cleanedPhoneNumber {};
	for(int i = 0; i<phoneNumber.length(); i++){
		if(i > 3 && i < phoneNumber.length()-3){
			cleanedPhoneNumber += phoneNumber[i];
		}
	}
	return cleanedPhoneNumber;
}
