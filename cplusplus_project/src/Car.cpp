#include "Car.hpp" //seach sequence : cwd(& include 검색)->user lib->compiler lib
#include<iostream> // seach sequence : user lib->compiler lib

// class definition file
void Car::setSpeed(int s){ // where the one on the right belongs :: scope
    speed=s;
}

int Car::getSpeed(){ // definite method using Car:: ->scope
    return speed;
}