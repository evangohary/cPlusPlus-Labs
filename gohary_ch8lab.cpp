//chapter 8 lab - array of payroll


#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

class payRoll{
	private:
		double payRate, hoursWorked;
	public:
		
		double grossPay(){
			grossPay = payRate* hoursWorked;
			return grossPay;
		}
};

int main (){
	const int size = 7;
	int A[SIZE] = {};
	
	
	ifstream dataIn;
	string line;
	
	dataIn.open("payroll.txt");
	
}