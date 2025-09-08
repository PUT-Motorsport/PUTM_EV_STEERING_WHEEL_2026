/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    gpio.c
  * @brief   This file provides code for the configuration
  *          of all used GPIO pins.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/*----------------------------------------------------------------------------*/
/* Configure GPIO                                                             */
/*----------------------------------------------------------------------------*/
/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

/** Configure pins as
        * Analog
        * Input
        * Output
        * EVENT_OUT
        * EXTI
*/
void MX_GPIO_Init(void)
{

  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOF_CLK_ENABLE();
  __HAL_RCC_GPIOG_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(RS2_1_GPIO_Port, RS2_1_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, RS2_2_Pin|RS2_3_Pin|RS2_4_Pin|RS2_5_Pin
                          |RS1_6_Pin|RS1_7_Pin|ENTER_BTN_Pin|DRS_BTN_Pin
                          |TSA_BTN_Pin|RTD_BTN_Pin|LED_OK_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, RS2_6_Pin|RS2_7_Pin|RS2_8_Pin|RS1_1_Pin
                          |RS1_2_Pin|RS1_3_Pin|RS1_4_Pin|RS1_5_Pin
                          |LED_CAN_Pin|LED_ERR_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, RS1_8_Pin|RADIO_BTN_Pin|DOWN_BTN_Pin|UP_BTN_Pin
                          |BACK_BTN_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin : RS2_1_Pin */
  GPIO_InitStruct.Pin = RS2_1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(RS2_1_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : RS2_2_Pin RS2_3_Pin RS2_4_Pin RS2_5_Pin
                           RS1_6_Pin RS1_7_Pin ENTER_BTN_Pin DRS_BTN_Pin
                           TSA_BTN_Pin RTD_BTN_Pin LED_OK_Pin */
  GPIO_InitStruct.Pin = RS2_2_Pin|RS2_3_Pin|RS2_4_Pin|RS2_5_Pin
                          |RS1_6_Pin|RS1_7_Pin|ENTER_BTN_Pin|DRS_BTN_Pin
                          |TSA_BTN_Pin|RTD_BTN_Pin|LED_OK_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : RS2_6_Pin RS2_7_Pin RS2_8_Pin RS1_1_Pin
                           RS1_2_Pin RS1_3_Pin RS1_4_Pin RS1_5_Pin
                           LED_CAN_Pin LED_ERR_Pin */
  GPIO_InitStruct.Pin = RS2_6_Pin|RS2_7_Pin|RS2_8_Pin|RS1_1_Pin
                          |RS1_2_Pin|RS1_3_Pin|RS1_4_Pin|RS1_5_Pin
                          |LED_CAN_Pin|LED_ERR_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : RS1_8_Pin RADIO_BTN_Pin DOWN_BTN_Pin UP_BTN_Pin
                           BACK_BTN_Pin */
  GPIO_InitStruct.Pin = RS1_8_Pin|RADIO_BTN_Pin|DOWN_BTN_Pin|UP_BTN_Pin
                          |BACK_BTN_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 2 */

/* USER CODE END 2 */
