#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    //HEADER
    cout << "C++ CIS142 ** Name: Edgar Brizuela **          C++ \n" << endl;
    cout << "C++ CIS142 ** Chapter 3: Expressions and Interactivity  **          C++ \n" << endl;
    cout << "C++ CIS142 ** #18 Interest Earned ** C++ \n" << endl;
    cout << "C++ CIS142 ** Date Submitted:  9/14/2023 **    C++ \n" << endl;

    //VARIABLES
    double Principal, Rate, Interest, Total, RateCalc;
    int T;

    //asking for principle amount
    cout << "How much are you placing into your savings? (principal amount) ";
    cin >> Principal;

    //asking for interest rate
    cout << "Whats the interest rate on the saivngs account? ";
    cin >> Rate;
    RateCalc = Rate/100;

    //asking how many times will the interest be compounded throughout the year
    cout << "How often will the interest be compounded? ";
    cin >> T;

    //calculating output
    RateCalc = 1 + (RateCalc / T);
    RateCalc = pow(RateCalc,T);
    Total = Principal * RateCalc;
    Interest = Total - Principal;
    
    //final output

    cout << setprecision(2) << fixed;

    cout << setw(20) << left << "Interest Rate:" << "  ";
    cout << setw(10) << right << Rate << "% \n";

    cout << setw(20) << left << "Times Compounded:" << "  ";
    cout << setw(10) << right << T << " \n";

    cout << setw(20) << left << "Principal: " << "$ ";
    cout << setw(10) << right << Principal << " \n";

    cout << setw(20) << left << "Interest: " << "$ ";
    cout << setw(10) << right << Interest << " \n";

    cout << setw(20) << left << "Amount in Savings:" << "$ ";
    cout << setw(10) << right << Total << " \n";
    
    return 0;
}