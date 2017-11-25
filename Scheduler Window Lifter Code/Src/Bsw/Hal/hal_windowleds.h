/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: windowleds.h $
 * $Revision: 1 $
 * $Author: Hernandez Ramirez Guillermo, Hernandez Jimenez Manuel $
 * $Date: 25/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \HAL file. Function Prototypes.
 *             Defines of the specific Port used as windowLEDS
    
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
/*Guillermo Hernandez  |         1          | Create Function Prototypes and  */
/*                     |                    |  Pins defines                   */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: windowleds.h  $
  ============================================================================*/
#ifndef WINDOWLEDS_H
#define WINDOWLEDS_H

/* Includes */
/*============================================================================*/
#include "Dio.h"


/* Defines */
/*============================================================================*/
#define WINDOW_LED1  1
#define WINDOW_LED2  14
#define WINDOW_LED3  14
#define WINDOW_LED4  15
#define WINDOW_LED5  16
#define WINDOW_LED6  16
#define WINDOW_LED7  15
#define WINDOW_LED8  14
#define WINDOW_LED9  17
#define WINDOW_LED10 7


#define UP_Indicator   0 // Blue Led indicator UP
#define DOWN_Indicator 16 // Green Led indicator DOWN

/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/
void windowleds_void_open_Window(DioPortType DioPort, uint32_t DioPin);
void windowleds_void_close_Window(DioPortType DioPort, uint32_t DioPin);

#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
