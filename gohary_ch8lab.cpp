//chapter 8 lab - array of payroll
//Nothing works yet

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

class payRoll{ 
	private: //data members
		float payRate, hoursWorked;
	public: 
	//members function to set the hourly pay rate and # of hours worked 
	//And calculate gross pay
	 void setRates(int pay, int hours){
			payRate = pay;
			hoursWorked = hours;
		}
		int getRates(){
			return payRate;
			return hoursWorked; 
		}
		
		
		
		
};

int main (){
	//creating an array of seven payroll objects
	payRoll myPayRoll[7];
	float tempVal;
	
	ifstream dataIn;	
	dataIn.open("payroll.txt");


//loop to read the number of hours each employee worked and their 
//hourly pay rate
	for(int i=0; i<7; i++){
		getline(cin, tempVal);
		myPayRoll[i].setRates(tempVal);
		getline(cin, temp);
		myPayRoll[i].setRates(tempVal);
		
	}
	
	
}





