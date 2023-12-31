/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f4xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define WR0_Pin GPIO_PIN_1
#define WR0_GPIO_Port GPIOG
#define DB7_Pin GPIO_PIN_2
#define DB7_GPIO_Port GPIOG
#define DB6_Pin GPIO_PIN_3
#define DB6_GPIO_Port GPIOG
#define DB5_Pin GPIO_PIN_4
#define DB5_GPIO_Port GPIOG
#define DB4_Pin GPIO_PIN_5
#define DB4_GPIO_Port GPIOG
#define DB3_Pin GPIO_PIN_6
#define DB3_GPIO_Port GPIOG
#define DB2_Pin GPIO_PIN_7
#define DB2_GPIO_Port GPIOG
#define DB1_Pin GPIO_PIN_8
#define DB1_GPIO_Port GPIOG
#define DB0_Pin GPIO_PIN_9
#define DB0_GPIO_Port GPIOG
#define WR1_Pin GPIO_PIN_12
#define WR1_GPIO_Port GPIOG
#define CD_Pin GPIO_PIN_15
#define CD_GPIO_Port GPIOG

/* USER CODE BEGIN Private defines */
#define skeletor_width 64
#define skeletor_height 64
const static unsigned char skeletor_bits[4][512] = {
 {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x0e, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xc6, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xf9,
    0xcf, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xfe, 0xbf, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x20, 0xff, 0x7f, 0x02, 0x00, 0x00, 0x00, 0x00, 0xb0, 0xff,
    0xff, 0x06, 0x00, 0x00, 0x00, 0x00, 0xc8, 0xff, 0xff, 0x09, 0x00, 0x00,
    0x00, 0x00, 0x24, 0xfe, 0x3f, 0x12, 0x00, 0x00, 0x00, 0x00, 0xf6, 0xfd,
    0xdf, 0x37, 0x00, 0x00, 0x00, 0x00, 0xda, 0xfb, 0xef, 0x2d, 0x00, 0x00,
    0x00, 0x00, 0x8d, 0xff, 0xff, 0x58, 0x00, 0x00, 0x00, 0x80, 0x05, 0xfe,
    0x3f, 0xd0, 0x00, 0x00, 0x00, 0x80, 0x05, 0x30, 0x06, 0xd0, 0x00, 0x00,
    0x00, 0x80, 0x05, 0x90, 0x04, 0xd0, 0x00, 0x00, 0x00, 0xc0, 0x05, 0xc8,
    0x09, 0xd0, 0x01, 0x00, 0x00, 0xc0, 0x06, 0xce, 0x39, 0xb0, 0x01, 0x00,
    0x00, 0xe0, 0xfa, 0xff, 0xff, 0xaf, 0x03, 0x00, 0x00, 0xe0, 0xfe, 0xfe,
    0xbf, 0xbf, 0x03, 0x00, 0x00, 0x70, 0x7f, 0xff, 0x7f, 0x7f, 0x07, 0x00,
    0x00, 0x70, 0xbf, 0x5f, 0xfd, 0x7e, 0x07, 0x00, 0x00, 0x70, 0xbf, 0x6f,
    0xfb, 0x7e, 0x07, 0x00, 0x00, 0x78, 0xcf, 0x6b, 0xeb, 0x79, 0x0f, 0x00,
    0x00, 0x78, 0x4f, 0x6d, 0x5b, 0x79, 0x0f, 0x00, 0x00, 0x38, 0x86, 0x0d,
    0xd8, 0x30, 0x0e, 0x00, 0x00, 0x3c, 0x82, 0x00, 0x80, 0x20, 0x1e, 0x00,
    0x00, 0x3c, 0x10, 0x00, 0x00, 0x04, 0x1e, 0x00, 0x00, 0x3c, 0x18, 0x60,
    0x03, 0x0c, 0x1e, 0x00, 0x00, 0x3c, 0x3c, 0x6c, 0x1b, 0x1e, 0x1e, 0x00,
    0x00, 0x3c, 0x3c, 0x5c, 0x1d, 0x1e, 0x1e, 0x00, 0x00, 0x3e, 0x3c, 0xf7,
    0x77, 0x1e, 0x3e, 0x00, 0x00, 0x3e, 0x3c, 0xfd, 0x5f, 0x1e, 0x3e, 0x00,
    0x00, 0x3e, 0x78, 0xfe, 0x3f, 0x0f, 0x3e, 0x00, 0x00, 0x3e, 0xf8, 0xff,
    0xff, 0x0f, 0x3e, 0x00, 0x00, 0x3e, 0xf8, 0xff, 0xff, 0x0f, 0x3e, 0x00,
    0x00, 0x3f, 0xf8, 0xff, 0xff, 0x0f, 0x7e, 0x00, 0x00, 0x3f, 0xf8, 0x1f,
    0xfc, 0x0f, 0x7e, 0x00, 0x00, 0x3f, 0xf8, 0x07, 0xf0, 0x0f, 0x7e, 0x00,
    0x00, 0x3f, 0xf8, 0x01, 0xc0, 0x0f, 0x7e, 0x00, 0x00, 0x3f, 0xf0, 0x00,
    0x80, 0x07, 0x7e, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00,
    0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x3f, 0x00, 0x00,
    0x00, 0x00, 0x7e, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00,
    0x00, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x7f, 0x00, 0x00,
    0x00, 0x00, 0x7f, 0x00, 0x80, 0xff, 0x00, 0x00, 0x00, 0x80, 0xff, 0x00,
    0x80, 0xff, 0x00, 0x00, 0x00, 0x80, 0xff, 0x00, 0x80, 0xff, 0x01, 0x00,
    0x00, 0xc0, 0xff, 0x00, 0xc0, 0xff, 0x03, 0x00, 0x00, 0xe0, 0xff, 0x01,
    0xe0, 0xff, 0x07, 0x00, 0x00, 0xf0, 0xff, 0x03, 0xe0, 0xff, 0x0f, 0x00,
    0x00, 0xf8, 0xff, 0x03, 0xf8, 0xff, 0x1f, 0x00, 0x00, 0xfc, 0xff, 0x0f,
    0xf8, 0xff, 0x3f, 0x00, 0x00, 0xfe, 0xff, 0x0f, 0x00, 0xfc, 0xff, 0x00,
    0x80, 0xff, 0x1f, 0x00, 0x00, 0xe0, 0xff, 0x03, 0xe0, 0xff, 0x03, 0x00,
    0x00, 0xc0, 0xff, 0x0f, 0xf8, 0xff, 0x01, 0x00, 0x00, 0x00, 0xfe, 0x3f,
    0xfe, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0x1f, 0x00, 0x00,
    0x00, 0x00, 0xf0, 0x0f, 0xf8, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
    0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x1f, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  },
  {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x0e, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xc6, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xf9,
    0xcf, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xfe, 0xbf, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x20, 0xff, 0x7f, 0x02, 0x00, 0x00, 0x00, 0x00, 0xb0, 0xff,
    0xff, 0x06, 0x00, 0x00, 0x00, 0x00, 0xc8, 0xff, 0xff, 0x09, 0x00, 0x00,
    0x00, 0x00, 0x24, 0xfe, 0x3f, 0x12, 0x00, 0x00, 0x00, 0x00, 0xf6, 0xfd,
    0xdf, 0x37, 0x00, 0x00, 0x00, 0x00, 0xda, 0xfb, 0xef, 0x2d, 0x00, 0x00,
    0x00, 0x00, 0x8d, 0xff, 0xff, 0x58, 0x00, 0x00, 0x00, 0x80, 0x05, 0xfe,
    0x3f, 0xd0, 0x00, 0x00, 0x00, 0x80, 0x05, 0x30, 0x06, 0xd0, 0x00, 0x00,
    0x00, 0x80, 0x05, 0x90, 0x04, 0xd0, 0x00, 0x00, 0x00, 0xc0, 0x05, 0xc8,
    0x09, 0xd0, 0x01, 0x00, 0x00, 0xc0, 0x06, 0xce, 0x39, 0xb0, 0x01, 0x00,
    0x00, 0xe0, 0xfa, 0xff, 0xff, 0xaf, 0x03, 0x00, 0x00, 0xe0, 0xfe, 0xfe,
    0xbf, 0xbf, 0x03, 0x00, 0x00, 0x70, 0x7f, 0xff, 0x7f, 0x7f, 0x07, 0x00,
    0x00, 0x70, 0xbf, 0x5f, 0xfd, 0x7e, 0x07, 0x00, 0x00, 0x70, 0xbf, 0x6f,
    0xfb, 0x7e, 0x07, 0x00, 0x00, 0x78, 0xcf, 0x6b, 0xeb, 0x79, 0x0f, 0x00,
    0x00, 0x78, 0x4f, 0x6d, 0x5b, 0x79, 0x0f, 0x00, 0x00, 0x38, 0x86, 0x0d,
    0xd8, 0x30, 0x0e, 0x00, 0x00, 0x3c, 0x82, 0x00, 0x80, 0x20, 0x1e, 0x00,
    0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x3c, 0x00, 0x00,
    0x00, 0x00, 0x1e, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00,
    0x00, 0x3c, 0x10, 0x00, 0x00, 0x04, 0x1e, 0x00, 0x00, 0x3e, 0x18, 0x60,
    0x03, 0x0c, 0x3e, 0x00, 0x00, 0x3e, 0x3c, 0x6c, 0x1b, 0x1e, 0x3e, 0x00,
    0x00, 0x3e, 0x3c, 0x5c, 0x1d, 0x1e, 0x3e, 0x00, 0x00, 0x3e, 0x3c, 0xf7,
    0x77, 0x1e, 0x3e, 0x00, 0x00, 0x3e, 0x3c, 0xfd, 0x5f, 0x1e, 0x3e, 0x00,
    0x00, 0x3f, 0x78, 0xfe, 0x3f, 0x0f, 0x7e, 0x00, 0x00, 0x3f, 0xf8, 0xff,
    0xff, 0x0f, 0x7e, 0x00, 0x00, 0x3f, 0xf8, 0xff, 0xff, 0x0f, 0x7e, 0x00,
    0x00, 0x3f, 0xf8, 0xff, 0xff, 0x0f, 0x7e, 0x00, 0x00, 0x3f, 0xf8, 0x1f,
    0xfc, 0x0f, 0x7e, 0x00, 0x00, 0x3f, 0xf8, 0x07, 0xf0, 0x0f, 0x7e, 0x00,
    0x00, 0x3f, 0xf8, 0x01, 0xc0, 0x0f, 0x7e, 0x00, 0x00, 0x3f, 0xf0, 0x00,
    0x80, 0x07, 0x7e, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00,
    0x00, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x7f, 0x00, 0x00,
    0x00, 0x00, 0x7f, 0x00, 0x80, 0xff, 0x00, 0x00, 0x00, 0x80, 0xff, 0x00,
    0x80, 0xff, 0x00, 0x00, 0x00, 0x80, 0xff, 0x00, 0x80, 0xff, 0x01, 0x00,
    0x00, 0xc0, 0xff, 0x00, 0xc0, 0xff, 0x03, 0x00, 0x00, 0xe0, 0xff, 0x01,
    0xe0, 0xff, 0x07, 0x00, 0x00, 0xf0, 0xff, 0x03, 0xe0, 0xff, 0x0f, 0x00,
    0x00, 0xf8, 0xff, 0x03, 0xf8, 0xff, 0x1f, 0x00, 0x00, 0xfc, 0xff, 0x0f,
    0xf8, 0xff, 0x3f, 0x00, 0x00, 0xfe, 0xff, 0x0f, 0x00, 0xfc, 0xff, 0x00,
    0x80, 0xff, 0x1f, 0x00, 0x00, 0xe0, 0xff, 0x03, 0xe0, 0xff, 0x03, 0x00,
    0x00, 0xc0, 0xff, 0x0f, 0xf8, 0xff, 0x01, 0x00, 0x00, 0x00, 0xfe, 0x3f,
    0xfe, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0x1f, 0x00, 0x00,
    0x00, 0x00, 0xf0, 0x0f, 0xf8, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
    0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x1f, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  },
  {
    0x00, 0x00, 0x00, 0x3c, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc3,
    0xe3, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xfc, 0x1f, 0x03, 0x00, 0x00,
    0x00, 0x00, 0x30, 0xff, 0xff, 0x06, 0x00, 0x00, 0x00, 0x00, 0x30, 0xff,
    0xff, 0x06, 0x00, 0x00, 0x00, 0x00, 0xc8, 0xff, 0xff, 0x19, 0x00, 0x00,
    0x00, 0x00, 0xec, 0xff, 0xff, 0x3b, 0x00, 0x00, 0x00, 0x00, 0xf3, 0xff,
    0xff, 0x47, 0x00, 0x00, 0x00, 0x80, 0x08, 0xff, 0xff, 0x88, 0x00, 0x00,
    0x00, 0x80, 0x08, 0xff, 0xff, 0x88, 0x00, 0x00, 0x00, 0xc0, 0xfc, 0xfe,
    0x3f, 0xbf, 0x01, 0x00, 0x00, 0x40, 0xf6, 0xfd, 0xdf, 0x77, 0x01, 0x00,
    0x00, 0xa0, 0xe3, 0xff, 0xff, 0xe3, 0x02, 0x00, 0x00, 0xb0, 0x01, 0xff,
    0x7f, 0x80, 0x06, 0x00, 0x00, 0xb0, 0x01, 0x38, 0x0e, 0x80, 0x06, 0x00,
    0x00, 0x30, 0x01, 0x38, 0x0e, 0x80, 0x06, 0x00, 0x00, 0x30, 0x01, 0x98,
    0x08, 0xc0, 0x06, 0x00, 0x00, 0x38, 0x01, 0xc4, 0x11, 0xc0, 0x0e, 0x00,
    0x00, 0xd8, 0x01, 0xc7, 0x71, 0xc0, 0x0d, 0x00, 0x00, 0x9c, 0xfe, 0xff,
    0xff, 0xbf, 0x1d, 0x00, 0x00, 0x9c, 0x7f, 0xff, 0x7f, 0xff, 0x1d, 0x00,
    0x00, 0xee, 0xbf, 0xff, 0xff, 0xfc, 0x3b, 0x00, 0x00, 0xce, 0xbf, 0xff,
    0xff, 0xfc, 0x3b, 0x00, 0x00, 0xce, 0xdf, 0x5f, 0xfd, 0xf9, 0x3b, 0x00,
    0x00, 0xde, 0xdf, 0x6b, 0xeb, 0xf9, 0x3b, 0x00, 0x00, 0xdf, 0xe3, 0x6d,
    0xdb, 0xe7, 0x79, 0x00, 0x00, 0xdf, 0xa3, 0x6e, 0xbb, 0xe6, 0x79, 0x00,
    0x00, 0x8f, 0xc1, 0x06, 0xb0, 0xc1, 0x70, 0x00, 0x80, 0x8f, 0x40, 0x00,
    0x00, 0x81, 0xf0, 0x00, 0x80, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00,
    0x80, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x80, 0x0f, 0x00, 0x00,
    0x00, 0x00, 0xf8, 0x00, 0x80, 0x0f, 0x08, 0x00, 0x00, 0x18, 0xf8, 0x00,
    0xc0, 0x0f, 0x0c, 0x60, 0x03, 0x38, 0xf8, 0x01, 0xc0, 0x0f, 0x1f, 0x6c,
    0x1b, 0x7c, 0xf8, 0x01, 0x80, 0x0f, 0x1e, 0x5e, 0x3d, 0x7c, 0xf8, 0x01,
    0x80, 0x0f, 0x9e, 0xf7, 0xef, 0x7c, 0xf8, 0x01, 0x80, 0x0f, 0x9e, 0xfe,
    0xbf, 0x3c, 0xf8, 0x00, 0xc0, 0x0f, 0x3c, 0xff, 0x7f, 0x1e, 0xf8, 0x01,
    0xc0, 0x0f, 0xfc, 0xff, 0xff, 0x1f, 0xf8, 0x01, 0xc0, 0x0f, 0xfc, 0xff,
    0xff, 0x1f, 0xf8, 0x01, 0xc0, 0x0f, 0xfc, 0xff, 0xff, 0x1f, 0xf8, 0x01,
    0xc0, 0x1f, 0xfc, 0x1f, 0xfc, 0x1f, 0xf8, 0x01, 0xc0, 0x1f, 0xfc, 0x07,
    0xf0, 0x1f, 0xfc, 0x01, 0xc0, 0x1f, 0xfc, 0x01, 0x80, 0x1f, 0xfc, 0x01,
    0xc0, 0x1f, 0xf8, 0x00, 0x00, 0x0f, 0xfc, 0x01, 0xc0, 0x1f, 0x00, 0x00,
    0x00, 0x00, 0xfc, 0x01, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x01,
    0x80, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x00, 0xc0, 0x7f, 0x00, 0x00,
    0x00, 0x00, 0xff, 0x01, 0xc0, 0x7f, 0x00, 0x00, 0x00, 0x00, 0xff, 0x01,
    0xc0, 0xff, 0x00, 0x00, 0x00, 0x80, 0xff, 0x01, 0xe0, 0xff, 0x01, 0x00,
    0x00, 0xc0, 0xff, 0x03, 0xf0, 0xff, 0x07, 0x00, 0x00, 0xe0, 0xff, 0x07,
    0xf0, 0xff, 0x0f, 0x00, 0x00, 0xf8, 0xff, 0x07, 0xfc, 0xff, 0x3f, 0x00,
    0x00, 0xfe, 0xff, 0x1f, 0x00, 0xfe, 0xff, 0x00, 0x80, 0xff, 0x3f, 0x00,
    0x00, 0xe0, 0xff, 0x03, 0xe0, 0xff, 0x07, 0x00, 0x00, 0xc0, 0xff, 0x0f,
    0xf8, 0xff, 0x01, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x3f, 0x00, 0x00,
    0x00, 0x00, 0xfc, 0x07, 0xf0, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
    0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x1f, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  },
  {
    0x00, 0x00, 0x00, 0x3c, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc3,
    0xe3, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xfc, 0x1f, 0x03, 0x00, 0x00,
    0x00, 0x00, 0x30, 0xff, 0xff, 0x06, 0x00, 0x00, 0x00, 0x00, 0x30, 0xff,
    0xff, 0x06, 0x00, 0x00, 0x00, 0x00, 0xc8, 0xff, 0xff, 0x19, 0x00, 0x00,
    0x00, 0x00, 0xec, 0xff, 0xff, 0x3b, 0x00, 0x00, 0x00, 0x00, 0xf3, 0xff,
    0xff, 0x47, 0x00, 0x00, 0x00, 0x80, 0x08, 0xff, 0xff, 0x88, 0x00, 0x00,
    0x00, 0x80, 0x08, 0xff, 0xff, 0x88, 0x00, 0x00, 0x00, 0xc0, 0xfc, 0xfe,
    0x3f, 0xbf, 0x01, 0x00, 0x00, 0x40, 0xf6, 0xfd, 0xdf, 0x77, 0x01, 0x00,
    0x00, 0xa0, 0xe3, 0xff, 0xff, 0xe3, 0x02, 0x00, 0x00, 0xb0, 0x01, 0xff,
    0x7f, 0x80, 0x06, 0x00, 0x00, 0xb0, 0x01, 0x38, 0x0e, 0x80, 0x06, 0x00,
    0x00, 0x30, 0x01, 0x38, 0x0e, 0x80, 0x06, 0x00, 0x00, 0x30, 0x01, 0x98,
    0x08, 0xc0, 0x06, 0x00, 0x00, 0x38, 0x01, 0xc4, 0x11, 0xc0, 0x0e, 0x00,
    0x00, 0xd8, 0x01, 0xc7, 0x71, 0xc0, 0x0d, 0x00, 0x00, 0x9c, 0xfe, 0xff,
    0xff, 0xbf, 0x1d, 0x00, 0x00, 0x9c, 0x7f, 0xff, 0x7f, 0xff, 0x1d, 0x00,
    0x00, 0xee, 0xbf, 0xff, 0xff, 0xfc, 0x3b, 0x00, 0x00, 0xce, 0xbf, 0xff,
    0xff, 0xfc, 0x3b, 0x00, 0x00, 0xce, 0xdf, 0x5f, 0xfd, 0xf9, 0x3b, 0x00,
    0x00, 0xde, 0xdf, 0x6b, 0xeb, 0xf9, 0x3b, 0x00, 0x00, 0xdf, 0xe3, 0x6d,
    0xdb, 0xe7, 0x79, 0x00, 0x00, 0xdf, 0xa3, 0x6e, 0xbb, 0xe6, 0x79, 0x00,
    0x00, 0x8f, 0xc1, 0x06, 0xb0, 0xc1, 0x70, 0x00, 0x80, 0x8f, 0x40, 0x00,
    0x00, 0x81, 0xf0, 0x00, 0x80, 0x0f, 0x08, 0x00, 0x00, 0x18, 0xf8, 0x00,
    0x80, 0x0f, 0x0c, 0x60, 0x03, 0x38, 0xf8, 0x00, 0x80, 0x0f, 0x1f, 0x6c,
    0x1b, 0x7c, 0xf8, 0x00, 0x80, 0x0f, 0x1e, 0x5e, 0x3d, 0x7c, 0xf8, 0x00,
    0xc0, 0x0f, 0x9e, 0xf7, 0xef, 0x7c, 0xf8, 0x01, 0xc0, 0x0f, 0x9e, 0xfe,
    0xbf, 0x3c, 0xf8, 0x01, 0x80, 0x0f, 0x3c, 0xff, 0x7f, 0x1e, 0xf8, 0x01,
    0x80, 0x0f, 0xfc, 0xff, 0xff, 0x1f, 0xf8, 0x01, 0x80, 0x0f, 0xfc, 0xff,
    0xff, 0x1f, 0xf8, 0x00, 0xc0, 0x0f, 0xfc, 0xff, 0xff, 0x1f, 0xf8, 0x01,
    0xc0, 0x0f, 0xfc, 0x1f, 0xfc, 0x1f, 0xf8, 0x01, 0xc0, 0x0f, 0xfc, 0x07,
    0xf0, 0x1f, 0xf8, 0x01, 0xc0, 0x0f, 0xfc, 0x01, 0x80, 0x1f, 0xf8, 0x01,
    0xc0, 0x1f, 0xf8, 0x00, 0x00, 0x0f, 0xf8, 0x01, 0xc0, 0x1f, 0x00, 0x00,
    0x00, 0x00, 0xfc, 0x01, 0xc0, 0x1f, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x01,
    0xc0, 0x1f, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x01, 0xc0, 0x1f, 0x00, 0x00,
    0x00, 0x00, 0xfc, 0x01, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x01,
    0x80, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x00, 0xc0, 0x7f, 0x00, 0x00,
    0x00, 0x00, 0xff, 0x01, 0xc0, 0x7f, 0x00, 0x00, 0x00, 0x00, 0xff, 0x01,
    0xc0, 0xff, 0x00, 0x00, 0x00, 0x80, 0xff, 0x01, 0xe0, 0xff, 0x01, 0x00,
    0x00, 0xc0, 0xff, 0x03, 0xf0, 0xff, 0x07, 0x00, 0x00, 0xe0, 0xff, 0x07,
    0xf0, 0xff, 0x0f, 0x00, 0x00, 0xf8, 0xff, 0x07, 0xfc, 0xff, 0x3f, 0x00,
    0x00, 0xfe, 0xff, 0x1f, 0x00, 0xfe, 0xff, 0x00, 0x80, 0xff, 0x3f, 0x00,
    0x00, 0xe0, 0xff, 0x03, 0xe0, 0xff, 0x07, 0x00, 0x00, 0xc0, 0xff, 0x0f,
    0xf8, 0xff, 0x01, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x3f, 0x00, 0x00,
    0x00, 0x00, 0xfc, 0x07, 0xf0, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
    0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x1f, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  }
};
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
