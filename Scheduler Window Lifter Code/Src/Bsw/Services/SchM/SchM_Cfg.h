/*
 * SchM_Cfg.h
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
#ifndef BSW_SERVICES_SCHM_SCHM_CFG_H_
#define BSW_SERVICES_SCHM_SCHM_CFG_H_

/* Includes */
/*============================================================================*/

#include "Std_Types.h"

/* Constants and types */
/*============================================================================*/

/* Exported Variables */
/*============================================================================*/

/* Exported functions prototypes */
/*============================================================================*/
typedef enum {
	SCHM_MASK_3P125MS = (T_UBYTE) 0x03u,
	SCHM_MASK_6P25MS = (T_UBYTE) 0x07u,
	SCHM_MASK_12P5MS = (T_UBYTE) 0x0Fu,
	SCHM_MASK_25MS = (T_UBYTE) 0x1Fu,
	SCHM_MASK_50MS = (T_UBYTE) 0x3Fu,
	SCHM_MASK_100MS = (T_UBYTE) 0x7Fu
} SchM_TaskMaskType;

typedef enum {
	SCHM_TASKID_BKG,
	SCHM_TASKID_3P125MS,
	SCHM_TASKID_6P25MS,
	SCHM_TASKID_12P5MS,
	SCHM_TASKID_25MS,
	SCHM_TASKID_50MS,
	SCHM_TASKID_100MS
} SchM_TaskIDType;

typedef enum {
	SCHM_OFFSET_3P125MS = (T_UBYTE) 0x00u,
	SCHM_OFFSET_6P25MS = (T_UBYTE) 0x01u,
	SCHM_OFFSET_12P5MS = (T_UBYTE) 0x02u,
	SCHM_OFFSET_25MS = (T_UBYTE) 0x03u,
	SCHM_OFFSET_50MS = (T_UBYTE) 0x05u,
	SCHM_OFFSET_100MS = (T_UBYTE) 0x06u
} SchM_TaskOffsetType;

typedef struct {
	SchM_TaskIDType TaskID;
	SchM_TaskMaskType TaskMask;
	SchM_TaskOffsetType TaskOffset;
	tCallbackFunction TaskCallback;
} SchM_TaskConfigType;

typedef struct {
	uint8_t NumOfTasks;
	const SchM_TaskConfigType *TaskConfig;
} SchM_ConfigType;

const SchM_ConfigType SchedulerConfig;

#endif /* BSW_SERVICES_SCHM_SCHM_CFG_H_ */
