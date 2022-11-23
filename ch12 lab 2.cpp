
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void upper(char []);
void reverse( char []);

int main(){
	const int STR_LEN = 80;
	char str1[STR_LEN], str3[STR_LEN];
	
	//GET STRING
	cout << "Enter a string: ";
	cin.getline(str1, STR_LEN);
	cout << str1 << endl;
	
	strcpy(str3, str1);
	cout << "After a call to upper: ";
	upper(str1);
	cout << str1 << endl;
	
	return 0;
}

void upper(char str[]){
	while(*str != 0){
		*str = toupper(*str);
		str++;
	}
}