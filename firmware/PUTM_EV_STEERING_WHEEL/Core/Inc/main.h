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
#include "stm32g4xx_hal.h"

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
#define RS2_1_Pin GPIO_PIN_10
#define RS2_1_GPIO_Port GPIOG
#define RS2_2_Pin GPIO_PIN_0
#define RS2_2_GPIO_Port GPIOC
#define RS2_3_Pin GPIO_PIN_1
#define RS2_3_GPIO_Port GPIOC
#define RS2_4_Pin GPIO_PIN_2
#define RS2_4_GPIO_Port GPIOC
#define RS2_5_Pin GPIO_PIN_3
#define RS2_5_GPIO_Port GPIOC
#define RS2_6_Pin GPIO_PIN_0
#define RS2_6_GPIO_Port GPIOA
#define RS2_7_Pin GPIO_PIN_1
#define RS2_7_GPIO_Port GPIOA
#define RS2_8_Pin GPIO_PIN_2
#define RS2_8_GPIO_Port GPIOA
#define RS1_1_Pin GPIO_PIN_3
#define RS1_1_GPIO_Port GPIOA
#define RS1_2_Pin GPIO_PIN_4
#define RS1_2_GPIO_Port GPIOA
#define RS1_3_Pin GPIO_PIN_5
#define RS1_3_GPIO_Port GPIOA
#define RS1_4_Pin GPIO_PIN_6
#define RS1_4_GPIO_Port GPIOA
#define RS1_5_Pin GPIO_PIN_7
#define RS1_5_GPIO_Port GPIOA
#define RS1_6_Pin GPIO_PIN_4
#define RS1_6_GPIO_Port GPIOC
#define RS1_7_Pin GPIO_PIN_5
#define RS1_7_GPIO_Port GPIOC
#define RS1_8_Pin GPIO_PIN_0
#define RS1_8_GPIO_Port GPIOB
#define RADIO_BTN_Pin GPIO_PIN_12
#define RADIO_BTN_GPIO_Port GPIOB
#define DOWN_BTN_Pin GPIO_PIN_13
#define DOWN_BTN_GPIO_Port GPIOB
#define UP_BTN_Pin GPIO_PIN_14
#define UP_BTN_GPIO_Port GPIOB
#define BACK_BTN_Pin GPIO_PIN_15
#define BACK_BTN_GPIO_Port GPIOB
#define ENTER_BTN_Pin GPIO_PIN_6
#define ENTER_BTN_GPIO_Port GPIOC
#define DRS_BTN_Pin GPIO_PIN_7
#define DRS_BTN_GPIO_Port GPIOC
#define TSA_BTN_Pin GPIO_PIN_8
#define TSA_BTN_GPIO_Port GPIOC
#define RTD_BTN_Pin GPIO_PIN_9
#define RTD_BTN_GPIO_Port GPIOC
#define LED_CAN_Pin GPIO_PIN_14
#define LED_CAN_GPIO_Port GPIOA
#define LED_ERR_Pin GPIO_PIN_15
#define LED_ERR_GPIO_Port GPIOA
#define LED_OK_Pin GPIO_PIN_10
#define LED_OK_GPIO_Port GPIOC

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
