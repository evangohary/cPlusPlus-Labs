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
		void setHours(float hours){
		 	hoursWorked = hours;
		 }
		void setHourlyRate(float rate){
			payRates = rate;
		}
	
		double getGrossPay(){
			return (payRates*hoursWorked);
		}

		
};



int main (){
	//creating an array of seven payroll objects
	payRoll myPayRoll[7];
	double temp1, temp2;
	
	ifstream dataIn;	
//loop to read the number of hours each employee worked and their 
//hourly pay rate

	dataIn.open("payroll.dat");
	for(int i=0; i<7; i++){
		
	dataIn >> temp1 >> temp2;
	myPayRoll[i].setHours(temp1);
	myPayRoll[i].setHourlyRate(temp2);
	}
	dataIn.close();	
	
	
	cout << "Employee   Gross Pay\n";
	cout << "========   =========\n";
	for (int i=0; i<7;i++){
		
	cout<< i << ":   $" << myPayRoll[i].getGrossPay() << endl;
	}

	
}





