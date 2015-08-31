// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME libDGserial

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "serial.hh"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *DGserial_Dictionary();
   static void DGserial_TClassManip(TClass*);
   static void *new_DGserial(void *p = 0);
   static void *newArray_DGserial(Long_t size, void *p);
   static void delete_DGserial(void *p);
   static void deleteArray_DGserial(void *p);
   static void destruct_DGserial(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DGserial*)
   {
      ::DGserial *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::DGserial));
      static ::ROOT::TGenericClassInfo 
         instance("DGserial", "serial.hh", 6,
                  typeid(::DGserial), DefineBehavior(ptr, ptr),
                  &DGserial_Dictionary, isa_proxy, 0,
                  sizeof(::DGserial) );
      instance.SetNew(&new_DGserial);
      instance.SetNewArray(&newArray_DGserial);
      instance.SetDelete(&delete_DGserial);
      instance.SetDeleteArray(&deleteArray_DGserial);
      instance.SetDestructor(&destruct_DGserial);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DGserial*)
   {
      return GenerateInitInstanceLocal((::DGserial*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::DGserial*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *DGserial_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::DGserial*)0x0)->GetClass();
      DGserial_TClassManip(theClass);
   return theClass;
   }

   static void DGserial_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_DGserial(void *p) {
      return  p ? new(p) ::DGserial : new ::DGserial;
   }
   static void *newArray_DGserial(Long_t nElements, void *p) {
      return p ? new(p) ::DGserial[nElements] : new ::DGserial[nElements];
   }
   // Wrapper around operator delete
   static void delete_DGserial(void *p) {
      delete ((::DGserial*)p);
   }
   static void deleteArray_DGserial(void *p) {
      delete [] ((::DGserial*)p);
   }
   static void destruct_DGserial(void *p) {
      typedef ::DGserial current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DGserial

namespace {
  void TriggerDictionaryInitialization_libDGserial_Impl() {
    static const char* headers[] = {
"serial.hh",
0
    };
    static const char* includePaths[] = {
"/usr/local//include/root",
"/home/chenlj/Documents/SCPI/Code/test/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$serial.hh")))  DGserial;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "serial.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"DGserial", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libDGserial",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libDGserial_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libDGserial_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libDGserial() {
  TriggerDictionaryInitialization_libDGserial_Impl();
}
