#include "SemiTruck.h"
#include "Vehicle.h"
#include <iostream>


SemiTruck::SemiTruck(const std::string& n) : Vehicle(n){}

void SemiTruck::driveForward(int speed)
{
    if (speed <= 0)
    {
        setSpeed(speed);
        std::cout << "Driving at a Speed of: " << speed <<std::endl;
    }
    else if (speed > 0 && speed < 65)
    {
        std::cout << "Picking up Speed!" << std::endl;
        setSpeed(65);
    }
}

void SemiTruck::setSpeed(int s)
{
    Vehicle::setSpeed(s);
}

void SemiTruck::pullOver()
{
    Vehicle::setSpeed(0);
    std::cout << "Pulling Truck over for Patrol Car." <<std::endl;
}
