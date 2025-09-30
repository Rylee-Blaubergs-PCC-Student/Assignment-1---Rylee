// ------------- FILE HEADER -------------
// Author ✅: Rylee Blaubergs
// Assignment ✅: #1
// Date ✅: 9/28/25
// Citations:


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 1
// Participation ✅: 65%
// Challenge ✅: 70%
// Labs ✅: 100%


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅: 0
// Links (Optional):


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅:
// B. OUTPUT ✅:
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:
//    (Optional) flow chart link or file name:


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅:
// (Optional) Additional tests count:


// ------------- CODE -------------
#include <iostream>

using namespace std;

// Function prototypes (if any)


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main(int argc, char* argv[]) {
    int workerID = 0;
    int hoursWorked = 0;
    int usdPerHour = 0;
    int federalWithholdRate = 0;

    int grossPay = 0;
    double federalWithholdPercent = 0.00;
    double taxRate = 0.00;
    double netPay = 0.00;

    cout << "Welcome to my Weekly Payroll Program!!" << endl;
    cout << "Enter your employee ID number (numbers only): ";
    cin >> workerID;
    cout << "Enter number of hours worked (whole numbers): ";
    cin >> hoursWorked;
    cout << "Enter the hourly rate: ";
    cin >> usdPerHour;
    cout << "Enter the federal withholding rate: ";
    cin >> federalWithholdRate;
    cout << endl;
    
    grossPay = usdPerHour * hoursWorked;
    federalWithholdPercent = federalWithholdRate / 100.00;
    taxRate = grossPay * federalWithholdPercent;
    netPay = grossPay - taxRate;
    
    cout << "Your Payroll Summary:" << endl;
    cout << "Your total gross pay: " << "$" << grossPay << endl;
    cout << "Federal Tax Withholding: " << "$" << taxRate << endl;
    cout << "Net Pay: " << "$" << netPay << endl;
    cout << endl;
    
    cout << "Thank you for using my Weekly Payroll program!!"; 
    return 0;
    
}

// Function implementations (if any)


// ------------- DESIGN -------------
/*
Program Name: Weekly Payroll Program

Program Description:

Design:
A. INPUT
INPUT Worker id as an INT
INPUT Hours Worked as an INT
INPUT Hourly Rate as an INT
INPUT Federal Withholding Rate

B. OUTPUT
Total gross pay as an int
Federal Withhold Percent as an double
Tax Rate as an double
Net pay as an double


C. CALCULATIONS
CALCULATE grossPay by usdPerHour * hoursWorked
CALCULATE federalwithholdPercent by federalWithholdRate / 100.00
CALCULATE taxRate by grossPay * federalWithholdPercent
CALCULATE netPay by grossPay - taxRate

D. LOGIC and ALGORITHMS
DECLARE integer workerID
DECLARE integer hoursWorked
DECLARE integer usdPerHour
DECLARE integer federalWithholdRate
DECLARE integer grossPay
DECLARE double federalWithholdPercent
DECLARE double taxRate
DECLARE double netPay

DISPLAY welcome message
DISPLAY Enter your employee ID number (numbers only):
INPUT workerID
DISPLAY Enter number of hours worked (whole numbers):
INPUT hoursWorked
DISPLAY Enter the hourly rate:
INPUT usdPerHour
DISPLAY Enter the federal withholding rate:
INPUT federalWithholdRate

SET  grossPay = usdPerHour * hoursWorked;
SET  federalWithholdPercent = federalWithholdRate / 100.00;
SET  taxRate = grossPay * federalWithholdPercent;
SET  netPay = grossPay - taxRate;

DISPLAY Payroll header
DISPLAY total gross pay
DISPLAY federal tax withholding
DISPLAY net pay

DISPLAY Goodbye message
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Welcome to my Weekly Payroll program!!
Enter your employee ID number (numbers only): 34567
Enter number of hours worked (whole numbers): 40
Enter the hourly rate: 17
Enter the federal withholding rate: 15

Your Payroll Summary:
Total Gross Pay: $680
Federal Tax Withholding: $102
Net Pay: $578

Thank you for using my Weekly Payroll program!!



Welcome to my Weekly Payroll program!!
Enter your employee ID number (numbers only): 12345
Enter number of hours worked (whole numbers): 30
Enter the hourly rate: 22
Enter the federal withholding rate: 10

Your Payroll Summary:
Total Gross Pay: $660
Federal Tax Withholding: $66
Net Pay: $594

Thank you for using my Weekly Payroll program!!


*/
