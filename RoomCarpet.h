#ifndef ROOMCARPET_H_INCLUDED
#define ROOMCARPET_H_INCLUDED
#include <string>
#include <iomanip>
#include "RoomDimension.h"

class RoomCarpet
{
    private:
        RoomDimension carpet;
        double cost;

    public:
        RoomCarpet();
        void setLength(int feet, int inches);
        void setWidth(int feet, int inches);
        void setCost(double cost);
        double calcTotal();
};

#endif // ROOMCARPET_H_INCLUDED
