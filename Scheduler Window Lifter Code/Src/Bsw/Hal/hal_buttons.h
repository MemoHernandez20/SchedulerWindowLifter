/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: buttons.h $
 * $Revision: 2 $
 * $Author: Hernandez Ramirez Guillermo, Hernandez Jimenez Manuel  $
 * $Date: 26/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \HAL file for button and pin definition.

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
/*  AUTHOR             |  VERSION    |               DESCRIPTION              */
/*----------------------------------------------------------------------------*/
/*Guillermo HErnandez  |      1      |           Create function to get       */
/*                     |             |          the value of the Buttons      */
/*----------------------------------------------------------------------------*/
/*Guillermo Hernandez  |        2    |      Add Format to the Files           */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: buttons.h  $
 ============================================================================*/
#ifndef BUTTONS_H
#define BUTTONS_H

/* Includes */
/*============================================================================*/
#include "Dio.h"

/* Defines */
/*============================================================================*/
#define BUTTON_UP         12
#define BUTTON_DOWN       13
#define BUTTON_ANTIPINCH  7

/* Constants and types */
/*============================================================================*/

/* Exported Variables */
/*============================================================================*/

/* Exported functions prototypes */
/*============================================================================*/

T_UBYTE buttons_T_UBYTE_get_Button_Value(DioPortType DioPort, uint32_t DioPin);

#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
