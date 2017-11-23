/*
 * SchM_Types.h
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
 * $Author: Guillermo Hernández $
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
/* Guillermo Hernández |           1        |        Update structures        */
/*                     |                    |                                 */
/* Manuel Hernández     |                    |                                 */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: filename.h  $
 ============================================================================*/
#ifndef BSW_SERVICES_SCHM_SCHM_TYPES_H_
#define BSW_SERVICES_SCHM_SCHM_TYPES_H_

/* Includes */
/*============================================================================*/

#include "Std_Types.h"

/* Constants and types */
/*============================================================================*/

#define LED_BKG      0
#define LED_3P125MS  7
#define LED_6P25MS   17
#define LED_12P5MS   14
#define LED_25MS     15
#define LED_50MS     16
#define LED_100MS    14
#define LED_OVERLOAD 15

/* Exported Variables */
/*============================================================================*/

/* Exported functions prototypes */
/*============================================================================*/
typedef enum {
	SCHM_TASK_STATE_SUSPENDED, SCHM_TASK_STATE_READY, SCHM_TASK_STATE_RUNNING
} SchM_TaskStateType;

typedef enum {
	SCHM_UNINIT, SCHM_INIT, SCHM_IDLE, SCHM_RUNNING, SCHM_OVERLOAD, SCHM_HALTED
} SchM_SchedulerStateType;

typedef struct {
	SchM_TaskStateType SchM_TaskState;
} SchM_TaskControlBlockType;

typedef struct {
	uint16_t OsTickCounter;
	SchM_SchedulerStateType SchM_SchedulerState;
} SchM_SchedulerStatusType;

#endif /* BSW_SERVICES_SCHM_SCHM_TYPES_H_ */
