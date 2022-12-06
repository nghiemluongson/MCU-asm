/*
 * man_fsm.c
 *
 *  Created on: Dec 5, 2022
 *      Author: 84336
 */
#include "man_fsm.h"

void man_fsm_run() {
	switch (status) {

	case MAN_RED:
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

	case MAN_YELLOW:
		YELLOW_1();
		RED_2();
		if (timer1_flag == 1) {
			status = AUTO_RED;
			SetTimer1(5000);
		}
		if (Button1_Is_Pressed() == 1) {
			status = MAN_RED;
			SetTimer1(5000);
		}
		break;

	case MAN_GREEN:
		GREEN_1();
		YELLOW_2();
		if (timer1_flag == 1) {
			status = AUTO_YELLOW;
			SetTimer1(2000);
		}
		if (Button1_Is_Pressed() == 1) {
			status = MAN_YELLOW;
			SetTimer1(2000);
		}
		break;

	default:
		break;
	}
}

