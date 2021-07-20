#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	//Constants variable declaration
	const float DISCOUNTPERC = 0.5;

	//Variable declaration
	float item1, item2, totalDue;

	//Obtain input
	cout << "Enter 1st item's price: ";
	cin >> item1;
	cout << "Enter 2nd item's price: ";
	cin >> item2;

	//Perform Calculations
	if (item1 < item2) 
	{
		totalDue = item2 + (item1 * DISCOUNTPERC);
	} else
	{
		totalDue = item1 + (item2 * DISCOUNTPERC);
	}

	//Display Output
	cout << "\nTotal: R" << fixed << setprecision(2) << totalDue;

	system("pause");

	return 0;
}

