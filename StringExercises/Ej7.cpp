#include <iostream>
#include <string>

using namespace std;

string changeDomain(string email);

int main(){
	string email {""};
	cout << "Email: ";
	cin >> email;
	string changedEmail = changeDomain(email);
	cout << "Your new email: " << changedEmail << endl;
	return 0;
}

string changeDomain(string email){
	
	string returnedEmail {""};
 	int count {0};
	do{
	returnedEmail += email[count];
	count++;
	}while(int(email[count])!=64);
	returnedEmail += "@ceu.es";
	return returnedEmail;
}
