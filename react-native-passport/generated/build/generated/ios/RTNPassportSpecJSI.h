/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateModuleH.js
 */

#pragma once

#include <ReactCommon/TurboModule.h>
#include <react/bridging/Bridging.h>

namespace facebook {
namespace react {


  class JSI_EXPORT NativePassportCxxSpecJSI : public TurboModule {
protected:
  NativePassportCxxSpecJSI(std::shared_ptr<CallInvoker> jsInvoker);

public:
  virtual jsi::String getIdentity(jsi::Runtime &rt) = 0;

};

template <typename T>
class JSI_EXPORT NativePassportCxxSpec : public TurboModule {
public:
  jsi::Value get(jsi::Runtime &rt, const jsi::PropNameID &propName) override {
    return delegate_.get(rt, propName);
  }

protected:
  NativePassportCxxSpec(std::shared_ptr<CallInvoker> jsInvoker)
    : TurboModule("RTNPassport", jsInvoker),
      delegate_(static_cast<T*>(this), jsInvoker) {}

private:
  class Delegate : public NativePassportCxxSpecJSI {
  public:
    Delegate(T *instance, std::shared_ptr<CallInvoker> jsInvoker) :
      NativePassportCxxSpecJSI(std::move(jsInvoker)), instance_(instance) {}

    jsi::String getIdentity(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::getIdentity) == 1,
          "Expected getIdentity(...) to have 1 parameters");

      return bridging::callFromJs<jsi::String>(
          rt, &T::getIdentity, jsInvoker_, instance_);
    }

  private:
    T *instance_;
  };

  Delegate delegate_;
};

} // namespace react
} // namespace facebook
