#include <iostream>
#include <string>
using namespace std;

int main() {
    int shift = 3; // Shift value for the Caesar cipher
    string input, encrypted;

    cout << "Enter a message: ";
    getline(cin, input);

    for (char character : input) {
        if (isalpha(character)) { // Check if it's an alphabetic character
            char base = islower(character) ? 'a' : 'A';
            char shiftedChar = ((character - base - shift + 26) % 26) + base; // Apply the shift
            encrypted += shiftedChar;
        } else {
            encrypted += character; // Keep non-alphabetic characters unchanged
        }
    }

    cout << "Encrypted message: " << encrypted << endl;

    return 0;
}
