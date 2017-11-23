/*
 * Dio.h
 *
 *  Created on: 15/11/2017
 *      Author: uid87753
 */

/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: filename.x $
 * $Revision: 1 $
 * $Author: Guillermo Hernández $
 * $Date: 11/17/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/**
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
/*       AUTHOR        |      VERSION       |          DESCRIPTION            */
/*----------------------------------------------------------------------------*/
/* Guillermo Hernández |           1        |        Update structures        */
/*                     |                    |                                 */
/* Manuel Hernández     |                    |                                 */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: filename.h  $
 ============================================================================*/
#ifndef BSW_MCAL_DIO_DIO_H_
#define BSW_MCAL_DIO_DIO_H_

/* Includes */
/*============================================================================*/

#include "Std_Types.h"

/* Constants and types */
/*============================================================================*/

/* Exported Variables */
/*============================================================================*/

/* Exported functions prototypes */
/*============================================================================*/
typedef enum {
	PORTCH_A, PORTCH_B, PORTCH_C, PORTCH_D, PORTCH_E
} DioPortType;

void Dio_PortSetPin(DioPortType DioPort, uint32_t DioPin);

void Dio_PortClearPin(DioPortType DioPort, uint32_t DioPin);

void Dio_PortTooglePin(DioPortType DioPort, uint32_t DioPin);

#endif /* BSW_MCAL_DIO_DIO_H_ */
