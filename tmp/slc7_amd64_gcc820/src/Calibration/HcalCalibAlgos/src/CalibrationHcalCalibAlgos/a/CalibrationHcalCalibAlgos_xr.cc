// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME tmpdIslc7_amd64_gcc820dIsrcdICalibrationdIHcalCalibAlgosdIsrcdICalibrationHcalCalibAlgosdIadICalibrationHcalCalibAlgos_xr
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// The generated code does not explicitly qualifies STL entities
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "src/Calibration/HcalCalibAlgos/src/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TCell(void *p = 0);
   static void *newArray_TCell(Long_t size, void *p);
   static void delete_TCell(void *p);
   static void deleteArray_TCell(void *p);
   static void destruct_TCell(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCell*)
   {
      ::TCell *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCell >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TCell", ::TCell::Class_Version(), "Calibration/HcalCalibAlgos/src/TCell.h", 15,
                  typeid(::TCell), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCell::Dictionary, isa_proxy, 4,
                  sizeof(::TCell) );
      instance.SetNew(&new_TCell);
      instance.SetNewArray(&newArray_TCell);
      instance.SetDelete(&delete_TCell);
      instance.SetDeleteArray(&deleteArray_TCell);
      instance.SetDestructor(&destruct_TCell);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCell*)
   {
      return GenerateInitInstanceLocal((::TCell*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TCell*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TCell::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TCell::Class_Name()
{
   return "TCell";
}

//______________________________________________________________________________
const char *TCell::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCell*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TCell::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCell*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCell::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCell*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCell::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCell*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TCell::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCell.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCell::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCell::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCell(void *p) {
      return  p ? new(p) ::TCell : new ::TCell;
   }
   static void *newArray_TCell(Long_t nElements, void *p) {
      return p ? new(p) ::TCell[nElements] : new ::TCell[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCell(void *p) {
      delete ((::TCell*)p);
   }
   static void deleteArray_TCell(void *p) {
      delete [] ((::TCell*)p);
   }
   static void destruct_TCell(void *p) {
      typedef ::TCell current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TCell

namespace {
  void TriggerDictionaryInitialization_CalibrationHcalCalibAlgos_xr_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/afs/cern.ch/work/t/terkulov/CMSSW/CMSSW_11_0_1/src",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc820/cms/cmssw/CMSSW_11_0_1/src",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc820/cms/coral/CORAL_2_3_21-nmpfii12/include/LCG",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc820/external/dd4hep/v01-10x-nmpfii11/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc820/lcg/root/6.18.04-nmpfii/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc820/external/pcre/8.37-pafccj/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc820/external/boost/1.67.0-pafccj/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc820/external/bz2lib/1.0.6-pafccj/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc820/external/clhep/2.4.0.0-nmpfii/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc820/external/gsl/2.2.1-nmpfii2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc820/external/libuuid/2.34/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc820/external/openssl/1.0.2d-pafccj/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc820/external/tbb/2019_U9/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc820/external/xerces-c/3.1.3-pafccj/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc820/external/xz/5.2.4/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc820/external/zlib-x86_64/1.2.11-pafccj/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc820/external/md5/1.0.0-pafccj/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc820/external/OpenBLAS/0.3.5-nmpfii2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc820/external/tinyxml2/6.2.0-nmpfii/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc820/lcg/root/6.18.04-nmpfii/include",
"/afs/cern.ch/work/t/terkulov/CMSSW/CMSSW_11_0_1/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "CalibrationHcalCalibAlgos_xr dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$Calibration/HcalCalibAlgos/src/TCell.h")))  TCell;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "CalibrationHcalCalibAlgos_xr dictionary payload"

#ifndef CMS_DICT_IMPL
  #define CMS_DICT_IMPL 1
#endif
#ifndef _REENTRANT
  #define _REENTRANT 1
#endif
#ifndef GNUSOURCE
  #define GNUSOURCE 1
#endif
#ifndef __STRICT_ANSI__
  #define __STRICT_ANSI__ 1
#endif
#ifndef GNU_GCC
  #define GNU_GCC 1
#endif
#ifndef _GNU_SOURCE
  #define _GNU_SOURCE 1
#endif
#ifndef TBB_USE_GLIBCXX_VERSION
  #define TBB_USE_GLIBCXX_VERSION 80301
#endif
#ifndef BOOST_SPIRIT_THREADSAFE
  #define BOOST_SPIRIT_THREADSAFE 1
#endif
#ifndef PHOENIX_THREADSAFE
  #define PHOENIX_THREADSAFE 1
#endif
#ifndef CMSSW_GIT_HASH
  #define CMSSW_GIT_HASH "CMSSW_11_0_1"
#endif
#ifndef PROJECT_NAME
  #define PROJECT_NAME "CMSSW"
#endif
#ifndef PROJECT_VERSION
  #define PROJECT_VERSION "CMSSW_11_0_1"
#endif
#ifndef CMSSW_REFLEX_DICT
  #define CMSSW_REFLEX_DICT 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "Calibration/HcalCalibAlgos/src/TCell.h"

namespace Calibration_HcalCalibAlgos {
  struct dictionary {};
}  // namespace Calibration_HcalCalibAlgos

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TCell", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("CalibrationHcalCalibAlgos_xr",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_CalibrationHcalCalibAlgos_xr_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_CalibrationHcalCalibAlgos_xr_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_CalibrationHcalCalibAlgos_xr() {
  TriggerDictionaryInitialization_CalibrationHcalCalibAlgos_xr_Impl();
}
