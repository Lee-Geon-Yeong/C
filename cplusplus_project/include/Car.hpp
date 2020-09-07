#pragma once
#include <string>
using namespace std;
class Car {         // class original
// default access restricter : private
    int speed;
    int gear;
    string color;

public:
    int getSpeed();         // function original
    void setSpeed(int s);
};