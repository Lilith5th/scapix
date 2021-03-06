// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_LANG_INVOKE_SERIALIZEDLAMBDA_H
#define SCAPIX_JAVA_LANG_INVOKE_SERIALIZEDLAMBDA_H

namespace scapix::java_api {

namespace java::lang { class Class; }
namespace java::lang { class String; }

namespace java::lang::invoke {

class SerializedLambda : public object_base<SCAPIX_META_STRING("java/lang/invoke/SerializedLambda"),
	java::lang::Object,
	java::io::Serializable>
{
public:

	static ref<SerializedLambda> new_object(ref<java::lang::Class> capturingClass, ref<java::lang::String> functionalInterfaceClass, ref<java::lang::String> functionalInterfaceMethodName, ref<java::lang::String> functionalInterfaceMethodSignature, jint implMethodKind, ref<java::lang::String> implClass, ref<java::lang::String> implMethodName, ref<java::lang::String> implMethodSignature, ref<java::lang::String> instantiatedMethodType, ref<link::java::array<java::lang::Object>> capturedArgs);
	ref<java::lang::String> getCapturingClass();
	ref<java::lang::String> getFunctionalInterfaceClass();
	ref<java::lang::String> getFunctionalInterfaceMethodName();
	ref<java::lang::String> getFunctionalInterfaceMethodSignature();
	ref<java::lang::String> getImplClass();
	ref<java::lang::String> getImplMethodName();
	ref<java::lang::String> getImplMethodSignature();
	jint getImplMethodKind();
	ref<java::lang::String> getInstantiatedMethodType();
	jint getCapturedArgCount();
	ref<java::lang::Object> getCapturedArg(jint i);
	ref<java::lang::String> toString();

protected:

	SerializedLambda(handle_type h) : base_(h) {}

};

} // namespace java::lang::invoke
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::lang::invoke {

inline ref<SerializedLambda> SerializedLambda::new_object(ref<java::lang::Class> capturingClass, ref<java::lang::String> functionalInterfaceClass, ref<java::lang::String> functionalInterfaceMethodName, ref<java::lang::String> functionalInterfaceMethodSignature, jint implMethodKind, ref<java::lang::String> implClass, ref<java::lang::String> implMethodName, ref<java::lang::String> implMethodSignature, ref<java::lang::String> instantiatedMethodType, ref<link::java::array<java::lang::Object>> capturedArgs) { return base_::new_object(capturingClass, functionalInterfaceClass, functionalInterfaceMethodName, functionalInterfaceMethodSignature, implMethodKind, implClass, implMethodName, implMethodSignature, instantiatedMethodType, capturedArgs); }
inline ref<java::lang::String> SerializedLambda::getCapturingClass() { return call_method<SCAPIX_META_STRING("getCapturingClass"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SerializedLambda::getFunctionalInterfaceClass() { return call_method<SCAPIX_META_STRING("getFunctionalInterfaceClass"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SerializedLambda::getFunctionalInterfaceMethodName() { return call_method<SCAPIX_META_STRING("getFunctionalInterfaceMethodName"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SerializedLambda::getFunctionalInterfaceMethodSignature() { return call_method<SCAPIX_META_STRING("getFunctionalInterfaceMethodSignature"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SerializedLambda::getImplClass() { return call_method<SCAPIX_META_STRING("getImplClass"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SerializedLambda::getImplMethodName() { return call_method<SCAPIX_META_STRING("getImplMethodName"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SerializedLambda::getImplMethodSignature() { return call_method<SCAPIX_META_STRING("getImplMethodSignature"), ref<java::lang::String>>(); }
inline jint SerializedLambda::getImplMethodKind() { return call_method<SCAPIX_META_STRING("getImplMethodKind"), jint>(); }
inline ref<java::lang::String> SerializedLambda::getInstantiatedMethodType() { return call_method<SCAPIX_META_STRING("getInstantiatedMethodType"), ref<java::lang::String>>(); }
inline jint SerializedLambda::getCapturedArgCount() { return call_method<SCAPIX_META_STRING("getCapturedArgCount"), jint>(); }
inline ref<java::lang::Object> SerializedLambda::getCapturedArg(jint i) { return call_method<SCAPIX_META_STRING("getCapturedArg"), ref<java::lang::Object>>(i); }
inline ref<java::lang::String> SerializedLambda::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace java::lang::invoke
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_INVOKE_SERIALIZEDLAMBDA_H
