/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: Dio.c $
 * $Revision: 3 $
 * $Author: Hernandez Ramirez Guillermo, Hernandez Jimenez Manuel $
 * $Date: 17/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \
    
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
/*       |                  |                                 */
/*         |                  |                                 */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: Dio.c  $
  ============================================================================*/


/* Includes */
/*============================================================================*/

#include "General.h"
#include "Dio.h"

/* Defines */
/*============================================================================*/



/* Constants and types */
/*============================================================================*/

GPIO_Type *Port[]= {PTA, PTB, PTC, PTD, PTE};


/* Exported Variables */
/*============================================================================*/


/* Exported functions */
/*============================================================================*/


void Dio_PortSetPin(DioPortType DioPort, uint32_t DioPin)
{
	Port[DioPort]->PSOR |= (1<<DioPin);
}

void Dio_PortClearPin(DioPortType DioPort, uint32_t DioPin)
{
	Port[DioPort]->PCOR |= (1<<DioPin);
}

void Dio_PortTooglePin(DioPortType DioPort, uint32_t DioPin)
{
	Port[DioPort]->PTOR |= (1<<DioPin);
}

uint8_t Dio_PortGetPin(DioPortType DioPort, uint32_t DioPin)
{
	if(Port[DioPort]->PDIR & (1<<DioPin))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
  

/* Notice: the file ends with a blank new line to avoid compiler warnings */

