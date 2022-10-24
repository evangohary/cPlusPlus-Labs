/* 
Property tax lab
programmer: Evan Gohary
completed: 9/22/2022
status: completed


This program will calculate property taxes on the assessed value of property
using a inputed actual property value and tax rate per 100$ of assesed value	
*/

#include <iostream>
using namespace std;

int main ()
{
	double propertyValue, taxRate, assessedValue, propertyTax;
	
	//Get property tax information
	cout << "Enter the actual property Value: ";
	cin >> propertyValue;
	cout << "Enter the amount of tax per $100 of assessed value: $";
	cin >> taxRate;
	
	//calculate assessedValue and proppertyTax based off information user provided
	assessedValue = propertyValue * .6;
	propertyTax = assessedValue / 100 * taxRate;
	
	
	//display Property value, Assesed Value and Property Tax
	cout << "\nProperty Value: $ " << propertyValue << endl;
	cout << "Assessed Value: $ " << assessedValue << endl;
	cout << "Property Tax:   $   "  <<  propertyTax   << endl;

	
}
