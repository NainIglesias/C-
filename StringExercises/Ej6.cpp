#include <iostream>
#include <string>

using namespace std;

string toUpperVowel(string sentence, char vowel);

int main(){
	char vowels[5] = {'a','e','i','o','u'};
	bool isVowel {false};
	string sentence {""};
	char vowel {' '};
	cout << "Sentence: ";
	getline(cin, sentence);
	do{
		cout << "Lowercase vowel: ";
		cin >> vowel;
		for(int i = 0; i<(sizeof(vowels)/sizeof(int)); i++){
			if(vowels[i]==vowel){
				isVowel = true;
			}
		}
		if(!isVowel){
			cout << "That is not a lowercase vowel, please try again" << endl;
		}
	}
	while(!isVowel);
	string returnedSentence = toUpperVowel(sentence,vowel);
	cout << "The final sentence is: " << returnedSentence << endl;
	return 0;
}

string toUpperVowel(string sentence, char vowel){
	string returnedString {""};
	for(int i = 0; i < sentence.length(); i++){
		if(sentence[i]==vowel){
			returnedString += toupper(sentence[i]);
		}else{
			returnedString += sentence[i];
		}
	}
	return returnedString;
}
