/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateModuleH.js
 */

#include "RTNPassportSpecJSI.h"

namespace facebook {
namespace react {

static jsi::Value __hostFunction_NativePassportCxxSpecJSI_getIdentity(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativePassportCxxSpecJSI *>(&turboModule)->getIdentity(rt);
}

NativePassportCxxSpecJSI::NativePassportCxxSpecJSI(std::shared_ptr<CallInvoker> jsInvoker)
  : TurboModule("RTNPassport", jsInvoker) {
  methodMap_["getIdentity"] = MethodMetadata {0, __hostFunction_NativePassportCxxSpecJSI_getIdentity};
}


} // namespace react
} // namespace facebook
