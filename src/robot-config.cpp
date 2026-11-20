#include "vex.h"
using namespace vex;
using signature = vision::signature;
using code = vision::code;

brain Brain;

controller Controller;
motor FrontRight = motor(PORT1, ratio6_1, true);
motor FrontLeft = motor(PORT2, ratio6_1, true);
motor BackRight = motor(PORT3, ratio6_1, true);
motor BackLeft = motor(PORT4, ratio6_1, true);

motor_group Left = motor_group(FrontLeft, BackLeft);
motor_group Right = motor_group(FrontRight, BackRight);

void vexcodeInit(void) {}

