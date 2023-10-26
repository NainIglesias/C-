#include <iostream> 
#include <string>

using namespace std;

string upperCase(string name); string lowerCase(string name); string 
tittleCase(string name);

int main(){ string name {}; cout << "Name: "; getline(cin, name); 
	string upperName = upperCase(name); cout << "Upper name: " 
	<< upperName << endl; string lowerName = lowerCase(name); 
	cout << "Lower name: " << lowerName << endl; string 
	tittleName = tittleCase(name); cout << "Tittle name: " << 
	tittleName << endl; return 0;
}

string upperCase(string name){ string returnedName {""}; for(int i = 
	0; i<name.length(); i++){
		returnedName += toupper(name[i]);
	}
	return returnedName;
}

string lowerCase(string name){ string returnedName {""}; for(int i = 
	0; i<name.length(); i++){
		returnedName += tolower(name[i]);
	}
	return returnedName;
}
string tittleCase(string name) {
    string returnedName = "";

    for (int i = 0; i < name.length(); i++) {
        if (i == 0 || isspace(name[i - 1])) {
            returnedName += toupper(name[i]);
        } else {
            returnedName += tolower(name[i]);
        }
    }

    return returnedName;
}
