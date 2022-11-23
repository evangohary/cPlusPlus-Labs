#include <iostream>
#include <string>
using namespace std;


string split(string);
int main() 
{
	
    cout << split("StopAndSmellTheRoses.");
  
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