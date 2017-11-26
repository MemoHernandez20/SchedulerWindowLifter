/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: app_indicatorscontrol.c $
 * $Revision: 2 $
 * $Author: Hernandez Ramirez Guillermo, Hernandez Jimenez Manuel  $
 * $Date: 26/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
 APP file to control the status of the indicator LEDS

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
/*Guillermo Hernandez|          1         |   Create Function to set the      */
/*                   |                    |     state of the Indicator LEDS   */
/*----------------------------------------------------------------------------*/
/*Guillermo Hernandez|	        2         | Add Format to the Files           */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: app_indicatorscontrol.c  $
 ============================================================================*/

/* Includes */
/*============================================================================*/
#include "app_indicatorscontrol.h"

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
void ic_void_Indicator_Up_ON() {
	indicator_void_clear_indicator(PORTCH_D, UP_Indicator);
}
void ic_void_Indicator_Up_OFF() {
	indicator_void_set_indicator(PORTCH_D, UP_Indicator);
}

void ic_void_Indicator_Down_ON() {
	indicator_void_clear_indicator(PORTCH_D, DOWN_Indicator);
}
void ic_void_Indicator_Down_OFF() {
	indicator_void_set_indicator(PORTCH_D, DOWN_Indicator);
}

/* Notice: the file ends with a blank new line to avoid compiler warnings */
