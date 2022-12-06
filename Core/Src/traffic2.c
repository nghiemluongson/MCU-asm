/*
 * traffic2.c
 *
 *  Created on: Nov 30, 2022
 *      Author: 84336
 */
#include "traffic2.h"

void RED_2() {
	HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, RESET);
	HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, SET);
}

void YELLOW_2() {
	HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, RESET);
	HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, RESET);
}

void GREEN_2() {
	HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, SET);
	HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, RESET);
}

void Traffic2_Off() {
	HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, SET);
	HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, SET);
}

