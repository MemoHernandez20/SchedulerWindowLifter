/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: Port.c $
 * $Revision: 3 $
 * $Author: Hernández Ramirez Guillermo, Hernandez Jimenez Manuel $
 * $Date: 25/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/**
 * Enable and Configure Ports of LEDS and Buttons
    
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
/* Guillermo Hernandez |         1          |   Enable & Config Ports         */
/*                     |                    |        LEDS & Buttons           */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: Port.c  $
  ============================================================================*/


/* Includes */
/*============================================================================*/

#include "General.h"          /* include peripheral declarations */
#include "Port.h"


/* Defines */
/*============================================================================*/



/* Constants and types */
/*============================================================================*/



/* Exported Variables */
/*============================================================================*/


/* Exported functions */
/*============================================================================*/

void PORT_init (void) {


  //------------------PORTB-------------------------------------------------------//
  PCC-> PCCn[PCC_PORTB_INDEX] = PCC_PCCn_CGC_MASK; /* Enable clock for PORT B */



  //initialize LED 6 WINDOW
  PTB->PDDR |= 1<<WINDOW_LED6;
  PORTB->PCR[WINDOW_LED6] = 0x00000100;
  PTB->PSOR |= 1<<WINDOW_LED6;

  //initialize LED 7 WINDOW
  PTB->PDDR |= 1<<WINDOW_LED7;
  PORTB->PCR[WINDOW_LED7] = 0x00000100;
  PTB->PSOR |= 1<<WINDOW_LED7;

  //initialize LED 8 WINDOW
  PTB->PDDR |= 1<<WINDOW_LED8;
  PORTB->PCR[WINDOW_LED8] = 0x00000100;
  PTB->PSOR |= 1<<WINDOW_LED8;

  //initialize LED 9 WINDOW
  PTB->PDDR |= 1<<WINDOW_LED9;
  PORTB->PCR[WINDOW_LED9] = 0x00000100;
  PTB->PSOR |= 1<<WINDOW_LED9;

  //------------------PORTC------------------------------------------------------------//
  PCC-> PCCn[PCC_PORTC_INDEX] = PCC_PCCn_CGC_MASK; /* Enable clock for PORT C */

  //initialize LED 10 WINDOW
  PTC->PDDR |= 1<<WINDOW_LED10;
  PORTC->PCR[WINDOW_LED10] = 0x00000100;
  PTC->PSOR |= 1<<WINDOW_LED10;


  //initialize LED 2 WINDOW
  PTC->PDDR |= 1<<WINDOW_LED2;
  PORTC->PCR[WINDOW_LED2] = 0x00000100;
  PTC->PSOR |= 1<<WINDOW_LED2;


  //Initialize BUTTON_UP
  PTC->PDDR &= ~(1<<BUTTON_UP);
  PORTC->PCR[BUTTON_UP] = 0x00000110;

  //Initialize BUTTON_DOWN
  PTC->PDDR &= ~(1<<BUTTON_DOWN);
  PORTC->PCR[BUTTON_DOWN] = 0x00000110;


  //------------------PORTD----------------------------------------------------------//

    PCC-> PCCn[PCC_PORTD_INDEX] = PCC_PCCn_CGC_MASK; /* Enable clock for PORT D */

    //Initialize BUTTON_ANTIPINCH
      PTD->PDDR &= ~(1<<BUTTON_ANTIPINCH);
      PORTD->PCR[BUTTON_ANTIPINCH] = 0x00000110;

    PTD->PDDR |= 1<<INDICATOR_UP;
    PORTD->PCR[INDICATOR_UP] =  0x00000100;
    PTD->PSOR |= 1<<INDICATOR_UP;

    PTD->PDDR |= 1<<INDICATOR_DOWN;
    PORTD->PCR[INDICATOR_DOWN] =  0x00000100;
    PTD->PSOR |= 1<<INDICATOR_DOWN;

    PTD->PDDR |= 1<<INDICATOR_ANTIPINCH;
    PORTD->PCR[INDICATOR_DOWN] =  0x00000100;
    PTD->PSOR |= 1<<INDICATOR_ANTIPINCH;

    PTD->PDDR |= 1<<TASK_1MS;
    PORTD->PCR[TASK_1MS] =  0x00000100;
    PTD->PSOR |= 1<<TASK_1MS;

    PTD->PDDR |= 1<<TASK_2MS;
    PORTD->PCR[TASK_2MS] =  0x00000100;
    PTD->PSOR |= 1<<TASK_2MS;


    //------------------PORTE-----------------------------------------------------------//
      PCC-> PCCn[PCC_PORTE_INDEX] = PCC_PCCn_CGC_MASK; /* Enable clock for PORT E */

      //initialize LED 1 WINDOW
      PTE->PDDR |= 1<<WINDOW_LED1;
      PORTE->PCR[WINDOW_LED1] = 0x00000100;
      PTE->PSOR |= 1<<WINDOW_LED1;

      //initialize LED 3 WINDOW
      PTE->PDDR |= 1<<WINDOW_LED3;
      PORTE->PCR[WINDOW_LED3] = 0x00000100;
      PTE->PSOR |= 1<<WINDOW_LED3;

      //initialize LED 4 WINDOW
      PTE->PDDR |= 1<<WINDOW_LED4;
      PORTE->PCR[WINDOW_LED4] = 0x00000100;
      PTE->PSOR |= 1<<WINDOW_LED4;

      //initialize LED 5 WINDOW
      PTE->PDDR |= 1<<WINDOW_LED5;
      PORTE->PCR[WINDOW_LED5] = 0x00000100;
      PTE->PSOR |= 1<<WINDOW_LED5;

  }



/* Notice: the file ends with a blank new line to avoid compiler warnings */


