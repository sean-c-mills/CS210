#ifndef INVESTMENT_CALCULATOR_H
#define INVESTMENT_CALCULATOR_H

#include <iostream>
#include <iomanip>
#include <limits> // For numeric_limits

class InvestmentCalculator {
private:
    double initialInvestment;
    double monthlyDeposit;
    double annualInterest;
    int numberOfYears;

public:
    // Constructor
    InvestmentCalculator(double initInvest, double monthDep, double annInterest, int numYears);

    // Displays reports for both cases (with and without monthly deposits)
    void displayReports();

private:
    // Helper functions for the calculations and display
    void printTableHeaders(bool isWithDeposit);
    void printDetails(int year, double yearEndBalance, double interestEarned);
    double calculateBalanceWithoutMonthlyDeposit();
    double balanceWithMonthlyDeposit();
};

#endif // INVESTMENT_CALCULATOR_H
