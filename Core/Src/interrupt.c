//
// Created by kentl on 2024/10/2.
//
#include "main.h"
#include "tim.h"

extern uint8_t flag;

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
    if (htim->Instance == TIM1 && flag==1)
        HAL_GPIO_TogglePin(LED_G_GPIO_Port, LED_G_Pin);
    if (htim->Instance == TIM2 && flag==0)
        HAL_GPIO_TogglePin(LED_G_GPIO_Port, LED_G_Pin);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
    if (GPIO_Pin == KEY_Pin)
    {
        if (flag==1) flag=0;
        else flag=1;
    }
}

