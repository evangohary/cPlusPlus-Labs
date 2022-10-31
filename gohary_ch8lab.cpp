//chapter 8 lab - array of payroll
//Nothing works yet

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

class payRoll{ 
	private: 
		float payRates, hoursWorked;  //data members
	public: 
		void setHours(float hours){  // member functions to hours worked
		 	hoursWorked = hours;
		 }
		void setHourlyRate(float rate){ //member function to set pay rate
			payRates = rate;
		}
		double getGrossPay(){  //member function to calculate gross pay by multiplying the 2
							   //temp values sent from main 
			return (payRates*hoursWorked);
		}
};



int main (){
	payRoll myPayRoll[7]; //creating an array of seven payroll objects
	double temp1, temp2; // temp 
	ifstream dataIn;
		
	//loop to read the number of hours each employee worked and their 
	//hourly pay rate, storing in temp1 and temp2 
	dataIn.open("payroll.dat");
	for(int i=0; i<7; i++){
	dataIn >> temp1 >> temp2;
	myPayRoll[i].setHours(temp1);   //set hours to temp 1 value for the current loop 
	myPayRoll[i].setHourlyRate(temp2); // set hourlyRate to temp2 for the current loop
	}
	dataIn.close();	
	
	//display
	cout << "Employee   Gross Pay\n";
	cout << "========   =========\n";
	
	//loop 
	for (int i=0; i<7;i++){ 
	//call getGrossPay and display getGrossPay's return the gross pay based off the values I sent it
	cout<< i+1 << ":         $" << myPayRoll[i].getGrossPay() << endl;
	}
}





