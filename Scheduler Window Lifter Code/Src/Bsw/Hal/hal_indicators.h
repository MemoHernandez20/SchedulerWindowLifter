/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: indicators.h $
 * $Revision: version #5 $
 * $Author: Hernandez Ramirez Guillermo, Hernandez Jimenez Manuel $
 * $Date: 30/10/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \HAL file functions prototypes.
 *   Defines of specific pins of the ports used as Indicator LEDS
    
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
/*  AUTHOR             |    VERSION     |           DESCRIPTION               */
/*----------------------------------------------------------------------------*/
/*Guillermo Hernandez  |       1        |       Create Function Prototypes    */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: indicators.h  $
  ============================================================================*/
#ifndef INDICATORS_H
#define INDICATORS_H

/* Includes */
/*============================================================================*/
#include "Dio.h"

/* Defines */
/*============================================================================*/
#define UP_Indicator    0
#define DOWN_Indicator  16
#define ANTIPINCH_Indicator 15

/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/
void indicator_void_set_indicator(DioPortType DioPort, uint32_t DioPin);
void indicator_void_clear_indicator(DioPortType DioPort, uint32_t DioPin);
#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
