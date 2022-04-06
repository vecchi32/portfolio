#include <iostream>
#include "RoomCarpet.h"
//************************************************************
// Chris Vecchiarelli
// 11/30/21
// Carpet Calculator
// Main will gather the dimensions from the user then pass
// them to an instance of RoomCarpet to perform calculations
// and return the total.
//************************************************************
using namespace std;

int main()
{
    int feet;           //holds user input feet
    int inches;         //holds user input inches
    int cost;           //holds user input cost per square foot
    int userSelect;     //holds user menu selection
    double total;       //holds total cost for carpet based on user input dimensions
    RoomCarpet room;    //instance of RoomCarpet

    //display menu and calculate cost of carpet for user until user chooses to leave
    do
    {
        cout << setw(25) << "Carpet Calculator" << endl
             << left << setw(20) << "1 - Calculate Room" << endl
             << setw(20) << "2 - Exit" << endl
             << setw(20) << "Enter selection: ";
        cin >> userSelect;

        //if user selected calculate room
        if(userSelect == 1)
        {
            //get and set the length dimension
            cout << "Enter the room's length (feet): ";
            cin >> feet;
            cout << "Enter the room's length (inches): ";
            cin >> inches;
            room.setLength(feet, inches);

            //get and set the width dimension
            cout << "Enter the room's width (feet): ";
            cin >> feet;
            cout << "Enter the room's width (inches): ";
            cin >> inches;
            room.setWidth(feet, inches);

            //get and set the cost per square foot
            cout << "Enter the cost per square foot: ";
            cin >> cost;
            room.setCost(cost);

            //calculate total
            total = room.calcTotal();

            cout << "The total for the carpet is $" << total << endl;
        }//end if

        //else thank user for using program
        else
            cout << "Thank you for using the carpet calculator.";

    }while(userSelect != 2);


}//end main
