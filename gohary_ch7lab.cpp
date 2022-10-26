//Ch7 lab  - Gradituity calculator



#include <iostream>
#include <iomanip>
using namespace std;

class Tips {
	private: 
		double taxRate;	 //member variable taxRate 
	public:
		Tips(int r = .085){ // setting my default
			taxRate = r; // set to whatever rate is passed to it when tips obj is created
	}
	// public function computerTi[ that accpeting the two arguments total bill amount and tip rate
	
	//does not work yet
		double computeTip(double totalBillAmount, double tipRate){ 
		double beforeTax = totalBillAmount/(1+taxRate);
		beforeTax = beforeTax*taxRate;
		//beforeTax = totalBillAmount - beforeTax;
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
	Tips r(tax/100); //turning our cin into a decimal i can use to calculate tip and 
	
	char response('y');
	do { //get inputs
	double totalBillAmount, tipRate;
		cout << "\n************* Tip Helper ***********\n"
		<< "Enter total bill amount: ";
		cin >> totalBillAmount;
		cout << "Enter desired tip % ";
		cin >> tipRate;
		
		cout << "\nThe tip should be $" << r.computeTip(totalBillAmount, tipRate);
		cout<<"\nCompute another tip (y/n)? ";
		cin >> response;
		
	} while (response == 'Y' || response == 'y');
	
	
	
	
}