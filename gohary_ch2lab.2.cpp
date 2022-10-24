//***************************************************
// Evan Gohary
// Complete
// This program calculates the hight of a 75 inch
// basketball player in feet and inches
//***************************************************
#include <iostream>  
using namespace std;

//function prototypes
float convertFeet, inch;
int main()
{
	float convertFeet; // Used to hold the total feet in 75 inches
	float inch;        // Used to hold the inches remaining 
	convertFeet = 75/12;	// Math to convert 75 inches to feet
	inch = 75 - convertFeet * 12; //Math to calculate the remaining inches from this equation
	cout << "A 75 inch tall basketball player is " << convertFeet << " and " << inch << " inches tall. " << endl;
	return 0;           
}
