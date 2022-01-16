#pragma once
#include <iostream>
#include <limits>
#include <string>
#include "Vehicle.h"

struct Vehicle;

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& n);
    
    
    void driveForward(int speed);
    void pullOver();
    void setSpeed(int s) override;
};


