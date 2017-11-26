/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: indicators.c $
 * $Revision: 1 $
 * $Author: Hernandez Ramirez Guillermo, Hernandez Jimenez Manuel  $
 * $Date: 25/10/17 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    HAL file to change the state of the indicators
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
/*    Author           |      Version       |       Description               */
/*----------------------------------------------------------------------------*/
/*Guillermo Hernandez  |         1          |  Functions to change the state  */
/*                     |                    |         of the Indicator LEDS   */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: indicators.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "hal_indicators.h"



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

void indicator_void_set_indicator(DioPortType DioPort, uint32_t DioPin){
	Dio_PortSetPin(DioPort,DioPin);
}

void indicator_void_clear_indicator(DioPortType DioPort, uint32_t DioPin){
	Dio_PortClearPin(DioPort,DioPin);
}


 /* Notice: the file ends with a blank new line to avoid compiler warnings */
