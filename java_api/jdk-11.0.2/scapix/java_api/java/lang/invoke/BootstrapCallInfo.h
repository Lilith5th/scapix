// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/invoke/ConstantGroup.h>

#ifndef SCAPIX_JAVA_LANG_INVOKE_BOOTSTRAPCALLINFO_H
#define SCAPIX_JAVA_LANG_INVOKE_BOOTSTRAPCALLINFO_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang::invoke { class MethodHandle; }

namespace java::lang::invoke {

// private
class BootstrapCallInfo : public object_base<SCAPIX_META_STRING("java/lang/invoke/BootstrapCallInfo"),
	java::lang::Object,
	java::lang::invoke::ConstantGroup>
{
public:

	ref<java::lang::invoke::MethodHandle> bootstrapMethod();
	ref<java::lang::String> invocationName();
	ref<java::lang::Object> invocationType();
	static ref<java::lang::invoke::BootstrapCallInfo> makeBootstrapCallInfo(ref<java::lang::invoke::MethodHandle> bsm, ref<java::lang::String> name, ref<java::lang::Object> type, ref<java::lang::invoke::ConstantGroup> constants);

protected:

	BootstrapCallInfo(handle_type h) : base_(h) {}

};

} // namespace java::lang::invoke
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/invoke/MethodHandle.h>

namespace scapix::java_api {
namespace java::lang::invoke {

inline ref<java::lang::invoke::MethodHandle> BootstrapCallInfo::bootstrapMethod() { return call_method<SCAPIX_META_STRING("bootstrapMethod"), ref<java::lang::invoke::MethodHandle>>(); }
inline ref<java::lang::String> BootstrapCallInfo::invocationName() { return call_method<SCAPIX_META_STRING("invocationName"), ref<java::lang::String>>(); }
inline ref<java::lang::Object> BootstrapCallInfo::invocationType() { return call_method<SCAPIX_META_STRING("invocationType"), ref<java::lang::Object>>(); }
inline ref<java::lang::invoke::BootstrapCallInfo> BootstrapCallInfo::makeBootstrapCallInfo(ref<java::lang::invoke::MethodHandle> bsm, ref<java::lang::String> name, ref<java::lang::Object> type, ref<java::lang::invoke::ConstantGroup> constants) { return call_static_method<SCAPIX_META_STRING("makeBootstrapCallInfo"), ref<java::lang::invoke::BootstrapCallInfo>>(bsm, name, type, constants); }

} // namespace java::lang::invoke
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_INVOKE_BOOTSTRAPCALLINFO_H
