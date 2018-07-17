// counterbreaking.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int uNumber = 0, uCounter = 0, uCycle = 13;
	//after setting parameters counter is started
	int uListing[13]; //start of array

	while (uCounter < uCycle)
	{
		cout << "enter a single digit NUMBER" << endl;
		cin >> uNumber;
		uListing[uCounter] = uNumber;
		//confirms entered but not needed below line used as a check
		// cout << "your num " << uNumber << endl;
		
		// check for a proper number to be used
		// i would like to make an array to store entered values
				if (uNumber >= 0 && uNumber <= 9)
		{
				cout << uNumber << endl;
				cout << "you have ";  
				cout << uCycle - uCounter -1;
				cout << " entries left" << endl;
				++uCounter;
			}
			else {
				cout << "not a single digit number!! ending." << endl;
				system("pause");
				return 0;
			}
		
	}
	//timer is over at my specified limits
	cout << "program finished! You entered ";
	for (int j = 0; j < 13; j++)
		{
		cout << uListing[j];
		}
	cout << endl;
	system("pause");
	return 0;
}

