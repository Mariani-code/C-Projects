/*
 * Class: CMSC140 CRN
 * Instructor:
 * Project<4>
 * Description: calculating employee absences average
 * Due Date:april 9 2020 
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Omeed Mariani
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;
// create a way for your code to output the answers to a .txt file as a global variable
ofstream outputFile ("EmployeeAbsences.txt");
// define your global variables
int NumOfEmployees ();
int TotDaysAbsent (int);
double AverageAbsent (int,int);
// establish your main function
int main () {
    // create your header for the .txt file
    outputFile<< "EMPLOYEE ABSENCE REPORT" << endl;
    outputFile<< "Employee ID      Days Absent" << endl;
    // link your calulcaiton functions to your main function
    int numEmployees = NumOfEmployees();
    int daysAbsent = TotDaysAbsent(numEmployees);
    double avgAbsent = AverageAbsent(numEmployees, daysAbsent);
    //create your promtps
    cout << "Number of Employees " << numEmployees << endl;
    cout << "Number of days absent " << daysAbsent << " days" << endl;
    cout << "Average number of days absent " << avgAbsent << " days" <<  endl;
    cout << "Programmer: Omeed Mariani" << endl;
    // output the answers in the correctly formatted way to the .txt file
    outputFile<< "The " << numEmployees << " employees were absent a total of " << daysAbsent << " days." << endl;
    outputFile<<" The average number of days absent is " << avgAbsent << " days." << endl;
    outputFile << "Programmer: Omeed Mariani" << endl;
    return 0;
}
// establish a function for your number of employees
int NumOfEmployees () {
    int numEmployees =0;
    // ask for how many employees are in the company
    cout << "How many employees are in the company?" << endl;
    // take in that infor
    cin >> numEmployees;
    // don't take any answer that's negative or less than 0 and create the appropriate error messages to prompt up
    while(numEmployees < 1)
    {
    cout << "Sorry the number of Employees has to be atleast 1.";
    cout << "Please enter the number of employees in the company : " ;
    cin >> numEmployees;
    }
    return numEmployees;
}
// create a function for days missed and employee iD
int TotDaysAbsent (int numEmployees) {
    int totalMissedDays =0;
   int employeeID =0;
   int missedDays =0;
    for (int i=0; i<numEmployees; i++)
    {
        // ask for employee ID
        cout << "Enter the employee ID:" << endl;
        // take in and store that info
        cin >> employeeID;
        // ask for number of days the employee missed work in the past year
        cout << "Enter the number of days the employee missed work durring the past year:" << endl;
        // take in and store that info
        cin >> missedDays;
        // the number of days can't be negative, create the appropriate prompts to come up if the user inputs a negative number
        while(missedDays < 0)
        {
        cout << "Sorry the number of days mised can't be a negative number." << endl;
        cout << "Please enter the number of days this employee was absent : ";
        cin >> missedDays;
        }
        totalMissedDays+=missedDays;
        // format and output your answers stored to the .txt file
       outputFile<< employeeID << setw(20) << missedDays << endl;
    }
    return totalMissedDays;
}
// create a function for the average absences
double AverageAbsent (int numOfEmployees, int totalDaysAbsent) {
    return (double)totalDaysAbsent/numOfEmployees;
    
}
