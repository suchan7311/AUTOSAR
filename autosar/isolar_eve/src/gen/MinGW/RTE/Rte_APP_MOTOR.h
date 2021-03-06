/** @file     Rte_APP_MOTOR.h
  * 
  * @brief    Application header file
  * 
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  * 
  * @note     Generated by ETAS GmbH  RTA-RTE v5.8.4  (R4.0 backend version: v7.8.7 (Build 46772))
  */

#ifndef RTE_APP_MOTOR_H
#define RTE_APP_MOTOR_H

#ifndef RTE_CORE
#ifdef RTE_APPLICATION_HEADER_FILE
#error Multiple application header files included.
#endif /* RTE_APPLICATION_HEADER_FILE */
#define RTE_APPLICATION_HEADER_FILE
#endif /* RTE_CORE */

/*******************************************************
 ***
 *** Includes
 ***
 *******************************************************/

#include "Rte.h"
#include "Rte_Intl.h"
#include "Rte_APP_MOTOR_Type.h"

#include "Rte_DataHandleType.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if defined(RTE_RUNNABLEAPI_RE_MOTOR)
   /* Do nothing for this and all elif clauses below (rte_sws_2751) */
#else
   /* None of above defined so define value including all APIs (rte_sws_2751) */
   #define RTE_PRV_ALL_API
#endif

/*******************************************************
 ***
 *** Constants
 ***
 *******************************************************/


/*******************************************************
 ***
 *** Public Types
 ***
 *******************************************************/

/* BEGIN: SWC types (core visible) */
struct Rte_CDS_APP_MOTOR {
   uint8 _dummy;
};
typedef struct Rte_CDS_APP_MOTOR Rte_CDS_APP_MOTOR;

/* END: SWC types (core visible) */

/*******************************************************
 ***
 *** Private Types
 ***
 *******************************************************/

/* BEGIN: SWC types (private) */
/* END: SWC types (private) */

/*******************************************************
 ***
 *** Instance Declarations
 ***
 *******************************************************/

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
extern CONST(struct Rte_CDS_APP_MOTOR, RTE_CONST) Rte_Inst_APP_MOTOR;
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */


#ifndef RTE_CORE
typedef CONSTP2CONST(struct Rte_CDS_APP_MOTOR, AUTOMATIC, RTE_CONST) Rte_Instance;
#endif /* RTE_CORE */

/*******************************************************
 ***
 *** API Mapping macros
 ***
 *******************************************************/

/* API Mapping Macros */
#ifndef RTE_CORE

#define RTE_START_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_APP_MOTOR_P_LEFTRIGHTANGLE_TO_ACT_LEFTRIGHT_MOTOR_VDP_APP_TO_ACT(VAR(sint32, AUTOMATIC) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_APP_MOTOR_P_UPDOWNANGLE_TO_ACT_UPDOWN_MOTOR_VDP_APP_TO_ACT(VAR(sint32, AUTOMATIC) data);
FUNC(sint32, RTE_CODE) Rte_DRead_APP_MOTOR_R_SPEED_FROM_SENSOR_SPEED_VDP_SENSOR_TO_APP(void);
FUNC(sint32, RTE_CODE) Rte_DRead_APP_MOTOR_R_STEERING_FROM_SENSOR_STEERINGANGLE_VDP_SENSOR_TO_APP(void);
#define RTE_STOP_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_MOTOR)
#define Rte_DRead_R_SPEED_FROM_SENSOR_SPEED_VDP_SENSOR_TO_APP() (Rte_DRead_APP_MOTOR_R_SPEED_FROM_SENSOR_SPEED_VDP_SENSOR_TO_APP())
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_MOTOR)
#define Rte_DRead_R_STEERING_FROM_SENSOR_STEERINGANGLE_VDP_SENSOR_TO_APP() (Rte_DRead_APP_MOTOR_R_STEERING_FROM_SENSOR_STEERINGANGLE_VDP_SENSOR_TO_APP())
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_MOTOR)
#define Rte_Write_P_LEFTRIGHTANGLE_TO_ACT_LEFTRIGHT_MOTOR_VDP_APP_TO_ACT( data ) (Rte_Write_APP_MOTOR_P_LEFTRIGHTANGLE_TO_ACT_LEFTRIGHT_MOTOR_VDP_APP_TO_ACT(data))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_MOTOR)
#define Rte_Write_P_UPDOWNANGLE_TO_ACT_UPDOWN_MOTOR_VDP_APP_TO_ACT( data ) (Rte_Write_APP_MOTOR_P_UPDOWNANGLE_TO_ACT_UPDOWN_MOTOR_VDP_APP_TO_ACT(data))
#endif

#endif /* RTE_CORE */

/*******************************************************
 ***
 *** RE Prototypes
 ***
 *******************************************************/

#define APP_MOTOR_START_SEC_CODE
#include "APP_MOTOR_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, APP_MOTOR_CODE) RE_MOTOR(void);
#define APP_MOTOR_STOP_SEC_CODE
#include "APP_MOTOR_MemMap.h" /*lint !e537 permit multiple inclusion */

/* Initial values for data element prototypes */

#ifdef __cplusplus
} /* extern C */
#endif /* __cplusplus */

#endif /* RTE_APP_MOTOR_H */
