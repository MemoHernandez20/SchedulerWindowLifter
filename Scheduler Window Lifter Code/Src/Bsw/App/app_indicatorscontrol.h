/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: app_indicatorscontrol.h $
 * $Revision: 2 $
 * $Author: Hernandez Ramirez Guillermo, Hernandez Jimenez Manuel $
 * $Date: 26/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \APP file for LED indicator control Prototype Functions.



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
/*  AUTHOR             |    VERSION    |            DESCRIPTION               */
/*----------------------------------------------------------------------------*/
/*Guillermo Hernandez  |       1       |         Add Function Prototypes      */
/*----------------------------------------------------------------------------*/
/*Guillermo Hernandez|	        2         | Add Format to the Files           */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: app_indicatorscontrol.h  $
 ============================================================================*/
#ifndef INDICATORSCONTROL_H
#define INDICATORSCONTROL_H

/* Includes */
/*============================================================================*/
#include "hal_indicators.h"

/* Constants and types */
/*============================================================================*/

/* Exported Variables */
/*============================================================================*/

/* Exported functions prototypes */
/*============================================================================*/
void ic_void_Indicator_Up_ON();
void ic_void_Indicator_Up_OFF();

void ic_void_Indicator_Down_ON();
void ic_void_Indicator_Down_OFF();

#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
