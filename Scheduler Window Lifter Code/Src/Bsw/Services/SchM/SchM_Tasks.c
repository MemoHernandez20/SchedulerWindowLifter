/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: SchM_Tasks.c $
 * $Revision: 11 $
 * $Author: Hernandez Ramirez Guillermo, Hernandez Jimenez Manuel $
 * $Date: 26/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \
		Include the Task Functions SchM_1MS_Task & SchM_2MS_Task
 State Machine Codification
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
/*----------------------------------------------------------------------------*/
/*Guillermo Hernandez  |           7        | Add Logical Structures on state */
/*                     |                    |                #3               */
/*----------------------------------------------------------------------------*/
/*Guillermo Hernandez  |           8        | Add Logical Structures on state */
/*                     |                    |                #4               */
/*----------------------------------------------------------------------------*/
/*Guillermo Hernandez  |           9        | Add Logical Structures on state */
/*                     |                    |                #5 and #6        */
/*----------------------------------------------------------------------------*/
/*Guillermo Hernandez  |          10        | Add Logical Structures on state */
/*                     |                    |       #7 and Default State      */
/*----------------------------------------------------------------------------*/
/*Guillermo Hernandez  |           11       |    Add Format to the Files      */
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

void SchM_1MS_Task() {

	Dio_PortTooglePin(PORTCH_D, TASK_1MS); /*TooglePIN used for Testing the 1ms Task*/

	static unsigned char state = 1;
	ruw_lpit0_counter++;

	switch (state) {

	/*****************************************************    S T A T E      1   **************************************************/
	/*============================================================================================================================*/
	case 1:

		/* Actions state 1 */
		ic_void_Indicator_Up_OFF();
		ic_void_Indicator_Down_OFF();

		/* Evaluations */
		if ((bc_T_UBYTE_UP_Button() == 0) || (bc_T_UBYTE_DOWN_Button() == 0)) { /* Conditions to stay on state  1  */
			/* Actions to saty on state 1 */
			state = 1;
		}

		if (bc_T_UBYTE_UP_Button() || bc_T_UBYTE_DOWN_Button()) { /* Conditions of transicion between states 1 -> 2 */
			/* Actions to enable transition state 2 */
			state = 2;
			ruw_lpit0_counter = 0;
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

		if (bc_T_UBYTE_UP_Button() || bc_T_UBYTE_DOWN_Button()
				|| bc_T_UBYTE_ANTIPINCH_Button()) { /* Conditions to stay on state 2  */
			/* Actions to stay on state 2 */
			state = 2;
		}

		if ((bc_T_UBYTE_UP_Button() == 0) && (bc_T_UBYTE_DOWN_Button() == 0)
				&& (bc_T_UBYTE_ANTIPINCH_Button() == 0)) { /* Conditions of transitions between states 2 -> 1 */
			/* Action to enable transition between state 2 - 1 */
			state = 1;
		}

		if ((ruw_lpit0_counter > 10) && (bc_T_UBYTE_UP_Button())) { /* Conditions of transitions between states 2 ->3 */
			/* Action to enable transition between state 2 - 3 */
			state = 3;
			rs_Flag.bi1_flagUp = 1;
		}

		if ((ruw_lpit0_counter > 10) && (bc_T_UBYTE_DOWN_Button())) { /* Conditions of transitions between states 2 -> 3 */
			/* Action to enable transition between state 2 - 3 */
			state = 3;
			rs_Flag.bi1_flagDown = 1;
		}

		if ((ruw_lpit0_counter > 10) && (bc_T_UBYTE_ANTIPINCH_Button())) { /* Conditions of transitions between states 2 -> 6 */
			/* Action to enable transition between state 2 - 6 */
			state = 6;
			rs_Flag.bi1_FlagAntipinch = 1;
			ruw_lpit0_counter = 0;
		}

		break;
		/*============================================================================================================================*/

		/*****************************************************    S T A T E      3   **************************************************/
		/*============================================================================================================================*/
	case 3:

		/* Actions state 3 */
		if (rs_Flag.bi1_flagDown) {
			ic_void_Indicator_Down_ON();
		}
		if (rs_Flag.bi1_flagUp) {
			ic_void_Indicator_Up_ON();
		}

		/* Evaluations */
		if (rs_Flag.bi1_flagUp) {

			if (bc_T_UBYTE_UP_Button() && (ruw_lpit0_counter >= _500ms)) { /* Conditions of transitions between states 3 -> 5 */
				/* Action to enable transition between state 3 - 5 */
				state = 5;
				rs_Flag.bi1_flagManualUp = 1;
				ruw_lpit0_counter = 0;
			}

			if ((bc_T_UBYTE_UP_Button() == 0) && (ruw_lpit0_counter < _500ms)) { /* Conditions of transitions between states 3 -> 4 */
				/* Action to enable transition between state 3 - 4 */
				state = 4;
				rs_Flag.bi1_flagAutomaticUp = 1;
				ruw_lpit0_counter = 0;
			}

		}

		if (rs_Flag.bi1_flagDown) {

			if (bc_T_UBYTE_DOWN_Button() && (ruw_lpit0_counter >= _500ms)) { /* Conditions of transitions between states 3 -> 5 */
				/* Action to enable transition between state 3 - 5 */
				state = 5;
				rs_Flag.bi1_flagManualDown = 1;
				ruw_lpit0_counter = 0;

			}

			if ((bc_T_UBYTE_DOWN_Button() == 0)
					&& (ruw_lpit0_counter < _500ms)) { /* Conditions of transitions between states 3 -> 4 */
				/* Action to enable transition between state 3 - 4 */
				state = 4;
				rs_Flag.bi1_flagAutomaticDown = 1;
				ruw_lpit0_counter = 0;
			}

		}

		break;
		/*============================================================================================================================*/

		/*****************************************************    S T A T E      4   **************************************************/
		/*============================================================================================================================*/
	case 4:

		/* Actions state 4 */
		if (rs_Flag.bi1_flagAutomaticDown) {
			if (rub_level >= 1) {
				if (ruw_lpit0_counter >= _400ms) {
					wc_void_DOWN_Mode_Routine(&rub_level);
					rub_level--;
					ruw_lpit0_counter = 0;
				}

			}

		}

		if (rs_Flag.bi1_flagAutomaticUp) {
			if (rub_level < 10) {
				if (ruw_lpit0_counter >= _400ms) {
					rub_level++;
					wc_void_UP_Mode_Routine(&rub_level);
					ruw_lpit0_counter = 0;
				}

			}

		}

		/* Conditions */

		if (rs_Flag.bi1_flagAutomaticUp && rub_level == 10) { /* Conditions of transitions between states 4 -> 1 */
			/* Action to enable transition between state 4 - 1 */
			state = 1;
			rs_Flag.bi1_flagAutomaticUp = 0;
			rs_Flag.bi1_flagUp = 0;
		}

		if (rs_Flag.bi1_flagAutomaticDown && rub_level == 0) { /* Conditions of transitions between states 4 -> 1 */
			/* Action to enable transition between state 4 - 1 */
			state = 1;
			rs_Flag.bi1_flagAutomaticDown = 0;
			rs_Flag.bi1_flagDown = 0;
		}

		if ((bc_T_UBYTE_UP_Button()) || (bc_T_UBYTE_DOWN_Button())) { /* Conditions of transitions between states 4 -> 2 */
			/* Action to enable transition between state 4 - 2 */
			state = 2;
			rs_Flag.bi1_flagAutomaticDown = 0;
			rs_Flag.bi1_flagDown = 0;
			rs_Flag.bi1_flagAutomaticUp = 0;
			rs_Flag.bi1_flagUp = 0;
			ruw_lpit0_counter = 0;
		}

		if ((rs_Flag.bi1_flagUp) && bc_T_UBYTE_ANTIPINCH_Button()) { /* Conditions of transitions between states 4 -> 2 */
			/* Action to enable transition between state 4 - 2 */
			state = 2;
			rs_Flag.bi1_flagAutomaticUp = 0;
			rs_Flag.bi1_flagUp = 0;
			ruw_lpit0_counter = 0;
		}

		break;
		/*============================================================================================================================*/

		/*****************************************************    S T A T E      5   **************************************************/
		/*============================================================================================================================*/
	case 5:

		/* Actions state 5 */
		if (rs_Flag.bi1_flagManualDown) {
			if (rub_level >= 1) {
				if (bc_T_UBYTE_DOWN_Button()) {
					if (ruw_lpit0_counter >= _400ms) {
						wc_void_DOWN_Mode_Routine(&rub_level);
						rub_level--;
						ruw_lpit0_counter = 0;
					}

				}

			}

		}

		if (rs_Flag.bi1_flagManualUp) {
			if (rub_level < 10) {
				if (bc_T_UBYTE_UP_Button()) {
					if (ruw_lpit0_counter >= _400ms) {
						rub_level++;
						wc_void_UP_Mode_Routine(&rub_level);
						ruw_lpit0_counter = 0;
					}

				}

			}

		}

		/* Conditions */

		if (rs_Flag.bi1_flagManualUp && rub_level == 10) { /* Conditions of transitions between states 5 -> 1 */
			/* Action to enable transition between state 5 - 1 */
			state = 1;
			rs_Flag.bi1_flagManualUp = 0;
			rs_Flag.bi1_flagUp = 0;
		}

		if (rs_Flag.bi1_flagManualDown && rub_level == 0) { /* Conditions of transitions between states 5 -> 1 */
			/* Action to enable transition between state 5 - 1 */
			state = 1;
			rs_Flag.bi1_flagManualDown = 0;
			rs_Flag.bi1_flagDown = 0;
		}

		if ((bc_T_UBYTE_UP_Button() == 0) && (rs_Flag.bi1_flagManualUp)) { /* Conditions of transitions between states 5 -> 1 */
			/* Action to enable transition between state 5 - 1 */
			state = 1;
			rs_Flag.bi1_flagManualUp = 0;
			rs_Flag.bi1_flagUp = 0;
		}

		if ((bc_T_UBYTE_DOWN_Button() == 0) && (rs_Flag.bi1_flagManualDown)) { /* Conditions of transitions between states 5 -> 1 */
			/* Action to enable transition between state 5 - 1 */
			state = 1;
			rs_Flag.bi1_flagManualDown = 0;
			rs_Flag.bi1_flagDown = 0;

		}

		if ((rs_Flag.bi1_flagUp) && bc_T_UBYTE_ANTIPINCH_Button()) { /* Conditions of transitions between states 5 -> 2 */
			/* Action to enable transition between state 5 - 2 */
			state = 2;
			rs_Flag.bi1_flagManualUp = 0;
			rs_Flag.bi1_flagUp = 0;
			ruw_lpit0_counter = 0;
		}

		break;
		/*============================================================================================================================*/

		/*****************************************************    S T A T E      6   **************************************************/
		/*============================================================================================================================*/
	case 6:

		/* Actions state 6 */
		if (rs_Flag.bi1_FlagAntipinch) {
			if (rub_level >= 1) {
				if (ruw_lpit0_counter >= _400ms) {
					wc_void_DOWN_Mode_Routine(&rub_level);
					rub_level--;
					ruw_lpit0_counter = 0;
				}

			}

		}

		/* Conditions */
		if (rs_Flag.bi1_FlagAntipinch) { /* Condition to stay on state 6  */
			/* Actions to stay on state 6 */
			state = 6;
		}

		if ((rs_Flag.bi1_FlagAntipinch) && rub_level == 0) { /* Conditions of transitions between states 6 -> 7 */
			/* Action to enable transition between state 6 - 7 */
			state = 7;
			rs_Flag.bi1_FlagAntipinch = 0;
			rs_Flag.bi1_flagWaiting5Secons = 1;
			ruw_lpit0_counter = 0;
		}

		break;
		/*============================================================================================================================*/

		/*****************************************************    S T A T E      7   **************************************************/
		/*============================================================================================================================*/
	case 7:

		/* Actions state 7 */

		/* Conditions */
		if ((rs_Flag.bi1_flagWaiting5Secons) && ruw_lpit0_counter <= _5000ms) { /* Condition to stay on state 7  */
			/* Action to enable transition between state 7 */
			state = 7;
		}

		if (ruw_lpit0_counter > _5000ms) { /* Conditions of transitions between states 7 -> 1 */
			/* Action to enable transition between state 7 - 1 */
			state = 1;
			rs_Flag.bi1_flagWaiting5Secons = 0;
		}

		break;
		/*============================================================================================================================*/

		/*****************************************************      D E F A U L T    **************************************************/
		/*============================================================================================================================*/
	default:
		break;
		/*============================================================================================================================*/

	}

}

void SchM_2MS_Task() {

	Dio_PortTooglePin(PORTCH_D, TASK_2MS); /*TooglePIN used for Testing the 2ms Task*/

}

/* Notice: the file ends with a blank new line to avoid compiler warnings */



