//
// Created by kentl on 2024/10/2.
//
#include "main.h"
#include "tim.h"
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim){
    HAL_GPIO_TogglePin(LED_G_GPIO_Port, LED_G_Pin);
}