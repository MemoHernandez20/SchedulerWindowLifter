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
/*----------------------------------------------------------------------------*/
/*Guillermo Hernandez  |           5        | Add Logical Structures on state */
/*                     |                    |                #1               */
/*----------------------------------------------------------------------------*/
/*Guillermo Hernandez  |           6        | Add Logical Structures on state */
/*                     |                    |                #2               */
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
	
			/* Actions state 1 */
		ic_void_Indicator_Up_OFF();
		ic_void_Indicator_Down_OFF();

	/* Evaluations */
		if((bc_T_UBYTE_UP_Button()==0) || (bc_T_UBYTE_DOWN_Button()==0)){ /* Conditions to  1  */
			/* Actions to saty on state 1 */
			state=1;
		}

		if(bc_T_UBYTE_UP_Button()||bc_T_UBYTE_DOWN_Button()){ /* Conditions of transicion between states 1 -> 2 */
			/* Actions to enable transition state 2 */
			state=2;
			ruw_lpit0_counter=0;
		}

		break;
	/*============================================================================================================================*/

	/*****************************************************    S T A T E      2   **************************************************/
	/*============================================================================================================================*/
	case 2:
		
		/* Actions state 2 */
		ic_void_Indicator_Up_OFF();
		ic_void_Indicator_Down_OFF();

		/* Evaluations */

		if(bc_T_UBYTE_UP_Button()||bc_T_UBYTE_DOWN_Button()|| bc_T_UBYTE_ANTIPINCH_Button() ){ /* Conditions to stay on state 2  */
			/* Actions to stay on state 1 */
			state=2;
		}

		if((bc_T_UBYTE_UP_Button()==0)&&(bc_T_UBYTE_DOWN_Button()==0)&&(bc_T_UBYTE_ANTIPINCH_Button()==0)){ /* Conditions of transitions between states 2 -> 1 */
			/* Action to enable transition between state 2 - 1 */
			state=1;
		}


		if((ruw_lpit0_counter>10)&&(bc_T_UBYTE_UP_Button())){ /* Conditions of transitions between states 2 ->3 */
			/* Action to enable transition between state 2 - 3 */
			state=3;
			rs_Flag.bi1_flagUp=1;
		}

		if((ruw_lpit0_counter>10)&&(bc_T_UBYTE_DOWN_Button())){ /* Conditions of transitions between states 2 -> 3 */
			/* Action to enable transition between state 2 - 3 */
			state=3;
			rs_Flag.bi1_flagDown=1;
		}

		if((ruw_lpit0_counter>10)&&(bc_T_UBYTE_ANTIPINCH_Button())){ /* Conditions of transitions between states 2 -> 6 */
			/* Action to enable transition between state 2 - 6 */
			state=6;
			rs_Flag.bi1_FlagAntipinch=1;
			ruw_lpit0_counter=0;
		}

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



