/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: SchM_Tasks.c $
 * $Revision: 1 $
 * $Author: Hernandez Ramirez Guillermo, Hernandez Jimenez Manuel $
 * $Date: 25/11/2017 $
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
/*Guillermo Hernandez  |           1        |   Create the Task Functions:    */
/*                     |                    |    SchM_1MS_Task. SchM_2MS_Task */
/*----------------------------------------------------------------------------*/
/*Guillermo Hernandez  |           2        | Add Toogle Pin Functions inside */
/*                     |                    |        Task for TimeTesting     */
/*----------------------------------------------------------------------------*/
/*Guillermo Hernandez  |           3        | Add Static Variable : State     */
/*                     |                    |   (used on Switch/Case )        */
/*                     |                    |Add Variable: ruw_lpit0_counter  */
/*                     |                    |        used as counter          */
/*----------------------------------------------------------------------------*/
/*Guillermo Hernandez  |           4        | Create the template (Switch-Case*/
/*                     |                    |   to define the state machine   */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: SchM_Tasks.c  $
  ============================================================================*/


/* Includes */
/*============================================================================*/
#include "SchM_Tasks.h"


/* Defines */
/*============================================================================*/



/* Constants and types */
/*============================================================================*/



/* Exported Variables */
/*============================================================================*/


/* Exported functions */
/*============================================================================*/

 void SchM_1MS_Task  ( ){

	 Dio_PortTooglePin(PORTCH_D, TASK_1MS); /*TooglePIN used for Testing the 1ms Task*/

	static unsigned char state = 1;
	ruw_lpit0_counter++;
	
	switch(state){

	/*****************************************************    S T A T E      1   **************************************************/
	/*============================================================================================================================*/
	case 1:
	

		break;
	/*============================================================================================================================*/

	/*****************************************************    S T A T E      2   **************************************************/
	/*============================================================================================================================*/
	case 2:
		

		break;
	/*============================================================================================================================*/


	/*****************************************************    S T A T E      3   **************************************************/
	/*============================================================================================================================*/
	case 3:
		
		
		break;
	/*============================================================================================================================*/

	/*****************************************************    S T A T E      4   **************************************************/
	/*============================================================================================================================*/
	case 4:
		

		break;
	/*============================================================================================================================*/


	/*****************************************************    S T A T E      5   **************************************************/
	/*============================================================================================================================*/
	case 5:
	
		break;
	/*============================================================================================================================*/

	/*****************************************************    S T A T E      6   **************************************************/
	/*============================================================================================================================*/
	case 6:
	    


		break;
	/*============================================================================================================================*/


	/*****************************************************    S T A T E      7   **************************************************/
	/*============================================================================================================================*/
	case 7:
		    


			break;
		/*============================================================================================================================*/






	/*****************************************************      D E F A U L T    **************************************************/
	/*============================================================================================================================*/
	default:
		break;
	/*============================================================================================================================*/


	}

 }




 void SchM_2MS_Task ()
{

	Dio_PortTooglePin(PORTCH_D, TASK_2MS); /*TooglePIN used for Testing the 2ms Task*/

}


/* Notice: the file ends with a blank new line to avoid compiler warnings */



