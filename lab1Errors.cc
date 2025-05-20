/**
 *   @file: lab1Errors.cc
 * @author: Quinn Estes
 *   @date: 5/20/25
 *  @brief: fixing errors in the quadratic formula program
 */

#include <iostream>
#include <iomanip>
#include <cmath>  // Added to use sqrt
using namespace std;

int main() {
    double a, b, c;
    double disc;

    cout << "Enter the values for a, b, and c." << endl;
    cin >> a >> b >> c;

    disc = sqrt(b * b - 4 * a * c);

    double x1, x2;  // Fixed declaration

    x1 = (-b + disc) / (2 * a);
    x2 = (-b - disc) / (2 * a);

    cout << "x1 = " << x1 << endl;  // Fixed quote
    cout << "x2 = " << x2 << endl;

    return 0;
}
