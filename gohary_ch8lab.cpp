//chapter 8 lab - array of payroll
//Nothing works yet

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

class payRoll{ 
	private: //data members
		float payRates, hoursWorked;
	public: 
	//members function decleration to set the hourly pay rate and # of hours worked 
	//And calculate gross pay
//	double getGrossPay(void);
//	void setHours(float hours);
//	void setHourlyRate(float rate);
	
	 void setHours(float hours){
	 	hoursWorked = hours;
	 }
	void setHourlyRate(float rate){
		payRates = rate;
	}
	float getHours(){
		return hoursWorked;
	}
	float getRates(){
		return payRates;
	}

	double getGrossPay(void){
		return getHours()*getRates();
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
		
		
		dataIn >> tempVal;
		myPayRoll[i].setHours(tempVal);
		dataIn >> tempVal;
		myPayRoll[i].setHourlyRate(tempVal);	
	
	
	cout << "Employee   Gross Pay";
	cout << "========   =========";

	cout<< i << ":   $" << myPayRoll[i].getGrossPay << endl;
	}
	
}





