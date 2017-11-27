/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: SchM_Cfg.c $
 * $Revision: 2 $
 * $Author: Hernandez Ramirez Guillermo, Hernandez Jimenez Manuel $
 * $Date: 26/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \
    	Include Struct with the values of the Task 1ms and 2ms
 Values: Mask, Offset, ID.
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
/*  AUTHOR             |      VERSION       |        DESCRIPTION              */
/*----------------------------------------------------------------------------*/
/*Guillermo Hernandez  |          1         |  Create Structs used for the    */
/*                     |                    |    task (1ms and 2ms)           */
/*----------------------------------------------------------------------------*/
/*Guillermo Hernandez  |         2          |    Add Format to the Files      */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: SchM_Cfg.c  $
 ============================================================================*/

/* Includes */
/*============================================================================*/
#include "SchM.h"
#include "SchM_Tasks.h"

/* Defines */
/*============================================================================*/

/* Constants and types */
/*============================================================================*/

const SchM_TaskConfigType TaskDescriptor[] = { { SCHM_TASKID_1MS, SCHM_MASK_1MS,
		SCHM_OFFSET_1MS, SchM_1MS_Task }, { SCHM_TASKID_2MS, SCHM_MASK_2MS,
		SCHM_OFFSET_2MS, SchM_2MS_Task }

};

const SchM_ConfigType SchedulerConfig = { sizeof(TaskDescriptor)
		/ sizeof(SchM_TaskConfigType), &TaskDescriptor[0] };

/* Exported Variables */
/*============================================================================*/

/* Exported functions prototypes */
/*============================================================================*/

/* Notice: the file ends with a blank new line to avoid compiler warnings */

