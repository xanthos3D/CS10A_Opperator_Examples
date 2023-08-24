//xander maniaci
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
int main()

{
    string Line = "-------";
    //defines a string for top to bottom addition
    int Random1,Random2,Sum,TrueSum;
    //defines 4 empty int values

    unsigned seed;
     //creates seed value.
    seed = time(0);
    // sets seed to time from internal clock from 1970.
    srand(seed);
    // randomly generates number every time due to seed.

    char Enter;
    // char value to stop buffer from skipping over the enter key press to continue

    Random1 = rand() % 998 + 1;
    Random2 = rand() % 998 + 1;
    //randomly generates a number from 1-999 and sets random int values
    TrueSum = Random1 + Random2;
    // adds two random numbers together

   cout<< setw(5) << Random1 <<endl;
   cout<< "+ "<< setw(3) << Random2 <<endl;
   cout<< Line <<"\n"<<endl;
    cout<<"Press Enter to see the answer . . .\n";
    //prints out equation and prompts user to press enter when ready
    cin.get(Enter) ;
   cout<< setw(5) << Random1 <<endl;
   cout<< "+ "<< setw(3) << Random2 <<endl;
   cout<< Line <<endl;
   cout<< setw(5) <<TrueSum<<"\n\n"<<endl;
   //prints out equation plus answer. uses set width to make sure everything lines up.

return 0;
}
