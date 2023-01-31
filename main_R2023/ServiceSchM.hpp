#pragma once
/******************************************************************************/
/* File   : ServiceSchM.hpp                                                   */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infServiceSchM_ServiceNvM_Types.hpp"
#include "CfgServiceSchM.hpp"
#include "ServiceSchM_core.hpp"
#include "infServiceSchM_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceSchM:
      INTERFACES_EXPORTED_SERVICESCHM
   ,  public abstract_module
   ,  public class_ServiceSchM_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstModule_TypeAbstract* lptrNvMBlocksRom = (ConstModule_TypeAbstract*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICESCHM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICESCHM_CONST,       SERVICESCHM_APPL_CONST) lptrNvMBlocksRomModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICESCHM_CONFIG_DATA, SERVICESCHM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICESCHM_CODE) DeInitFunction   (void);
      FUNC(void, SERVICESCHM_CODE) MainFunction     (void);
      SERVICESCHM_CORE_FUNCTIONALITIES

      FUNC(void, SERVICESCHM_CODE) Start            (void);
      FUNC(void, SERVICESCHM_CODE) StartTiming      (void);
      FUNC(void, SERVICESCHM_CODE) ServiceSchM_1ms  (void);
      FUNC(void, SERVICESCHM_CODE) ServiceSchM_25ms (void);
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_ServiceSchM, SERVICESCHM_VAR) ServiceSchM;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

