/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: SchM.h  $
 * $Revision: 1 $
 * $Author: Hernandez Ramirez Guillermo, Hernandez Jimenez Manuel $
 * $Date: 25/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \
     Function Prototypes
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
/*Guillermo Hernandez  |          1    | Create the function Prototypes       */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: SchM.h  $
  ============================================================================*/
#ifndef BSW_SERVICES_SCHM_SCHM_H_
#define BSW_SERVICES_SCHM_SCHM_H_

/* Includes */
/*============================================================================*/
#include "Std_Types.h"
#include "SchM_Cfg.h"
#include "SchM_Types.h"


/* Defines */
/*============================================================================*/


/* Constants and types */
/*============================================================================*/

typedef struct{
    uint8_t FlagOverLoad: 1;    //Flag for indicating that an Overload have occured
    uint8_t FlagTaskState:1;    //Flag for indicating that there is a task in Ready/Running state
} Flags;


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/


extern void SchM_Init( const SchM_ConfigType *SchMConfig );
extern void SchM_Start( void );
extern void SchM_Stop( void );
void TurnOnOverloadPin(void);
void TurnOnBackgroundPin(void);
void TurnOffBackgroundPin(void);

#endif /* BSW_SERVICES_SCHM_SCHM_H_ */
 

/* Notice: the file ends with a blank new line to avoid compiler warnings */

