//************************
// CH7 lab Gratunity calculator
// Programmer: Evan Gohary
// Completed 10/26/2022
//
//This program determine the gratuity on a restraunt meal,
//It takes the locations tax %, total bill after tax, and desired tip and
//calculates how much the meal was before tax, before displaying
// how much the tip should be
//************************************************


#include <iostream>
#include <iomanip>
using namespace std;

class Tips {
	private: 
		double taxRate;	 //member variable taxRate 
	public:
		Tips(double rate){   // constructor with 1 parameter
			taxRate = rate;  // handles tax
		}
		Tips(){   		//defualt constructor setting taxRate to .085
		taxRate = .085;
		}
	// public function computerTip that accpeting the two arguments total bill amount and tip rate
		double computeTip(double totalBillAmount, double tipRate){ 
			double beforeTax = totalBillAmount/(1+taxRate);
			beforeTax = beforeTax*(tipRate/100);
			return beforeTax;			
		}
};



int main(){
	cout << "This program will computer a restaurant tip based on a total\n"
	<< "bill amount and the % the patron wishes to tip the server.\n\n";
	
	double tax;
	cout << "Tax % for this location:  ";
	cin >> tax;
		if(tax <= 0){
			cout << "Tax % cannot be less than 0. Please re-enter tax %: ";
			cin >> tax;
	}
	Tips rate(tax/100); //turning our cin into a decimal i can use to calculate tip  
	
	char response('y');
	do { //get inputs
	
	//declare totalBillAmount and tipRate in this scope
	double totalBillAmount, tipRate;
		cout << "\n************* Tip Helper ***********\n"
		<< "Enter total bill amount: " ;
		cin >> totalBillAmount;
		cout << "Enter desired tip % ";
		cin >> tipRate;
	 
	 // format output
	 	cout << fixed << showpoint <<setprecision(2);
	//display tip by sending our totalBillAmount and Tiprate to computerTip
	//and tell the compiler r (the user entered tax %) is the taxRate
		cout << "\nThe tip should be $" << rate.computeTip(totalBillAmount, tipRate);
		cout<<"\nCompute another tip (y/n)? ";
		cin >> response;
		
	} while (response == 'Y' || response == 'y');
	
	
	
	
}