// This program converts seconds to minutes and seconds.
// note the use of the modulus operator
//xander maniaci
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	// The total seconds is 125.
    // creates variables for to store coins as well as the user input.
	int change;
	int pennies = 0,nickels = 0,dimes = 0, quarters = 0;

	 cout <<"Please enter number of cents: ";
	 cin>> change;
    // divides change by coin amount to so that coin amount is stored in proper value then uses the modulus operator to give the remainder. setting change to the remainder so that the last coins amount is removed
	quarters = change / 25;
	change = change % 25;
	dimes = change / 10;
	change = change % 10;
	nickels = change / 5;
	change = change % 5;
	pennies = change / 1;
	change = change % 1;
    // returns amount of coins in ascending and descending order
    cout <<"\nChange displayed in ascending order"<<endl;
	cout << "-------------------------------" << endl;
	cout << "pennies: " << pennies << endl;
	cout << "nickels: " << nickels << endl;
    cout << "dimes: " << dimes << endl;
    cout << "quarters: " << quarters << endl;
    cout <<"Change displayed in descending order"<<endl;
	cout << "-------------------------------" << endl;
	cout << "quarters: " << quarters << endl;
	cout << "dimes: " << dimes << endl;
	cout << "nickels: " << nickels << endl;
	cout << "pennies: " << pennies << endl;

	return 0;
}
