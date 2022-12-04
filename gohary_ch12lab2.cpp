//************************
// CH12 lab 2, Case manipulator
// Programmer: Evan Gohary
// Completed 12/2/2022 
//
// This program accepts a c-string and passes it to upper, lower, and flip
// Upper will go through and convert each charector to a uppercase
// lower will go through and convert all charectors to lowercase
// flip will convert uppercase to lower, and lowercase to uppercase
//************************************************
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void upper(char []);
void lower(char[]);
void flip( char []);

int main(){
	const int STR_LEN = 80;
	char str1[STR_LEN], str2[STR_LEN], str3[STR_LEN];
	
	//GET STRING
	cout << "Enter a string: ";
	cin.getline(str1, STR_LEN);
	//cout << str1 << endl; //test
	
	//copying our str1 to str3 and str2
	strcpy(str3, str1);
	strcpy(str2, str1);
	
	cout << "After a call to upper: ";
	upper(str1); // invoke upper with str1
	cout << str1 << endl; // display upper
	
	cout << "After a call to lower: ";
	lower(str2); //invoke lower with str2
	cout << str2 << endl; // display lower
	
	cout << "After a call to flip:  ";
	flip(str3); //invoke flip with str3
	cout << str3 << endl; //display flip
	
	return 0;
}

void upper(char str[]){ //step through each charecter in the string, and, convert to uppercase
	while(*str != 0){
		*str = toupper(*str); //convert to uppercase
		str++;
	}
}

void lower(char str[]){ // step through each charecter in the string, converting to lower
	while(*str !=0){
		*str= tolower(*str); //convert to lowercase
		str++;
	}
}

void flip(char str[]){
	//If *str is lowercase, convert to uppercase. Else, convert to lowercase
	while(*str !=0){
		if(islower(*str)){
			*str=toupper(*str);
		}
		else{
			*str=tolower(*str);
		}
		str++;
	}
}






