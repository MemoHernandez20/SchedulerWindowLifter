/*
 * SchM_Cfg.c
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
 * $Source: filename.c $
 * $Revision: v1 $
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
/*  AUTHOR             |       VERSION      |          DESCRIPTION            */
/*----------------------------------------------------------------------------*/
/* Guillermo Hernández |           1        |        Update structures        */
/*                     |                    |                                 */
/* Manuel Hernández     |                    |                                 */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: filename.c  $
 ============================================================================*/

/* Includes */
/*============================================================================*/

#include "SchM.h"
#include "SchM_Tasks.h"

/* Constants and types  */
/*============================================================================*/

/* Variables */
/*============================================================================*/

/* Private functions prototypes */
/*============================================================================*/

/* Inline functions */
/*============================================================================*/

/* Private functions */
/*============================================================================*/

/** Check if action is allowed by overload protection.
 To avoid overheating of the door locking motors and hardware failure
 the software shall limit the number of activations in a short period.
 This function checks if the limitation algorithm allows or not
 a certain activation of the motors.
 \returns TRUE if the activation is allowed, FALSE if not
 */

/* Exported functions */
/*============================================================================*/

const SchM_TaskConfigType TaskDescriptor[] = { { SCHM_TASKID_3P125MS,
		SCHM_MASK_3P125MS, SCHM_OFFSET_3P125MS, SchM_3p125ms_Task }, {
		SCHM_TASKID_6P25MS, SCHM_MASK_6P25MS, SCHM_OFFSET_6P25MS,
		SchM_6p25ms_Task }, { SCHM_TASKID_12P5MS, SCHM_MASK_12P5MS,
		SCHM_OFFSET_12P5MS, SchM_12p5ms_Task }, { SCHM_TASKID_25MS,
		SCHM_MASK_25MS, SCHM_OFFSET_25MS, SchM_25ms_Task }, { SCHM_TASKID_50MS,
		SCHM_MASK_50MS, SCHM_OFFSET_50MS, SchM_50ms_Task }, { SCHM_TASKID_100MS,
		SCHM_MASK_100MS, SCHM_OFFSET_100MS, SchM_100ms_Task }

};

const SchM_ConfigType SchedulerConfig = { sizeof(TaskDescriptor)
		/ sizeof(SchM_TaskConfigType), &TaskDescriptor[0] };

/* Notice: the file ends with a blank new line to avoid compiler warnings */
