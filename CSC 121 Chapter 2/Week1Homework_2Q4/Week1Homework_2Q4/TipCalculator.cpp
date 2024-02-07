#include "TipCalculator.h"
#include <iostream>
#include <iomanip>
using namespace std;


void TipCalculator::tipCalculator() {
    double billAmount, tipPercentage;

    // Get the bill amount
    std::cout << "Enter the bill amount: $";
    std::cin >> billAmount;

    // Get the tip percentage
    std::cout << "Enter the tip percentage (e.g. 15 for 15%): ";
    std::cin >> tipPercentage;

    // Calculate the tip and total amount
    double tipAmount = (tipPercentage / 100) * billAmount;
    double totalAmount = billAmount + tipAmount;

    // Display the results
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Bill amount: $" << billAmount << std::endl;
    std::cout << "Tip amount: $" << tipAmount << std::endl;
    std::cout << "Total amount: $" << totalAmount << std::endl;


}
