/*
 * software_timer.h
 *
 *  Created on: Nov 30, 2022
 *      Author: 84336
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include "main.h"

#define TICK 10

extern int timer1_flag;

void SetTimer1 (int duration);
void TimerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
