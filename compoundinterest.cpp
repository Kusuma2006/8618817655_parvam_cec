#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double principal, rate, time;
    int compounding_periods;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter annual interest rate (as a decimal): ";
    cin >> rate;

    cout << "Enter time in years: ";
    cin >> time;

    cout << "Enter number of compounding periods per year: ";
    cin >> compounding_periods;

    double amount = principal * pow(1 + (rate / compounding_periods), compounding_periods * time);
    double compound_interest = amount - principal;

    cout << "Compound Interest: " << compound_interest << endl;

    return 0;
}