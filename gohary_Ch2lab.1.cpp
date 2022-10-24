//***************************************************
// Evan Gohary
// Complete
// This program calculates the price a company
// should see their flashdrives for to make a
// 35% profit on there product
//*****************************************************
#include <iostream>  
using namespace std;

//function prototypes
float productCost, profitGoal, salePrice;
int main()
{
	productCost = 8.00;  // Cost for company to make their flashdrives
	profitGoal = 1.35;   // Multiple needed to get a 35% profit on product
	salePrice = productCost * profitGoal; // Calculate sale price needed to make 35% prodit
	cout << "To have a 35% profit, the flash drive should sell for $" << salePrice << endl;
	return 0;
}

