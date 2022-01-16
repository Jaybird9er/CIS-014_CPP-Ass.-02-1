#include <iostream>
#include <iomanip>

using namespace std;

/**
 * FUNCTION NAME: breakCash
 * PURPOSE: the function takes in the total of pennies from the user as input,
 *     computes its equivalent in dollars, quarters, dimes, nickels, and
 *     pennies, and outputs the result in string to the console
 * PARAMETER:
 *     int numPennies
 * RETURN VALUE:
 *     string: result in dollars, quarters, dimes, nickels, and pennies
 * FUNCTION SINGATURE:
 *     string breakCash(int numPennies)
 */

string breakCash(int numPennies)
{

    int dollars;
    int quarters;
    int dimes;
    int nickels;
    double canadianRate = 1.33 / 1;
    double canadianDollars;
    char messageOut[800];

    cout << showpoint << fixed << setprecision(2);

    canadianDollars = canadianRate * numPennies / 100;

    dollars = numPennies / 100;
    numPennies -= dollars * 100;
    quarters = numPennies / 25;
    numPennies -= quarters * 25;
    dimes = numPennies / 10;
    numPennies -= dimes * 10;
    nickels = numPennies / 5;
    numPennies -= nickels * 5;


    sprintf(messageOut, "In US currency you have: %i dollars, %i quarters, %i dimes, %i nickels, and %i pennies.\nIn Canadian currency you have: %.2f dollars.", dollars, quarters, dimes, nickels, numPennies, canadianDollars);

    return messageOut;
}

int main()
{
   int numOfPennies = 0;
   cout << "Please enter all of your pennies: " << endl;
   cin >> numOfPennies;
   cout << breakCash(numOfPennies);

   return 0;
}
