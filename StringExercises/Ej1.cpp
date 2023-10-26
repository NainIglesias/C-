#include <iostream>
#include <string>

using namespace std;

int main() {
	string name {""};
	int repeats {0};
	cout << "Name: ";
	cin >> name;
	cout << "Repeats: ";
	cin >> repeats;
	for(int i = 0; i<repeats; i++){
	cout << "Name - > " << name << endl;
	}

	return 0;
}
