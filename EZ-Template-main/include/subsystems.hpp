#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

 inline pros::Motor intake(21, pros::MotorGearset::green);
 inline pros::Motor intake2(20, pros::MotorGearset::blue);
 inline pros::Motor wallstake(1);
 inline pros::Motor wallstake(1);
 inline pros::ADIDigitalOut LoaderClear('A');