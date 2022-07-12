/*
 * dc_control.c
 *
 *  Created on: 12 lip 2022
 *      Author: kkowa
 */
#include "stdio.h"
#include "stdlib.h"
#include "dc_control.h"

struct dc_control
{
	// speeds, dirs etc.
	int linearVelocity;
	int sideVelocity;
	int maxVelocity;
	int relay;
};

void DC_Control(uint16_t data[])
{

}
