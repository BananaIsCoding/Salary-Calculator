// Salary Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    unsigned int userChoice;
    float salary,taxableIncome = 0,tax = 0,nationalInsurance = 0;
    
    cout << "Hello, welcome to a very bad text based salary calculator that only calculate your monthly details";
    cout << "and is only acurately for salary from " << char(156) <<"0-50270 annually.\n\n";

    // do while loop to ensure user types in the correct input
    do {
        cout << "How would you like input in the form of: \n1 - Hourly Salary\n2 - Weekly Salary\n3 - Monthly Salary\n4 - Yearly/Annual Salary\n"
            << "(Please type in the number assign to each choice to continue): ";
        cin >> userChoice;
        if (userChoice < 0 || userChoice > 4)
        {
            cout << "\nPlease input 1,2,3 or 4\n\n";
        }
    }while (userChoice < 0 || userChoice > 4);

    cout << "\nPlease input your ";

    // making sure to output the write thing based on user input  
    if (userChoice == 1) {
        cout << "Hourly ";
    }
    else if (userChoice == 2) {
        cout << "Weekly ";
    }
    else if (userChoice == 3) {
        cout << "Monthly ";
    }
    else{
        cout << "Yearly ";
    }

    cout << "salary: \x9C";
    cin >> salary;

    // converting input to monthly income
    if (userChoice == 1) {
        salary *= 21;
    }
    else if (userChoice == 2) {
        salary = (salary * 52) / 12;
    }
    else if (userChoice == 4) {
        salary /= 12;
    }

    /*if (salary > (float) 100000 / 12) {

    }
    
    else */
   
    if (salary > 1047.5) { // there a personal allowance of £1047.5 (monthly)  

        taxableIncome = salary - 1047.5; 

        // calculating tax

       /* if (taxableIncome > 4227.25)
        {
            tax = (taxableIncome * 0.2) + ((taxableIncome - (37700 / 12)) * 0.2);
        }
        else{*/
            tax = taxableIncome * 0.2;

            nationalInsurance = taxableIncome * 0.08;
        //} 
    }

    //output
    cout << fixed << setprecision(2);
    cout << "\n-------------\n   Monthly   \n-------------\n";
    cout << "Gross Income : \x9C" << salary << "\n";
    cout << "Taxable Income : \x9C" << taxableIncome << "\n";
    cout << "Tax : \x9C" << tax << "\n";
    cout << "National Insurance : \x9C" << nationalInsurance << "\n";
    cout << "Take Home : \x9C" << salary - tax - nationalInsurance << "\n";


    


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
