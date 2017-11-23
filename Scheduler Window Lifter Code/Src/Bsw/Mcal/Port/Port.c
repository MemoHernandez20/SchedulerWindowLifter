/*
 * Port.c
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

#include "General.h"          /* include peripheral declarations */
#include "Port.h"

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

void PORT_init(void) {
	//------------------PORTD
	PCC->PCCn[PCC_PORTD_INDEX] = PCC_PCCn_CGC_MASK; /* Enable clock for PORT C */

	PTD->PDDR |= 1 << LED_BKG; /* Port C7:  Data Direction= output */
	PORTD->PCR[LED_BKG] = 0x00000100; /* Port C7:  MUX = ALT1, GPIO (to PORT C7) */
	PTD->PDDR |= 1 << LED_OVERLOAD; /* Port C7:  Data Direction= output */
	PORTD->PCR[LED_OVERLOAD] = 0x00000100; /* Port C7:  MUX = ALT1, GPIO (to PORT C7) */

	PTD->PSOR |= 1 << LED_OVERLOAD;
	PTD->PSOR |= 1 << LED_BKG;

	//------------------PORTC
	PCC->PCCn[PCC_PORTC_INDEX] = PCC_PCCn_CGC_MASK; /* Enable clock for PORT C */

	PTC->PDDR |= 1 << LED_3P125MS; /* Port C7:  Data Direction= output */
	PORTC->PCR[LED_3P125MS] = 0x00000100; /* Port C7:  MUX = ALT1, GPIO (to PORT C7) */

	PTC->PDDR |= 1 << LED_100MS; /* Port B16:  Data Direction= output */
	PORTC->PCR[LED_100MS] = 0x00000100; /* Port B16:  MUX = ALT1, GPIO (to Port B16) */

	//------------------PORTB
	PCC->PCCn[PCC_PORTB_INDEX] = PCC_PCCn_CGC_MASK; /* Enable clock for PORT B */

	PTB->PDDR |= 1 << LED_6P25MS; /* Port C14:  Data Direction= output */
	PORTB->PCR[LED_6P25MS] = 0x00000100; /* Port C14:  MUX = ALT1, GPIO (to PORT C14) */

	PTB->PDDR |= 1 << LED_12P5MS; /* Port B17:  Data Direction= output */
	PORTB->PCR[LED_12P5MS] = 0x00000100; /* Port B17:  MUX = ALT1, GPIO (to PORT B17) */

	PTB->PDDR |= 1 << LED_25MS; /* Port B14:  Data Direction= output */
	PORTB->PCR[LED_25MS] = 0x00000100; /* Port B14:  MUX = ALT1, GPIO (to Port B14) */

	PTB->PDDR |= 1 << LED_50MS; /* Port B15:  Data Direction= output */
	PORTB->PCR[LED_50MS] = 0x00000100; /* Port B15:  MUX = ALT1, GPIO (to Port B15) */

}

/* Notice: the file ends with a blank new line to avoid compiler warnings */

