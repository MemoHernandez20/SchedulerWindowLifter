/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: SchM_Tasks.h $
 * $Revision: 1 $
 * $Author: Hernandez Ramirez Guillermo, Hernandez Jimenez Manuel $
 * $Date: 25/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \
		SchM_Task.h file
		Definition of flags.
		Definition of Task Prototypes.
		
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
/*Guillermo Hernandez  |          1         | Create a bitfield used as flags */
/*                     |                    |                                 */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: SchM_Tasks.h  $
  ============================================================================*/

#ifndef BSW_SERVICES_SCHM_SCHM_TASKS_H_
#define BSW_SERVICES_SCHM_SCHM_TASKS_H_

/* Includes */
/*============================================================================*/
#include "Std_Types.h"
#include "app_buttonscontrol.h"
#include "app_indicatorscontrol.h"
#include "app_windowcontrol.h"
#include "Dio.h"


/* Defines */
/*============================================================================*/

#define NumberOfCycles (uint32_t)2700

#define WINDOW_LED1        1
#define WINDOW_LED2        14
#define WINDOW_LED3        14
#define WINDOW_LED4        15
#define WINDOW_LED5        16
#define WINDOW_LED6        16
#define WINDOW_LED7        15
#define WINDOW_LED8        14
#define WINDOW_LED9        17
#define WINDOW_LED10       7

#define BUTTON_UP          12
#define BUTTON_DOWN        13
#define BUTTON_ANTIPINCH   7

#define INDICATOR_UP       0
#define INDICATOR_DOWN     16

#define TASK_1MS          1
#define TASK_2MS          3
#define TRANSITION_400MS  3


#define _1ms 1
#define _10ms 10
#define _500ms 500
#define _400ms 400
#define _1000ms 1000
#define _3000ms 3000
#define _5000ms 5000


/* Constants and types */
/*============================================================================*/

typedef struct {

	T_UBYTE bi1_flagAutomaticUp:1;
	T_UBYTE bi1_flagAutomaticDown:1;
	T_UBYTE bi1_flagManualUp:1;
	T_UBYTE bi1_flagManualDown:1;
	T_UBYTE bi1_flagUp:1;
	T_UBYTE bi1_flagDown:1;
	T_UBYTE bi1_FlagAntipinch:1;
	T_UBYTE bi1_flagWaiting5Secons:1;

}S_Structflags;


T_UWORD ruw_lpit0_counter; /* LPIT0 chan 0 timeout counter */
T_UBYTE rub_level;
S_Structflags rs_Flag;



/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/

extern void SchM_1MS_Task  ( void );
extern void SchM_2MS_Task ( void );

#endif /* BSW_SERVICES_SCHM_SCHM_TASKS_H_ */
 

/* Notice: the file ends with a blank new line to avoid compiler warnings */

