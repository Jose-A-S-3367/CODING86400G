#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

 inline pros::Motor intake(15, pros::MotorGearset::green);
 inline pros::Motor intake2(18, pros::MotorGearset::green);
 inline pros::Motor intake3(6, pros::MotorGearset::blue);
 inline pros::ADIDigitalOut descorer('E');
 inline pros::ADIDigitalOut loaderclear('H');