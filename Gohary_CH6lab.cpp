//************************
// CH6 lab Winning Division
// Programmer: Evan Gohary
// Completed 10/5/2022
//
//This program determine which of a company's four divisions
// Had the greatest sales for a quarter.
//************************************************

#include<iostream>
#include<iomanip>

using namespace std;

// Function prototypes
void getSales(double &, double &, double &, double &);
void findHighest(double , double, double, double);

int main(){
	
	// Start D1,D2,D3,D4 and invoke getSales
	double D1,D2,D3,D4;
	getSales(D1,D2,D3,D4);
	
	// Invoke findHighest with D1,D2,D3, and D4 values
	findHighest(D1,D2,D3,D4);
	
}

//Get Quarterly sales for each division, checking if the input is greater than or equal to 0,
// if it is not, prompt the 2 cout statments and get a valid input
// use n1,n2,n3,n4 as an alias; using the & sign to define it. 
// Use void to tell the compiler that their is no return value;
void getSales(double &n1, double &n2, double &n3, double &n4){
	
	cout << "Enter the quarterly sales for the Northeast Division: ";
	cin >> n1;
	if(n1 <= 0){
		cout << "Sales figures cannot be negative. Please re-enter.";
		cout << "\nEnter the quarterly sales for the Northeast Division: ";
		cin >> n1;
	}
	cout << "Enter the quarterly sales for the Southeast Division: ";
	cin >> n2;
	if(n2 <= 0){
		cout << "Sales figures cannot be negative. Please re-enter.";
			cout << "\nEnter the quarterly sales for the Southeast Division: ";
		cin >> n2;
	}
	cout << "Enter the quarterly sales for the Northwest Division: ";
	cin >> n3;
	if(n3 <= 0){
		cout << "Sales figures cannot be negative. Please re-enter.";
		cout << "\nEnter the quarterly sales for the Northwest Division: ";
		cin >> n3;
	}
	
	cout << "Enter the quarterly sales for the Southwest Division: ";
	cin >> n4;
	if(n4 <= 0){
		cout << "Sales figures cannot be negative. Please re-enter.";
			cout << "\nEnter the quarterly sales for the Southwest Division: ";
		cin >> n4;
	}
}
// Use void to tell the compiler that their is no return value;

void findHighest(double D1, double D2, double D3, double D4){

	double Highest; 
// set the cout to show 2 decimal places, per lab requirments
	cout << fixed << setprecision(2) << showpoint;
	
	// Use if statment's to determine which value (D1,D2,D3, or D4 is highest,
	// and Cout the highest value 
	if (D1 > D2 && D1 > D3 && D1 > D4){
		Highest = D1;
		cout << "\nThe Northeast Division had the highest sales this quarter.\n" 
		<< "Their sales were $" << Highest;
	}
	if (D2>D1 && D2>D3 && D2>D4){
		Highest = D2;
		cout << "\nThe Southeast Division had the highest sales this quarter.\n" 
		<< "Their sales were $"<< Highest;
	}
	if (D3>D1 && D3>D2 && D3>D4){
		Highest = D3;
		cout << "\nThe Northwest Division had the highest sales this quarter.\n" 
		<< "Their sales were $"<< Highest;
	}
	if (D4>D1 && D4>D2 && D4>D3){
		Highest = D4;
		cout << "\nThe Southwest Division had the highest sales this quarter.\n" 
		<< "Their sales were $"<< Highest;
	}
	

}




	
