/** @file     Rte_APP_HIGHBEAM.h
  * 
  * @brief    Application header file
  * 
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  * 
  * @note     Generated by ETAS GmbH  RTA-RTE v5.8.4  (R4.0 backend version: v7.8.7 (Build 46772))
  */

#ifndef RTE_APP_HIGHBEAM_H
#define RTE_APP_HIGHBEAM_H

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
#include "Rte_APP_HIGHBEAM_Type.h"

#include "Rte_DataHandleType.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if defined(RTE_RUNNABLEAPI_RE_HIGHBEAM)
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
struct Rte_CDS_APP_HIGHBEAM {
   uint8 _dummy;
};
typedef struct Rte_CDS_APP_HIGHBEAM Rte_CDS_APP_HIGHBEAM;

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
extern CONST(struct Rte_CDS_APP_HIGHBEAM, RTE_CONST) Rte_Inst_APP_HIGHBEAM;
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */


#ifndef RTE_CORE
typedef CONSTP2CONST(struct Rte_CDS_APP_HIGHBEAM, AUTOMATIC, RTE_CONST) Rte_Instance;
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
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_APP_HIGHBEAM_P_HIGHBEAMMODE_TO_ACT_HIGHBEAM_VDP_APP_TO_ACT(VAR(sint32, AUTOMATIC) data);
#define RTE_STOP_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_VAR_32BIT
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(sint32, RTE_DATA) VDP_SENSOR_TO_APP;
#define RTE_STOP_SEC_VAR_32BIT
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_VAR_32BIT
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(sint32, RTE_DATA) VDP_SENSOR_TO_APP_2;
#define RTE_STOP_SEC_VAR_32BIT
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_HIGHBEAM)
/* Inline read optimization; Rte_Read_R_DISTANCE_FROM_SENSOR_DISTANCE_VDP_SENSOR_TO_APP to direct access */
#define Rte_Read_R_DISTANCE_FROM_SENSOR_DISTANCE_VDP_SENSOR_TO_APP( data )  ( ((*(data)) = VDP_SENSOR_TO_APP),((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_HIGHBEAM)
/* Inline read optimization; Rte_Read_R_LIGHTMODE_FROM_SENSOR_LIGHTMODE_VDP_SENSOR_TO_APP to direct access */
#define Rte_Read_R_LIGHTMODE_FROM_SENSOR_LIGHTMODE_VDP_SENSOR_TO_APP( data )  ( ((*(data)) = VDP_SENSOR_TO_APP_2),((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_HIGHBEAM)
#define Rte_Write_P_HIGHBEAMMODE_TO_ACT_HIGHBEAM_VDP_APP_TO_ACT( data ) (Rte_Write_APP_HIGHBEAM_P_HIGHBEAMMODE_TO_ACT_HIGHBEAM_VDP_APP_TO_ACT(data))
#endif

#endif /* RTE_CORE */

/*******************************************************
 ***
 *** RE Prototypes
 ***
 *******************************************************/

#define APP_HIGHBEAM_START_SEC_CODE
#include "APP_HIGHBEAM_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, APP_HIGHBEAM_CODE) RE_HIGHBEAM(void);
#define APP_HIGHBEAM_STOP_SEC_CODE
#include "APP_HIGHBEAM_MemMap.h" /*lint !e537 permit multiple inclusion */

/* Initial values for data element prototypes */

#ifdef __cplusplus
} /* extern C */
#endif /* __cplusplus */

#endif /* RTE_APP_HIGHBEAM_H */