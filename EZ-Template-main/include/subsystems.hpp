#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

 inline pros::Motor arm(2, pros::MotorGearset::green);
 inline pros::Motor arm2(-13, pros::MotorGearset::green);
 inline pros::Motor claw(11, pros::MotorGearset::green);
 //inline pros::ADIDigitalOut descorer('E');
 //inline pros::ADIDigitalOut loaderclear('H');