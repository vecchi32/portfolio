#include "RoomCarpet.h"
//empty constructor
RoomCarpet::RoomCarpet()
{

}

//setting the length of the room
void RoomCarpet::setLength(int feet, int inches)
{
    carpet.setLength(feet, inches);
}

//setting the width of the room
void RoomCarpet::setWidth(int feet, int inches)
{
    carpet.setWidth(feet, inches);
}

//setting cost of the carpet per square foot
void RoomCarpet::setCost(double cost)
{
    this->cost = cost;
}


//calculate total cost of the carpet
double RoomCarpet::calcTotal()
{
    double total;                   //holds total
    double area;                    //holds area

    //calls on calcArea to return area of the room and store in area
    area = carpet.calcArea();

    //calculate the total cost
    total = cost * area;
    return total;
}
