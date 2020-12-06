/** @file     Rte_SENSOR_SPEED.h
  * 
  * @brief    Application header file
  * 
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  * 
  * @note     Generated by ETAS GmbH  RTA-RTE v5.8.4  (R4.0 backend version: v7.8.7 (Build 46772))
  */

#ifndef RTE_SENSOR_SPEED_H
#define RTE_SENSOR_SPEED_H

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
#include "Rte_SENSOR_SPEED_Type.h"

#include "Rte_DataHandleType.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if defined(RTE_RUNNABLEAPI_RE_SPEED)
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
struct Rte_CDS_SENSOR_SPEED {
   uint8 _dummy;
};
typedef struct Rte_CDS_SENSOR_SPEED Rte_CDS_SENSOR_SPEED;

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
extern CONST(struct Rte_CDS_SENSOR_SPEED, RTE_CONST) Rte_Inst_SENSOR_SPEED;
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */


#ifndef RTE_CORE
typedef CONSTP2CONST(struct Rte_CDS_SENSOR_SPEED, AUTOMATIC, RTE_CONST) Rte_Instance;
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
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SENSOR_SPEED_R_SPEED_FROM_ECU_ABS_AFS_OPER_ECU_TO_SENSOR(VAR(sint32, AUTOMATIC) ADP_ECU_TO_SENSOR);
FUNC(Std_ReturnType, RTE_CODE) Rte_Result_SENSOR_SPEED_R_SPEED_FROM_ECU_ABS_AFS_OPER_ECU_TO_SENSOR(CONSTP2VAR(sint32, AUTOMATIC, RTE_APPL_DATA) ADP_ECU_TO_SENSOR);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SENSOR_SPEED_P_SPEED_TO_APP_LOWBEAM_VDP_SENSOR_TO_APP(VAR(sint32, AUTOMATIC) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SENSOR_SPEED_P_SPEED_TO_APP_MOTOR_VDP_SENSOR_TO_APP(VAR(sint32, AUTOMATIC) data);
#define RTE_STOP_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SPEED)
#define Rte_Call_R_SPEED_FROM_ECU_ABS_AFS_OPER_ECU_TO_SENSOR( ADP_ECU_TO_SENSOR ) (Rte_Call_SENSOR_SPEED_R_SPEED_FROM_ECU_ABS_AFS_OPER_ECU_TO_SENSOR(ADP_ECU_TO_SENSOR))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SPEED)
#define Rte_Result_R_SPEED_FROM_ECU_ABS_AFS_OPER_ECU_TO_SENSOR( ADP_ECU_TO_SENSOR ) (Rte_Result_SENSOR_SPEED_R_SPEED_FROM_ECU_ABS_AFS_OPER_ECU_TO_SENSOR(ADP_ECU_TO_SENSOR))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SPEED)
#define Rte_Write_P_SPEED_TO_APP_LOWBEAM_VDP_SENSOR_TO_APP( data ) (Rte_Write_SENSOR_SPEED_P_SPEED_TO_APP_LOWBEAM_VDP_SENSOR_TO_APP(data))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SPEED)
#define Rte_Write_P_SPEED_TO_APP_MOTOR_VDP_SENSOR_TO_APP( data ) (Rte_Write_SENSOR_SPEED_P_SPEED_TO_APP_MOTOR_VDP_SENSOR_TO_APP(data))
#endif

#endif /* RTE_CORE */

/*******************************************************
 ***
 *** RE Prototypes
 ***
 *******************************************************/

#define SENSOR_SPEED_START_SEC_CODE
#include "SENSOR_SPEED_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, SENSOR_SPEED_CODE) RE_SPEED(void);
#define SENSOR_SPEED_STOP_SEC_CODE
#include "SENSOR_SPEED_MemMap.h" /*lint !e537 permit multiple inclusion */

/* Initial values for data element prototypes */

#ifdef __cplusplus
} /* extern C */
#endif /* __cplusplus */

#endif /* RTE_SENSOR_SPEED_H */