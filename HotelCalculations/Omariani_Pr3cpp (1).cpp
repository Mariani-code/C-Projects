/*
 * Class: CMSC140 CRN
 * Instructor: Khandan
 * Project<3>
 * Description: Hotel Calculations
 * Due Date: March 27
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Omeed Mariani
*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main (){
    //Define Variables
    int floornumber =0;
    string state;
    int roomnumber =0;
    int r=0;
    int single =0;
    int doubleroom =0;
    int king =0;
    int suite=0;
    int singleroom=60;
    int doublerooms=75;
    int kingroom=100;
    int suiteroom=150;
    int totalofrooms = 0;
    int totaloccupiedrooms =0;
    int totalunoccupiedrooms=0;
    int occupancyrate =0;
    int i=1;
    int small =0;
    int sum = 0;
    // Setup Title
    cout << fixed << setprecision(3);
    cout << "****************************************" << endl;
    cout << right << setw(25) << "BlueMount Hotel\n";
    cout << "****************************************" << endl;
    // Ask for location of hotel chaiin
    cout << "Enter the location of this hotel chain:";
    cin >> state;
    // Ask for total number of floors in the hotel
    cout << "Enter total number of floors of the hotel:";
    cin >> floornumber;
    // Create the condition to limit the number of floors. Keep it between 1 and 5
    while (floornumber <=0 || floornumber >=6)
    {
    cout << "Number of floors should be between 1 and 5!! please try again. " << endl;
    cout << " " << endl;
    cout << "Enter the total number of floors of the hotel: ";
    cin >> floornumber;
    }
    
    // Create condition to incriment floor numbers
    for (r=1; r<=floornumber; r++)
    {
    // Enter the number of rooms on each floor
    cout << "Enter the number of rooms in the " << r << "th floor" << endl;
    cin >> roomnumber;
    // Create a condition to limit the number of rooms. Keep it between 1 and 30
    while (roomnumber <=0 || roomnumber>=31)
    {
    cout << "number of rooms should be between 1 and 30!! Please try again ";
    cin >> roomnumber;
    }
    // Read how many people are occupying each room type on each floor
    cout << "How many SINGLE rooms are occupied in the " << r << "th floor: ";
    cin >> single;
    cout << "How many DOUBLE rooms are occupied in the " << r << "th floor: ";
    cin >> doubleroom;
    cout << "How many KING rooms are occupied in the " << r << "th floor: ";
    cin >> king;
    cout << "how many SUITE rooms are occupied in the " << r << "th floor: ";
    cin >> suite;
    sum=single+doubleroom+king+suite;
    
    
        
    // Create condition to catch if the number of occupied rooms exceed the total number of rooms on the floor
    while (sum > roomnumber)
    {
    cout << "Total number of occupied rooms exceeds the total number of rooms on this floor. Pleas try again !!" << endl;
    cout << " ";
    cout << "Enter total number of rooms in the " << r << "th floor:";
    sum =0;
    cin >> roomnumber;
    while (roomnumber <=0 || roomnumber>=31){
    cout << "number of rooms should be between 1 and 30!! Please try again ";
    cin >> roomnumber;
    }
    cout << "How many SINGLE rooms are occupied in the " << r << "th floor: ";
    cin >> single;
    cout << "How many DOUBLE rooms are occupied in the " << r << "th floor: ";
    cin >> doubleroom;
    cout << "How many KING rooms are occupied in the " << r << "th floor: ";
    cin >> king;
    cout << "how many SUITE rooms are occupied in the " << r << "th floor: ";
    cin >> suite;
    }
    totalofrooms = totalofrooms+roomnumber;
    }
    totaloccupiedrooms = totaloccupiedrooms+single+doubleroom+king+suite;
    // Setup print title and price list
    cout << "****************************************" << endl;
    cout << " " << endl;
    cout << right << setw(40) << "BlueMont Hotel located in " << state << endl << endl;
    cout << right << setw(46) << "TODAY'S ROOM RATES (US$/night)" << endl << endl;
    cout << right << setw(20) << "Single Room"<< setw(20) << "Double Room"<<setw(20) << "King Room"<<   setw(20) << "Suite Room";
    cout << endl<<endl;
    cout << right << setw(20) << singleroom << setw(20) << doublerooms << setw(20)<< kingroom  << setw(20) << suiteroom << endl;
    cout << "********************************************************************************" << endl;
    cout << " " << endl;
    // Define variables with price list
    int totalincomesingle = singleroom*single;
    int totalincomedouble = doublerooms*doubleroom;
    int totalincomeking = kingroom*king;
    int totalincomesuite = suiteroom*suite;
    double totalincome = totalincomesingle +totalincomedouble+totalincomeking+totalincomesuite;
    // Define the total income
    cout << "\n" << right << setw(35) << "Hotel Income: " << right << setw(9) << "$" << totalincome;
    //Define the total number of rooms
    cout << "\n" << right << setw(35) << "Total # of rooms: " << right << setw(10) << totalofrooms;
    //Define the total number of occupied rooms
    cout << "\n" << right << setw(35) << "Total # Occupied Rooms: " << right << setw(10) << totaloccupiedrooms;
    totalunoccupiedrooms = totalofrooms-totaloccupiedrooms;
    //Define the total number of unoccupied rooms
    cout << "\n" << right << setw(35) << "Total # Unoccupied Rooms: " << right << setw(10) << totalunoccupiedrooms;
    occupancyrate = (totaloccupiedrooms *1.0 /totalofrooms)*100;
    //Define the occupancy rate
    cout << "\n" << right << setw(35) << "Occupancy rate: " << right << setw(10) << occupancyrate << "%" << endl;
    // Create condition to see which floor has the least number of rooms
    small = roomnumber;
    for (r=1; r<=floornumber; r++){
    if (roomnumber < small)
    {
    small = r;
    i=r;
    }
    }
    cout << i << "th Floor with " << roomnumber << " rooms, has the least # of rooms.";
    if (occupancyrate <60)
    {
    cout << "Need to improve Hotel occupancy rate!! " << endl;
    }
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "Thank you for using my program" << endl;
    cout << "Programmer: Omeed Mariani" << endl;
    cout << "CMSC 140 PROJECT 3" << endl;
    cout << "Due Date: March 27" << endl;
    
    return 0;
}
