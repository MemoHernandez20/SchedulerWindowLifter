/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: app_buttonscontrol.c $
 * $Revision: 1 $
 * $Author: Hernandez Ramirez Guillermo, Hernandez Jimenez Manuel  $
 * $Date: 25/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    APP file to control the  buttons.

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
/*Guillermo Hernandez|          1         |      Create Functions             */
/*                   |                    |                                   */
/*                   |                    |                                   */
/*		             |	                  |                                   */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "app_buttonscontrol.h"


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
T_UBYTE bc_T_UBYTE_UP_Button(){

	return (buttons_T_UBYTE_get_Button_Value(PORTCH_C,BUTTON_UP ));
}

T_UBYTE bc_T_UBYTE_DOWN_Button(){

	return (buttons_T_UBYTE_get_Button_Value(PORTCH_C,BUTTON_DOWN));

}

T_UBYTE bc_T_UBYTE_ANTIPINCH_Button(){
	return (buttons_T_UBYTE_get_Button_Value(PORTCH_D,BUTTON_ANTIPINCH ));
}



 /* Notice: the file ends with a blank new line to avoid compiler warnings */
