#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

 inline pros::Motor intake(18, pros::MotorGearset::green);
 inline pros::Motor intake2(5, pros::MotorGearset::green);
 inline pros::Motor intake3(6, pros::MotorGearset::blue);
 inline pros::ADIDigitalOut gate('A');
 inline pros::ADIDigitalOut loaderclear('H');