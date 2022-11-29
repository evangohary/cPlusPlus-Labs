//************************
// CH12 lab 1, word separator
// Programmer: Evan Gohary
// Completed 11/29/2022 
//
// This program accepts an imput as a sentence with all the words together
//with capitol lettors instead of spaces, and, seperates each word.
// it will retrun the sentence with spaces, and, will make sure only
//the first word is capitol 
//************************************************


#include <iostream>
#include <string>
using namespace std;


string split(string);
int main() 
{
	char word[100];
	//string split;
    cout << "Whats your sting: ";
  	cin.getline(word, 100);
  	
  	cout << "\n " << split(word);
    return 0;
}


string split(string str){
	
	string result;
	
	if(str.length() == 0) return result;
	
	
	result += str[0];
	
	for (int k = 1; k < str.length(); k++ ){
		char ch = str[k];
		
		if (isupper(ch)){
			result += ' ';
			ch=tolower(ch);
		}
		result += ch;
	}
	return result;
}