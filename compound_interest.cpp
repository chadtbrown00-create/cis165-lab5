#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double principal;
    double annual_rate;
    double rate;
    int times_compounded;
    double amount;
    double interest_earned;

    cout << "Enter the principal balance: ";
    cin >> principal;

    cout << "Enter the annual interest rate (%): ";
    cin >> annual_rate;

    cout << "Enter the number of times compounded per year: ";
    cin >> times_compounded;

    rate = annual_rate / 100.0;

    amount = principal * pow(1.0 + rate / times_compounded,
                            times_compounded);

    interest_earned = amount - principal;

    cout << fixed << setprecision(2);

    cout << "\nCompound Interest Report\n";
    cout << "-----------------------------\n";

    cout << left << setw(25) << "Interest Rate:"
         << annual_rate << "%\n";

    cout << left << setw(25) << "Times Compounded:"
         << times_compounded << "\n";

    cout << left << setw(25) << "Principal:"
         << "$" << principal << "\n";

    cout << left << setw(25) << "Interest Earned:"
         << "$" << interest_earned << "\n";

    cout << left << setw(25) << "Amount in Savings:"
         << "$" << amount << "\n";

    return 0;
}
