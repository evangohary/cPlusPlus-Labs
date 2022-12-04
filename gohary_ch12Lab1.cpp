//************************
// CH12 lab 1, Word separator
// Programmer: Evan Gohary
// Completed 11/29/2022 
//
// This program accepts an inputed sentence with all the words together (no spaces)
// with capitol lettors indicating individual words, and, seperates each word.
// it will retrun the sentence with spaces, and, will make  only
// the first word is capitolized
//************************************************

#include <iostream>
#include <string>
using namespace std;


string split(string);
int main() 
{
	char word[100];
	//string split;
    cout << "Whats your sting: "; // get our string
  	cin.getline(word, 100);
  	
  	cout << "\n " << split(word); // invoke and display the string, sorted with split
    return 0;
}

// seperate each word
string split(string str){ 
	string result;
	
	if(str.length() == 0) return result; // check for empty string
	
	result += str[0];
	
	for (int k = 1; k < str.length(); k++ ){ // for each charector in the string after the first 
		char ch = str[k];  
		
		if (isupper(ch)){ // If their is an uppercase
			result += ' '; // Add a Space
			ch=tolower(ch); // and convert the charector to lowercase
		}
		result += ch; // add to result
	}
	return result; // retrun results, with the new format
}