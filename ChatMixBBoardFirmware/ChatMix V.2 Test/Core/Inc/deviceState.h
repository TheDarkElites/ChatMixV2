/*
 * deviceState.h
 *
 *  Created on: Sep 5, 2026
 *      Author: George
 */

#ifndef SRC_DEVICESTATE_H_
#define SRC_DEVICESTATE_H_

#include <stdbool.h>

//Is our device currently muted
volatile bool isMuted = false;
//Is our device mode or alternate
volatile bool isModeAlternate = false;
//Current potentiometer reading of device
volatile uint8_t potReading;

#endif /* SRC_DEVICESTATE_H_ */
