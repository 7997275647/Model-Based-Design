/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: DirectionalLightingFunc.c
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

#include "rtwtypes.h"
#include "DirectionalLightingFunc.h"

/* Output and update for atomic system: '<Root>/DirectionalLightingFunc' */
void DLCI_DirectionalLightingFunc(boolean_T rtu_rightSW_B, boolean_T
  rtu_leftSW_B, boolean_T *rty_rightLight_B, boolean_T *rty_leftLight_B)
{
  /* If: '<S1>/If' */
  if (rtu_rightSW_B && (!rtu_leftSW_B)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* SignalConversion generated from: '<S2>/Out1' incorporates:
     *  Constant: '<S2>/Constant'
     */
    *rty_rightLight_B = true;

    /* SignalConversion generated from: '<S2>/Out2' incorporates:
     *  Constant: '<S2>/Constant1'
     */
    *rty_leftLight_B = false;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
  } else if (rtu_leftSW_B && (!rtu_rightSW_B)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* SignalConversion generated from: '<S3>/Out1' incorporates:
     *  Constant: '<S3>/Constant'
     */
    *rty_rightLight_B = false;

    /* SignalConversion generated from: '<S3>/Out2' incorporates:
     *  Constant: '<S3>/Constant1'
     */
    *rty_leftLight_B = true;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* SignalConversion generated from: '<S4>/Out1' incorporates:
     *  Constant: '<S4>/Constant'
     */
    *rty_rightLight_B = false;

    /* SignalConversion generated from: '<S4>/Out2' incorporates:
     *  Constant: '<S4>/Constant1'
     */
    *rty_leftLight_B = false;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem2' */
  }

  /* End of If: '<S1>/If' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
