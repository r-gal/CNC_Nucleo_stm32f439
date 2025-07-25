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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define AXE_X_TIMER htim1
#define AXE_Y_TIMER htim8
#define AXE_Z_TIMER htim3
#define AXE_A_TIMER htim5
#define MASTER_TIMER htim4
#define configRUNTIME_TIMER htim7
#define SPINDLE_TIMER htim10
#define SPEED_TIMER htim11
#define SYNC_TIMER htim2
#define SPEED_PERIOD 10
#define MASTER_FREQ 84000000
#define AXE_B_TIMER htim12
#define HIWDG_ hiwdg
#define USER_Btn_Pin GPIO_PIN_13
#define USER_Btn_GPIO_Port GPIOC
#define TEST7_Pin GPIO_PIN_3
#define TEST7_GPIO_Port GPIOF
#define MCO_Pin GPIO_PIN_0
#define MCO_GPIO_Port GPIOH
#define TEST3_Pin GPIO_PIN_0
#define TEST3_GPIO_Port GPIOC
#define RMII_MDC_Pin GPIO_PIN_1
#define RMII_MDC_GPIO_Port GPIOC
#define TEST5_Pin GPIO_PIN_3
#define TEST5_GPIO_Port GPIOC
#define AXE_A_PULSE_Pin GPIO_PIN_0
#define AXE_A_PULSE_GPIO_Port GPIOA
#define RMII_REF_CLK_Pin GPIO_PIN_1
#define RMII_REF_CLK_GPIO_Port GPIOA
#define RMII_MDIO_Pin GPIO_PIN_2
#define RMII_MDIO_GPIO_Port GPIOA
#define TEST1_Pin GPIO_PIN_3
#define TEST1_GPIO_Port GPIOA
#define MotorDir_Pin GPIO_PIN_5
#define MotorDir_GPIO_Port GPIOA
#define AXE_Z_PULSE_Pin GPIO_PIN_6
#define AXE_Z_PULSE_GPIO_Port GPIOA
#define RMII_CRS_DV_Pin GPIO_PIN_7
#define RMII_CRS_DV_GPIO_Port GPIOA
#define RMII_RXD0_Pin GPIO_PIN_4
#define RMII_RXD0_GPIO_Port GPIOC
#define RMII_RXD1_Pin GPIO_PIN_5
#define RMII_RXD1_GPIO_Port GPIOC
#define LD1_Pin GPIO_PIN_0
#define LD1_GPIO_Port GPIOB
#define EMERGENCY_Pin GPIO_PIN_12
#define EMERGENCY_GPIO_Port GPIOF
#define limX_Pin GPIO_PIN_14
#define limX_GPIO_Port GPIOF
#define AXE_X_PULSE_Pin GPIO_PIN_9
#define AXE_X_PULSE_GPIO_Port GPIOE
#define dirX_Pin GPIO_PIN_11
#define dirX_GPIO_Port GPIOE
#define dirA_Pin GPIO_PIN_15
#define dirA_GPIO_Port GPIOE
#define limA_Pin GPIO_PIN_10
#define limA_GPIO_Port GPIOB
#define limY_Pin GPIO_PIN_12
#define limY_GPIO_Port GPIOB
#define RMII_TXD1_Pin GPIO_PIN_13
#define RMII_TXD1_GPIO_Port GPIOB
#define AXE_B_PULSE_Pin GPIO_PIN_14
#define AXE_B_PULSE_GPIO_Port GPIOB
#define dirY_Pin GPIO_PIN_15
#define dirY_GPIO_Port GPIOB
#define dirB_Pin GPIO_PIN_11
#define dirB_GPIO_Port GPIOD
#define limB_Pin GPIO_PIN_12
#define limB_GPIO_Port GPIOD
#define dirZ_Pin GPIO_PIN_14
#define dirZ_GPIO_Port GPIOD
#define limZ_Pin GPIO_PIN_15
#define limZ_GPIO_Port GPIOD
#define AXE_Y_PULSE_Pin GPIO_PIN_6
#define AXE_Y_PULSE_GPIO_Port GPIOC
#define MotorSense_Pin GPIO_PIN_7
#define MotorSense_GPIO_Port GPIOC
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define TEST8_Pin GPIO_PIN_4
#define TEST8_GPIO_Port GPIOD
#define TEST6_Pin GPIO_PIN_5
#define TEST6_GPIO_Port GPIOD
#define TEST4_Pin GPIO_PIN_6
#define TEST4_GPIO_Port GPIOD
#define TEST2_Pin GPIO_PIN_7
#define TEST2_GPIO_Port GPIOD
#define RMII_TX_EN_Pin GPIO_PIN_11
#define RMII_TX_EN_GPIO_Port GPIOG
#define RMII_TXD0_Pin GPIO_PIN_13
#define RMII_TXD0_GPIO_Port GPIOG
#define PROBE_Pin GPIO_PIN_4
#define PROBE_GPIO_Port GPIOB
#define LD2_Pin GPIO_PIN_7
#define LD2_GPIO_Port GPIOB
#define SPINDLE_PULSE_Pin GPIO_PIN_8
#define SPINDLE_PULSE_GPIO_Port GPIOB
#define MotorEna_Pin GPIO_PIN_9
#define MotorEna_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
