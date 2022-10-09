// Copyright (c) 2022 Peter Sobowale All rights reserved.
//
// This program asks the user for the subtotal and the tax
// percentage. It then calculates and displays the HST
// and the total.
#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    // declare constants
    const float TAX_RATE_ALBERTA = 5;

    // declare variables
    float tax, subtotal, total;

    // get subtotal input
    std::cout << "Enter subtotal: $";
    std::cin >> subtotal;

    // Calculate the tax and total
    tax = subtotal * TAX_RATE_ALBERTA / 100;
    total = subtotal + tax;

    // Display subtotal, tax and total
    std::cout << "\nYou entered a subtotal of $" << std::fixed
        << std::setprecision(2) << std::setfill('0') << subtotal
        << std::endl;
    std::cout << "\nThe HST is $" << std::fixed << std::setprecision(2)
        << std::setfill('0') << tax << " and the total is $"
        << std::fixed << std::setprecision(2) << std::setfill('0')
        << total << std::endl;
}
