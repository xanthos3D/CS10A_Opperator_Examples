//xander maniaci
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    //double variables for storing different currency values.
    double usMoney, yen = 0, rand = 0, shekel = 0, euro = 0;
    //ensures that all double variable printed to the screen are in fixed point notation,to the second decimal place, and it shows two places even if they are zeros.
    cout << setprecision(2)<< fixed << showpoint;
    //prompts user for amount of us currency
    cout << "Amount of U.S. currency to convert: ";
    cin >> usMoney;
    //calculates the currency conversion by multiplying the amount of US currency by the conversion amount for country
    yen = usMoney * 98.18000;
    rand = usMoney * 10.27950;
    shekel = usMoney * 3.63270;
    euro = usMoney * 0.75630;
    //out puts conversion to the screen.
    cout << "\n\nFOREIGN CURRENCIES CONVERTED\n----------------------------\n"<<endl;
    cout <<"$"<< usMoney << " = " << yen <<" Yen (JAPAN)\n"<<endl;
    cout <<"$"<< usMoney << " = " << rand <<" Rand (SOUTH AFRICA)\n"<<endl;
    cout <<"$"<< usMoney << " = " << shekel <<" Shekel (ISRAEL)\n"<<endl;
    cout <<"$"<< usMoney << " = " << euro <<" Euros (EUROPEAN UNION)\n"<<endl;

//use showpoint to display to second decimal point
return 0;
}
