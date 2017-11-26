/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: windowleds.c $
 * $Revision: 2 $
 * $Author: Hernandez Ramirez Guillermo, Hernandez Jimenez Manuel  $
 * $Date: 26/11/17 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
 HAL file to control the state of the windowLEDS
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
/* Guillermo Hernandez |          1         |    Create functions to          */
/*                     |                    |control the state of the windowLED*/
/*----------------------------------------------------------------------------*/
/*Guillermo Hernandez  |         2          |    Add Format to the Files      */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: windowleds.c  $
 ============================================================================*/

/* Includes */
/*============================================================================*/
#include "hal_windowleds.h"

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

void windowleds_void_open_Window(DioPortType DioPort, uint32_t DioPin) {
	Dio_PortSetPin(DioPort, DioPin);
}

void windowleds_void_close_Window(DioPortType DioPort, uint32_t DioPin) {
	Dio_PortClearPin(DioPort, DioPin);
}

/* Notice: the file ends with a blank new line to avoid compiler warnings */
