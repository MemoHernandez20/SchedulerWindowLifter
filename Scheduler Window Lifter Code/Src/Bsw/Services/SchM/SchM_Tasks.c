/*
 * SchM_Tasks.c
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
 * Include the structures of the task
 *  SchM_3p125ms_Task
 *  SchM_6p25ms_Task
 *  SchM_12p5ms_Task
 *  SchM_25ms_Task
 *  SchM_50ms_Task
 *  SchM_100ms_Task
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

#include "SchM_Tasks.h"
#include "Dio.h"

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



/* Exported functions */
/*============================================================================*/

void SchM_3p125ms_Task(void) {
	Dio_PortTooglePin(PORTCH_C, LED_3P125MS);
	static int counter;
	for (counter = 0; counter <= NumberOfCycles ; counter++) {
	}

}

void SchM_6p25ms_Task(void) {
	Dio_PortTooglePin(PORTCH_B, LED_6P25MS);
	static int counter;
	for (counter = 0; counter <= NumberOfCycles ; counter++) {
	}

}

extern void SchM_12p5ms_Task(void) {
	Dio_PortTooglePin(PORTCH_B, LED_12P5MS);
	static int counter;
	for (counter = 0; counter <= NumberOfCycles ; counter++) {
	}
}
extern void SchM_25ms_Task(void) {
	Dio_PortTooglePin(PORTCH_B, LED_25MS);
	static int counter;
	for (counter = 0; counter <= NumberOfCycles ; counter++) {
	}
}
extern void SchM_50ms_Task(void) {
	Dio_PortTooglePin(PORTCH_B, LED_50MS);
	static int counter;
	for (counter = 0; counter <= NumberOfCycles ; counter++) {
	}
}
extern void SchM_100ms_Task(void) {
	Dio_PortTooglePin(PORTCH_C, LED_100MS);
	static int counter;
	for (counter = 0; counter <= NumberOfCycles ; counter++) {
	}

}

/* Notice: the file ends with a blank new line to avoid compiler warnings */
