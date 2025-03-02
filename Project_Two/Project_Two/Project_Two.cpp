/*
 *  Date: [2/09/2025]
 *  Author: [Sean Mills]
 *
 *  This program is the Airgead Banking Investment Calculator, and allows users to enter their initial investment
 *  amount, monthly deposit amount, the annual interest rate, and the number of years for investment. Once the program
 *  gets this input from the user, it will calculate investment growth in two ways. The first is without any monthly 
 *  deposits, which is the initial investment growth only with interest. The second is with monthly deposits, where interest
 *  compounds on both the initial investment and additional deposits. After the users data is calculated, it is displayed
 *  neatly on the screen in a table showing the calculations. Afterwards, the user is asked if they would like to run the
 *  program again to compare new data with the old data.
 *
 */

#include "investment_calculator.h"
using namespace std;

// Function that displays the input screen and collects the users input while making sure input is valid
InvestmentCalculator getUserInput() {
    double initialInvestment, monthlyDeposit, annualInterest;
    int numberOfYears;

    cout << "******** Data Input ********\n";

    // Validates the initial investment
    while (true) {
        cout << "Initial Investment Amount: $";
        cin >> initialInvestment;
        if (cin.fail() || initialInvestment < 0) { // Ensures a positive number is entered
            cout << "\nInvalid input. Please enter a positive number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Used to clear the input and remove any remaining characters
        }                                                        // and ensures that user input works correctly
        else {
            break;
        }
    }

    // Validates the monthly deposit
    while (true) {
        cout << "Monthly Deposit Amount: $";
        cin >> monthlyDeposit;
        if (cin.fail() || monthlyDeposit < 0) { // Ensures a positive number is entered
            cout << "\nInvalid input. Please enter a positive number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else {
            break;
        }
    }

    // Validates the annual interest rate
    while (true) {
        cout << "Annual Interest Rate: %";
        cin >> annualInterest;
        if (cin.fail() || annualInterest < 0) { // Ensures a positive number is entered
            cout << "\nInvalid input. Please enter a positive number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else {
            break;
        }
    }

    // Validates the number of years (has to be a whole number)
    while (true) {
        cout << "Number of Years: ";
        cin >> numberOfYears;
        if (cin.fail() || numberOfYears <= 0) {  // Ensures a positive whole number is entered
            cout << "\nInvalid input. Please enter a positive whole number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else {
            break;
        }
    }

    cout << "Press enter to continue...\n";  // Lets the user wait before results are calculated
    cin.ignore();                            // and presses the enter key to continue with the results
    cin.get();

    return InvestmentCalculator(initialInvestment, monthlyDeposit, annualInterest, numberOfYears);
}

// Main program
int main() {
    char choice;
    do {
        // Gets the users input and runs the calculations
        InvestmentCalculator investment = getUserInput();
        investment.displayReports();

        // Asks if the user wants to run the program again
        cout << "\nWould you like to test different values? (Y/N): ";
        cin >> choice;
        cout << endl;

    } while (choice == 'Y' || choice == 'y'); // Continues the program if the user enters "Y" or "y"

    // Message displayed once the program is finished (user selects no)
    cout << "Thank you for using the Airgead Banking application! Have a nice day!\n";
    return 0;
}
