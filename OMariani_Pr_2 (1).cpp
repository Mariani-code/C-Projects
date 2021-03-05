// Project 2, Converter Toolkit
/*
 * Class: CMSC140 CRN
 * Instructor: Monshi
 * Project<2>
 * Description: (Metric Converter)
 * Due Date: 3/9/20
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Omeed Mariani
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
// Define variables
{
    string Countryname;
    int NumberInput;
    double Temperature;
    double Kilometers;
    int Kilograms;
    // Ask for country name
    cout << "Enter a country name: " << endl;
    getline (cin,Countryname);
    cout << " " << endl;
    cout << " " << endl;
    // Establish the menu interface
    cout << "Converter Toolkit" << endl;
    cout << "_________________" << endl;
    cout << " 1. Temperature Converter" << endl;
    cout << " 2. Distance Converter" << endl;
    cout << " 3. Weight Converter" << endl;
    cout << " 4. Quit" << endl;
    cout << " " << endl;
    // Setup the choice options with input
    cout << "Enter your choice (1-4): " << endl;
    cin >> NumberInput;
    // Make a command that allows you to tell the user they have to input numbers 1 to 4 in the menu
    switch (NumberInput <=0 || NumberInput>=5) {
    case 1:
    while (NumberInput <=0 || NumberInput>=5) {
    // Ask for menu inputs
    cout << "Please enter a number between 1 and 4, try again " << endl;
    cin >> NumberInput;
    }
    break;
    }
    // Command line for number 1 in menu set
    if (NumberInput == 1)
    {
    cout << "Please enter the temperature in Celsius (such as 24) " << endl;
    cin >> Temperature;
    // Make conversion calculator variables
    int TConverted = Temperature*1.8;
    int TF = TConverted+32;
    cout << "That is " << TF << " Degress in Fahrenheit" << endl;
    // input menu response protocol for all programs
    cout << Countryname << " sounds fun!" << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "Thank you for using my program! !" << endl;
    cout << "PROGRAMMER: Omeed Mariani" << endl;
    cout << "CMSC140 Common Project 2" << endl;
    cout << "Due Date: 3/9/20" << endl;
    }
    // Command line for number 1 in menu set
    else if (NumberInput == 2)
    {
    cout << "Please enter the distance in Kilometers (such as 10) " << endl;
    // Ask for kilometer conversion
    cin >> Kilometers;
    // establish that the user can't input negative distance
    switch (Kilometers <0) {
    case 1:
    while (Kilometers <0) {
    cout << "You cannot input a negative distance, please try again " << endl;
    cin >> Kilometers;
    }
    break;
    }
    // kilometer to miles conversion
    double KConverted = Kilometers*0.62;
    cout << "That is " << setw(2) << KConverted << " Miles" << endl;
    // Menu answer protocoll
    cout << Countryname << " sounds fun!" << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "Thank you for using my program! !" << endl;
    cout << "PROGRAMMER: Omeed Mariani" << endl;
    cout << "CMSC140 Common Project 2" << endl;
    cout << "Due Date: 3/9/20" << endl;
    }
    // number input for 3
    else if (NumberInput == 3)
    {
    cout << "Please enter the Weight in Kilograms (such as 5) " << endl;
    cin >> Kilograms;
    // establish that you can't have negative weight
    switch (Kilograms<0) {
    case 1:
    while (Kilograms <0) {
    cout << "You cannot input a negative weight, please try again " << endl;
    cin >> Kilograms;
    }
    default:
    while (Kilograms >0) {
    double KiloC = Kilograms*2.2;
    cout << "That is " << setw(1) << KiloC << " Pounds" << endl;
    // menu answer protocoll
    cout << Countryname << " sounds fun!" << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "Thank you for using my program! !" << endl;
    cout << "PROGRAMMER: Omeed Mariani" << endl;
    cout << "CMSC140 Common Project 2" << endl;
    cout << "Due Date: 3/9/20" << endl;
    break;
    }
    }
    }
    // command line for input 4
    else if (NumberInput == 4)
    {
    cout << Countryname << " sounds fun!" << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "Thank you for using my program! !" << endl;
    cout << "PROGRAMMER: Omeed Mariani" << endl;
    cout << "CMSC140 Common Project 2" << endl;
    cout << "Due Date: 3/9/20" << endl;
    return 0;
    }
       
    
return 0;
}



