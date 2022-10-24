//****************************
//The Speed of Sound
//Programmer: Evan Gohary
// Completed: 9/27/2022
//
//This program computes the time needed for sound to travel through selected median
//************************************

#include <iostream>
#include <string>  
#include <iomanip>
using namespace std;


int main()

{
	
double air, water, steel, speed; // start air, water, steel and speed
int chosenElement, distance; // start chosenElement and distance

//Get ChosenElement from user 
cout << "This program will tell you how long it takes a sound wave";
cout << "\nto travel a specific distance through a particular medium.";
cout << "\nSelect a substance for the sound to travel through:\n";
cout << "	1. Air \n	2. Water \n	3. Steel\n";
cin >> chosenElement;	//save chosen element


std::cout << std::fixed;           // setting floatfield format flag to fixed
std::cout << std::setprecision(4); // seting the decimal precision to lab peramiters (four decimal places)

// Check if element selected is not in required peramiters, if not display message
if (chosenElement < 1 || chosenElement > 3) { 
	cout << "Please enter 1, 2, or 3 for your desired substance";	
}

//IF the element is in peramiters, else statment executes to get number of feet needed to travel
else {
	cout << "\nEnter the number of feet the sound wave will travel: "; 
	cin >> distance;	
}

//if chosen element is air, calculate seconds needed to travel and display solution
if (chosenElement == 1){ 
	air = 1100.00; 
	speed = distance/air;
	cout << "The sound wave will travel " << distance << " feet through air in "<< speed <<" seconds."; 
}

// If chosen element is water, calculate seconds needed and display solution
if (chosenElement == 2){ 
	water = 4900.00;		
	speed = distance/water;  	
	cout << "The sound wave will travel " << distance << " feet through water in "<< speed <<" seconds."; 
}

// If chosen element is steel, calcualte seconds needed and display solution
if (chosenElement == 3){ 
	steel = 16400.00;  
	speed = distance/steel; 
	cout << "The sound wave will travel " << distance << " feet through steel in " << speed <<" seconds."; 
}
}
		
		

