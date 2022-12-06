/*
 * traffic1.c
 *
 *  Created on: Nov 30, 2022
 *      Author: 84336
 */
#include "traffic1.h"

void RED_1() {
	HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, SET);
	HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
}

void YELLOW_1() {
	HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
	HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
}

void GREEN_1() {
	HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
	HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, SET);
}

void Traffic1_Off() {
	HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, SET);
	HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, SET);
}
