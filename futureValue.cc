/**
 *   @file: futureValue.cc
 * @author: Quinn Estes
 *   @date: 5/20/25
 *  @brief: Calculates the future value of an investment using compound interest.
 */

#include <iostream>
#include <iomanip>
#include <cmath>  // Needed for pow()

using namespace std;

int main() {
    // Variable declarations
    double investmentAmount;
    double annualInterestRate;
    double years;

    // Prompt user for input
    cout << "Enter the investment amount, the interest, and number of years:" << endl;
    cin >> investmentAmount >> annualInterestRate >> years;

    // Input validation
    if (investmentAmount < 0 || annualInterestRate < 0 || years < 0) {
        cout << "Error: Invalid Input" << endl;
        return 1;  // Exit with error code
    }

    // Convert percentage to decimal for calculation
    double interestRateDecimal = annualInterestRate / 100.0;

    // Calculate future value
    double futureValue = investmentAmount * pow(1 + interestRateDecimal, years);

    // Display formatted results
    cout << fixed << setprecision(2);
    cout << "Investment Amount: $" << investmentAmount << endl;
    cout << "Interest: " << annualInterestRate << "%" << endl;
    cout << "Number of years: " << years << endl;
    cout << "Future Value: $" << futureValue << endl;

    return 0;
}
