#include "RoomDimension.h"
//empty constructor
RoomDimension::RoomDimension()
{

}

//set length of the room
void RoomDimension::setLength(int feet, int inches)
{
    length.setFeet(feet);
    length.setInches(inches);
}

//set width of the room
void RoomDimension::setWidth(int feet, int inches)
{
    width.setFeet(feet);
    width.setInches(inches);
}

//calls to calculate square footage and return
FeetInches RoomDimension::calcArea()
{
    return length.multiply(width);
}
