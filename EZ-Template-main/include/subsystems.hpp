#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

 inline pros::Motor intake(20, pros::MotorGearset::green);
 inline pros::Motor intake2(4, pros::MotorGearset::green);
 inline pros::Motor intake3(10, pros::MotorGearset::blue);
 inline pros::ADIDigitalOut laneswitch('H');
 inline pros::ADIDigitalOut loaderclear('A');