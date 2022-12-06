/*
 * global.h
 *
 *  Created on: Nov 30, 2022
 *      Author: 84336
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "button.h"
#include "main.h"
#include "traffic1.h"
#include "traffic2.h"

#define INIT				1
#define AUTO_RED 			2
#define AUTO_YELLOW			3
#define AUTO_GREEN			4

#define MAN_RED 			12
#define MAN_YELLOW			13
#define MAN_GREEN			14

#define TUN_RED 			22
#define TUN_YELLOW			23
#define TUN_GREEN			24

extern int status;

#endif /* INC_GLOBAL_H_ */
