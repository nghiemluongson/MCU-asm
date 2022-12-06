/*
 * auto_fsm.c
 *
 *  Created on: Nov 30, 2022
 *      Author: 84336
 */
#include "auto_fsm.h"

void auto_fsm_run() {
	switch (status) {

	case INIT:
		status = AUTO_RED;
		SetTimer1(5000);
		break;

	case AUTO_RED:
		RED_1();
		GREEN_2();
		if (timer1_flag == 1) {
			status = AUTO_GREEN;
			SetTimer1(3000);
		}
		if (Button1_Is_Pressed() == 1) {
			status = MAN_GREEN;
			SetTimer1(3000);
		}
		break;

	case AUTO_YELLOW:
		YELLOW_1();
		RED_2();
		if (timer1_flag == 1) {
			status = AUTO_RED;
			SetTimer1(5000);
		}
		break;

	case AUTO_GREEN:
		GREEN_1();
		YELLOW_2();
		if (timer1_flag == 1) {
			status = AUTO_YELLOW;
			SetTimer1(2000);
		}
		break;

	default:
		break;
	}
}

