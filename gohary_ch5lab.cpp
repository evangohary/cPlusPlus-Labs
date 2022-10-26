//****************************
//CH5 Sales Bar Chart
//Programmer: Evan Gohary
// Completed: 10/3/20222
//
//This program displays three stores sales as * per 100$ of sales, rounded to the nearest 100$
//************************************
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {
int num = 8;
// cout << --num << " ";
// cout << num++ << " ";
// cout << num << "\n"; 
	const int num_Stores = 3; // set a constant of 3 for num_Stores
	
	int storeOne,	// start store 1,2,3 and their rounded int
		storeOneRounded,
		storeTwo,
		storeTwoRounded,
		storeThree,
		storeThreeRounded;
		
	double rounder;	
	int stores;
	
	//Use stores <= num_Stores to execute function as many times as necasarry,
	// increasing stores by 1 each sucessful exceution untill the value is 
	// <= num_stores, which has a constant value of 3
	//get information about each stores sales, and save in storeOne, storeTwo, and storeThree,
	// If user enters a negative or 0, ask for a positive number,
	// Once the user enters a valid 
	
	stores = 1;
	while (stores <= num_Stores){ // while stores <= 3, run
		// if stores == 1, excecute if to get information of storeOne sales, and check its valid before
		// adding 1 to stores, and moving to storeTwo
		if (stores == 1){ 
			cout << "Enter today's sales for store 1: ";
			cin >> storeOne;
			//If value is a negative or 0, ask for another input
			if(storeOne <= 0){
				cout << "Please enter a positive number for store 1: ";
				cin >> storeOne; 
				}
				stores++;
		}
		
	
		// if stores == 2, excecute if to get information of storeTwo sales, and check its valid before
		// adding 1 to stores, and moving to storeThree
	if (stores == 2){
			cout << "Enter today's sales for store 2: ";
			cin >> storeTwo;
			
			//If value is a negative or 0, ask for another storeTwo input
			if(storeTwo <= 0){
				cout << "Please enter a positive number for store 2: ";
				cin  >> storeTwo;
			}	
				stores++;
		}
		
		// if stores = 3, excecute if to get information of storeThree sales, and check its valid before
		// adding 1 to stores, which will make stores greater than 3, causing the loop condition to be false
	if (stores == 3){
			cout << "Enter today's sales for store 3: ";
			cin >> storeThree;
			
			if(storeThree <= 0){
				cout << "Please enter a positive number for store 3: ";
				cin >> storeThree;
				}
				stores++;
			}
		}
		
	//Display daily sales as directed in lab instructions
	cout << "\n   Daily Sales\n    (Each * = $100)\n";
	// convert store's inputed value to the closest rounded 100 value
		storeOneRounded= (storeOne + 50)/100*100;
		storeTwoRounded= (storeTwo + 50)/100*100;
		storeThreeRounded= (storeThree + 50)/100*100;
	
	//string letter, assign it the value *, and start sum at 0.
	string letter;
	letter = '*';
	int sum = 0;


	//Use I to display string letter (which is *), ____ times,
	// based off of rounded values after being divided by 100
	cout << "\nStore 1: ";
	for(int i = 1; i <= storeOneRounded/100;i++){
	sum = sum + i;
	cout << letter;
	}
	cout << "\nStore 2: ";
	for(int i = 1; i <= storeTwoRounded/100;i++){
	sum = sum + i;
	cout << letter;
	}
	cout << "\nStore 3: ";
	for(int i = 1; i <= storeThreeRounded/100;i++){
	sum = sum + i;
	cout << letter;
	}
		}
	
			
	
	
		
	 
