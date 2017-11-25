/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: app_windowcontrol.c $
 * $Revision: 1 $
 * $Author: Hernandez Ramirez Guillermo, Hernandez Jimenez Manuel  $
 * $Date: 25/11/17 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
   APP file to control the windowLEDS.


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
/*    Author         |      Version       |       Description                 */
/*----------------------------------------------------------------------------*/
/*Guillermo Hernandez|          1         | Create the functino to emulate the*/
/*                   |                    |       window Behavior (up & down) */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: app_windowcontrol.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "app_windowcontrol.h"


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
void wc_void_DOWN_Mode_Routine (T_UBYTE * window_level){


	switch ((*window_level)){

		case 1: windowleds_void_open_Window(PORTCH_E,WINDOW_LED1); /* set Output on port C7 (on) */   break;
		case 2: windowleds_void_open_Window(PORTCH_C,WINDOW_LED2); /* set Output on port B17 (on) */   break;
		case 3: windowleds_void_open_Window(PORTCH_E,WINDOW_LED3); /* set Output on port B14 (on) */   break;
		case 4: windowleds_void_open_Window(PORTCH_E,WINDOW_LED4); /* set Output on port B15 (on) */   break;
		case 5: windowleds_void_open_Window(PORTCH_E,WINDOW_LED5); /* set Output on port B16 (on) */   break;
		case 6: windowleds_void_open_Window(PORTCH_B,WINDOW_LED6); /* set Output on port C3 (on) */   break;
		case 7: windowleds_void_open_Window(PORTCH_B,WINDOW_LED7); /* set Output on port E16 (on) */  break;
		case 8: windowleds_void_open_Window(PORTCH_B,WINDOW_LED8); /* set Output on port E15 (on) */  break;
		case 9: windowleds_void_open_Window(PORTCH_B,WINDOW_LED9); /* set Output on port E14 (on) */  break;
		case 10: windowleds_void_open_Window(PORTCH_C,WINDOW_LED10); /* set Output on port E13 (on) */  break;
		default:
				if(*window_level>10){
					*window_level=10;
				}
				if(*window_level<1){
					*window_level=1;
				}
		break;
	}
}


void wc_void_UP_Mode_Routine (T_UBYTE * window_level){

	switch ((*window_level)){

		case 1: windowleds_void_close_Window(PORTCH_E,WINDOW_LED1); /* clear Output on port C7 (off) */   break;
		case 2: windowleds_void_close_Window(PORTCH_C,WINDOW_LED2); /* clear Output on port B17 (off) */   break;
		case 3: windowleds_void_close_Window(PORTCH_E,WINDOW_LED3); /* clear Output on port B14 (off) */   break;
		case 4: windowleds_void_close_Window(PORTCH_E,WINDOW_LED4); /* clear Output on port B15 (off) */   break;
		case 5: windowleds_void_close_Window(PORTCH_E,WINDOW_LED5); /* clear Output on port B16 (off) */   break;
		case 6: windowleds_void_close_Window(PORTCH_B,WINDOW_LED6); /* clear Output on port C3 (off) */   break;
		case 7: windowleds_void_close_Window(PORTCH_B,WINDOW_LED7); /* clear Output on port E16 (off) */  break;
		case 8: windowleds_void_close_Window(PORTCH_B,WINDOW_LED8); /* clear Output on port E15 (off) */  break;
		case 9: windowleds_void_close_Window(PORTCH_B,WINDOW_LED9); /* clear Output on port E14 (off) */  break;
		case 10: windowleds_void_close_Window(PORTCH_C,WINDOW_LED10); /*clear Output on portE13 (off) */  break;
		default:
			if(*window_level>10){
				*window_level=10;
			}
			if(*window_level<1){
				*window_level=1;
			}
		break;
	}
}



 /* Notice: the file ends with a blank new line to avoid compiler warnings */
