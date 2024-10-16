/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: DLCI.c
 *
 * Code generated for Simulink model 'DLCI'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Oct 16 12:02:14 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DLCI.h"
#include "DirectionalLightingFunc.h"

/* External inputs (root inport signals with default storage) */
ExtU_DLCI_T DLCI_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_DLCI_T DLCI_Y;

/* Real-time model */
static RT_MODEL_DLCI_T DLCI_M_;
RT_MODEL_DLCI_T *const DLCI_M = &DLCI_M_;

/* Model step function */
void DLCI_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/DirectionalLightingFunc' */

  /* Outport: '<Root>/leftLight_B' incorporates:
   *  Inport: '<Root>/leftSW_B'
   *  Inport: '<Root>/rightSW_B'
   *  Outport: '<Root>/rightLight_B'
   */
  DLCI_DirectionalLightingFunc(DLCI_U.rightSW_B, DLCI_U.leftSW_B,
    &DLCI_Y.rightLight_B, &DLCI_Y.leftLight_B);

  /* End of Outputs for SubSystem: '<Root>/DirectionalLightingFunc' */
}

/* Model initialize function */
void DLCI_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void DLCI_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
