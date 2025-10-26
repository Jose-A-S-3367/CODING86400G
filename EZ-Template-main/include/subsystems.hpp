#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

 inline pros::Motor intake(21, pros::MotorGearset::green);
 inline pros::Motor intake2(20, pros::MotorGearset::blue);
 inline pros::Motor intake3(19, pros::MotorGearset::green);
 inline pros::ADIDigitalOut laneswitch('G');
 inline pros::ADIDigitalOut loaderclear('A');