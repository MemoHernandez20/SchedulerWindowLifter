/*
 * SchM_Tasks.h
 *
 *  Created on: 15/11/2017
 *      Author: uid87753
 */

/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: filename.x $
 * $Revision: 1 $
 * $Author: Guillermo Hern�ndez $
 * $Date: 11/17/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/**
 */
/*============================================================================*/
/* COPYRIGHT (C) CONTINENTAL AUTOMOTIVE 2014                                  */
/* AUTOMOTIVE GROUP, Interior Division, Body and Security                     */
/* ALL RIGHTS RESERVED                                                        */
/*                                                                            */
/* The reproduction, transmission, or use of this document or its content is  */
/* not permitted without express written authority. Offenders will be liable  */
/* for damages.                                                               */
/* All rights, including rights created by patent grant or registration of a  */
/* utility model or design, are reserved.                                     */
/*                                                                            */
/*============================================================================*/
/*============================================================================*/
/*                    REUSE HISTORY - taken over from                         */
/*============================================================================*/
/*       AUTHOR        |      VERSION       |          DESCRIPTION            */
/*----------------------------------------------------------------------------*/
/* Guillermo Hern�ndez |           1        |        Update structures        */
/*                     |                    |                                 */
/* Manuel Hern�ndez     |                    |                                 */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: filename.h  $
 ============================================================================*/
#ifndef BSW_SERVICES_SCHM_SCHM_TASKS_H_
#define BSW_SERVICES_SCHM_SCHM_TASKS_H_

/* Includes */
/*============================================================================*/

#include "Std_Types.h"

/* Constants and types */
/*============================================================================*/
#define NumberOfCycles (uint32_t)0

/* Exported Variables */
/*============================================================================*/

/* Exported functions prototypes */
/*============================================================================*/
#define LED_BKG      0
#define LED_3P125MS  7
#define LED_6P25MS   17
#define LED_12P5MS   14
#define LED_25MS     15
#define LED_50MS     16
#define LED_100MS    14
#define LED_OVERLOAD 15

extern void SchM_3p125ms_Task(void);
extern void SchM_6p25ms_Task(void);
extern void SchM_12p5ms_Task(void);
extern void SchM_25ms_Task(void);
extern void SchM_50ms_Task(void);
extern void SchM_100ms_Task(void);

#endif /* BSW_SERVICES_SCHM_SCHM_TASKS_H_ */
