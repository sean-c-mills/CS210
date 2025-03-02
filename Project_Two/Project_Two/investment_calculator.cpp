#include "investment_calculator.h"
using namespace std;

// Constructor
InvestmentCalculator::InvestmentCalculator(double initInvest, double monthDep, double annInterest, int numYears) {
    initialInvestment = initInvest;
    monthlyDeposit = monthDep;
    annualInterest = annInterest;
    numberOfYears = numYears;
}

// Function to display the investment reports
void InvestmentCalculator::displayReports() {
    printTableHeaders(false); // No monthly deposits
    calculateBalanceWithoutMonthlyDeposit();

    printTableHeaders(true); // With monthly deposits
    balanceWithMonthlyDeposit();
}

// Function that prints the table headers
void InvestmentCalculator::printTableHeaders(bool isWithDeposit) {
    if (isWithDeposit) {
        cout << "\n     Balance and Interest With Additional Monthly Deposits\n";
    }
    else {
        cout << "\n     Balance and Interest Without Additional Monthly Deposits\n";
    }
    cout << "==================================================================\n";
    cout << "| Year\t\tYear End Balance\tYear End Earned Interest |\n";
    cout << "------------------------------------------------------------------\n";
}

// Function that displays the Year, Year End Balance, and Year End Earned Interest values
void InvestmentCalculator::printDetails(int year, double yearEndBalance, double interestEarned) {
    cout << "    " << setw(2) << year
        << setw(18) << right << "$" << fixed << setprecision(2) << setw(8) << yearEndBalance
        << setw(24) << right << "$" << fixed << setprecision(2) << setw(8) << interestEarned
        << endl << endl;
}

// Function that calculates balance without monthly deposits
double InvestmentCalculator::calculateBalanceWithoutMonthlyDeposit() {
    double balance = initialInvestment; 
    double monthlyInterestRate = (annualInterest / 100) / 12; // Converts the annual interest rate to monthly
    double totalInterest = 0.0;

    for (int year = 1; year <= numberOfYears; year++) {
        totalInterest = 0.0; // Resets the yearly interest

        for (int month = 1; month <= 12; month++) {
            double interestEarned = balance * monthlyInterestRate; // Calculates interest for the month
            balance += interestEarned; // Updates the balance with interest
            totalInterest += interestEarned; // Accumulates the yearly interest
        }
        printDetails(year, balance, totalInterest);
    }
    return balance;
}

// Function that calculates the balance with monthly deposits
double InvestmentCalculator::balanceWithMonthlyDeposit() {
    double balance = initialInvestment;
    double monthlyInterestRate = (annualInterest / 100) / 12; // Converts the annual interest rate to monthly
    double totalInterest = 0.0;

    for (int year = 1; year <= numberOfYears; year++) {
        totalInterest = 0.0; // Resets the yearly interest

        for (int month = 1; month <= 12; month++) {
            balance += monthlyDeposit; // Adds the deposit before applying the interest
            double interestEarned = balance * monthlyInterestRate; // Calculates the interest
            balance += interestEarned; // Updates the balance with interest
            totalInterest += interestEarned; // Accumulates the yearly interest
        }
        printDetails(year, balance, totalInterest);
    }
    return balance;
}
