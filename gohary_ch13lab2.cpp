//************************
// CH13 lab 2, File decryption
// Programmer: Evan Gohary
// Completed 12/6/2022 
//
//this program  decrypts the file produced from program 1. 
//it will read the contents of the code file, restore the info to its 
//original state and write it to another (third) file
//************************************************

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	
	//vars
	const int LEN = 81;
	ifstream inFile;
	ofstream outFile;
	char inName[LEN], outName[LEN], input;
	
	//get and open input file
	cout<< "enter the input file name: ";
	cin.getline(inName, LEN);
	inFile.open(inName);
	
	if (!inFile){
		cout << "error opening " << outName << endl;
		return 0;
	}
	//get and open output file
	cout << "enter the output file name: ";
	cin.getline(outName, LEN);
	outFile.open(outName);
	if(!outFile){
		cout << "error opening " << outName << endl;
		return 0;
	}
	
	while (!inFile.eof()){
		inFile.get(input);
		//decrypt the character by subtracting 10 from it
		input -=10;
		outFile.put(input);
	}
	cout << "The file has been decrypted.\n";
	inFile.close();
	
	
}