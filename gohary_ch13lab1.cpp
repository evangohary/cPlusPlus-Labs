//************************
// CH13 lab 1, File encryption
// Programmer: Evan Gohary
// Completed 12/6/2022 
//
//This program will read a text file character and
// make some change to the character before writing that character
// to a second new encrypted file
//**********************************************


#include <iostream>
#include <fstream>
#include <cstdlib>
#include <istream>
using namespace std;
int main (){
	
	const int LEN = 81;
	fstream inFile;
	
	char inName[LEN], outName[LEN], input, c;
	
	//get name of input file
	cout << "enter the input file name: ";
	cin.getline(inName, LEN);
	inFile.open(inName, ios::in | ios::out | ios::binary );
	
	if(!inFile){
		cout << "error opening " << outName << endl;
		return 0;
	}
	
	input = inFile.get();
	if (inFile.fail()){
		cout << "Infile get error ";
		return 0;
	}
	
	
	while(!inFile.eof()){
		cout << "here is the input: " << input << endl;
		input += 10;
		inFile.seekg(-1,ios::cur);
		
		if (!inFile.fail()){
			cout << char(inFile.peek());
			inFile.put(input);
			input = inFile.get();
			if(!inFile.eof()){
				if (inFile.fail()){
					cout << "Infile get error";
					return 0;
				}
			}
		}
	}
}

