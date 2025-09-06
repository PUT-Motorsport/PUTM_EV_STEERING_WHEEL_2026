/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32g0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_ERR_Pin GPIO_PIN_9
#define LED_ERR_GPIO_Port GPIOB
#define LED_CAN_Pin GPIO_PIN_14
#define LED_CAN_GPIO_Port GPIOC
#define RTD_BTN_Pin GPIO_PIN_2
#define RTD_BTN_GPIO_Port GPIOA
#define TSA_BTN_Pin GPIO_PIN_3
#define TSA_BTN_GPIO_Port GPIOA
#define CS_BTN_Pin GPIO_PIN_4
#define CS_BTN_GPIO_Port GPIOA
#define ENTER_BTN_Pin GPIO_PIN_5
#define ENTER_BTN_GPIO_Port GPIOA
#define BACK_BTN_Pin GPIO_PIN_6
#define BACK_BTN_GPIO_Port GPIOA
#define UP_BTN_Pin GPIO_PIN_7
#define UP_BTN_GPIO_Port GPIOA
#define DOWN_BTN_Pin GPIO_PIN_0
#define DOWN_BTN_GPIO_Port GPIOB
#define RADIO_BTN_Pin GPIO_PIN_1
#define RADIO_BTN_GPIO_Port GPIOB
#define LED_OK_Pin GPIO_PIN_8
#define LED_OK_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
