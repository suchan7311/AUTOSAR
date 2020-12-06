/** @file     Rte_ECU_ABS_AFS.h
  * 
  * @brief    Application header file
  * 
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  * 
  * @note     Generated by ETAS GmbH  RTA-RTE v5.8.4  (R4.0 backend version: v7.8.7 (Build 46772))
  */

#ifndef RTE_ECU_ABS_AFS_H
#define RTE_ECU_ABS_AFS_H

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
#include "Rte_ECU_ABS_AFS_Type.h"

#include "Rte_DataHandleType.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if defined(RTE_RUNNABLEAPI_RE_ECU_ACTUATOR)
   /* Do nothing for this and all elif clauses below (rte_sws_2751) */
#elif defined(RTE_RUNNABLEAPI_RE_ECU_DISTANCE)
#elif defined(RTE_RUNNABLEAPI_RE_ECU_LIGHT)
#elif defined(RTE_RUNNABLEAPI_RE_ECU_LIGHTMODE)
#elif defined(RTE_RUNNABLEAPI_RE_ECU_SPEED)
#elif defined(RTE_RUNNABLEAPI_RE_ECU_STEERINGANGLE)
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
struct Rte_CDS_ECU_ABS_AFS {
   uint8 _dummy;
};
typedef struct Rte_CDS_ECU_ABS_AFS Rte_CDS_ECU_ABS_AFS;

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
extern CONST(struct Rte_CDS_ECU_ABS_AFS, RTE_CONST) Rte_Inst_ECU_ABS_AFS;
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */


#ifndef RTE_CORE
typedef CONSTP2CONST(struct Rte_CDS_ECU_ABS_AFS, AUTOMATIC, RTE_CONST) Rte_Instance;
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
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ECU_ABS_AFS_R_HIGHBEAMMODE_FROM_ACT_HIGHBEAM_OPER_ACT_TO_ECU(CONSTP2VAR(sint32, AUTOMATIC, RTE_APPL_DATA) ADP_ACT_TO_ECU);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ECU_ABS_AFS_R_LEFTRIGHTANGLE_FROM_ACT_LEFTRIGHT_MOTOR_OPER_ACT_TO_ECU(CONSTP2VAR(sint32, AUTOMATIC, RTE_APPL_DATA) ADP_ACT_TO_ECU);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ECU_ABS_AFS_R_LOWBEAMMODE_FROM_ACT_LOWBEAM_OPER_ACT_TO_ECU(CONSTP2VAR(sint32, AUTOMATIC, RTE_APPL_DATA) ADP_ACT_TO_ECU);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ECU_ABS_AFS_R_UPDOWNANGLE_FROM_ACT_UPDOWN_MOTOR_OPER_ACT_TO_ECU(CONSTP2VAR(sint32, AUTOMATIC, RTE_APPL_DATA) ADP_ACT_TO_ECU);
#define RTE_STOP_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_ECU_ACTUATOR)
#define Rte_Call_R_HIGHBEAMMODE_FROM_ACT_HIGHBEAM_OPER_ACT_TO_ECU( ADP_ACT_TO_ECU ) (Rte_Call_ECU_ABS_AFS_R_HIGHBEAMMODE_FROM_ACT_HIGHBEAM_OPER_ACT_TO_ECU(ADP_ACT_TO_ECU))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_ECU_ACTUATOR)
#define Rte_Call_R_LEFTRIGHTANGLE_FROM_ACT_LEFTRIGHT_MOTOR_OPER_ACT_TO_ECU( ADP_ACT_TO_ECU ) (Rte_Call_ECU_ABS_AFS_R_LEFTRIGHTANGLE_FROM_ACT_LEFTRIGHT_MOTOR_OPER_ACT_TO_ECU(ADP_ACT_TO_ECU))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_ECU_ACTUATOR)
#define Rte_Call_R_LOWBEAMMODE_FROM_ACT_LOWBEAM_OPER_ACT_TO_ECU( ADP_ACT_TO_ECU ) (Rte_Call_ECU_ABS_AFS_R_LOWBEAMMODE_FROM_ACT_LOWBEAM_OPER_ACT_TO_ECU(ADP_ACT_TO_ECU))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_ECU_ACTUATOR)
#define Rte_Call_R_UPDOWNANGLE_FROM_ACT_UPDOWN_MOTOR_OPER_ACT_TO_ECU( ADP_ACT_TO_ECU ) (Rte_Call_ECU_ABS_AFS_R_UPDOWNANGLE_FROM_ACT_UPDOWN_MOTOR_OPER_ACT_TO_ECU(ADP_ACT_TO_ECU))
#endif

#endif /* RTE_CORE */

/*******************************************************
 ***
 *** RE Prototypes
 ***
 *******************************************************/

#define ECU_ABS_AFS_START_SEC_CODE
#include "ECU_ABS_AFS_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, ECU_ABS_AFS_CODE) RE_ECU_ACTUATOR(void);
FUNC(void, ECU_ABS_AFS_CODE) RE_ECU_DISTANCE(CONSTP2VAR(sint32, AUTOMATIC, RTE_APPL_DATA) ADP_ECU_TO_SENSOR);
FUNC(void, ECU_ABS_AFS_CODE) RE_ECU_LIGHT(CONSTP2VAR(sint32, AUTOMATIC, RTE_APPL_DATA) ADP_ECU_TO_SENSOR);
FUNC(void, ECU_ABS_AFS_CODE) RE_ECU_LIGHTMODE(CONSTP2VAR(sint32, AUTOMATIC, RTE_APPL_DATA) ADP_ECU_TO_SENSOR);
FUNC(void, ECU_ABS_AFS_CODE) RE_ECU_SPEED(CONSTP2VAR(sint32, AUTOMATIC, RTE_APPL_DATA) ADP_ECU_TO_SENSOR);
FUNC(void, ECU_ABS_AFS_CODE) RE_ECU_STEERINGANGLE(CONSTP2VAR(sint32, AUTOMATIC, RTE_APPL_DATA) ADP_ECU_TO_SENSOR);
#define ECU_ABS_AFS_STOP_SEC_CODE
#include "ECU_ABS_AFS_MemMap.h" /*lint !e537 permit multiple inclusion */

/* Initial values for data element prototypes */

#ifdef __cplusplus
} /* extern C */
#endif /* __cplusplus */

#endif /* RTE_ECU_ABS_AFS_H */
