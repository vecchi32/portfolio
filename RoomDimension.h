#ifndef ROOMDIMENSION_H_INCLUDED
#define ROOMDIMENSION_H_INCLUDED
#include "FeetInches.h"

class RoomDimension
{
    private:
        FeetInches length;
        FeetInches width;

    public:
        RoomDimension();
        void setLength(int feet, int inches);
        void setWidth(int feet, int inches);
        FeetInches calcArea();

};


#endif // ROOMDIMENSION_H_INCLUDED
