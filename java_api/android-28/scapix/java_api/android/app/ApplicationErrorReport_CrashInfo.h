// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_APP_APPLICATIONERRORREPORT_CRASHINFO_H
#define SCAPIX_ANDROID_APP_APPLICATIONERRORREPORT_CRASHINFO_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::util { class Printer; }
namespace java::lang { class String; }
namespace java::lang { class Throwable; }

namespace android::app {

class ApplicationErrorReport_CrashInfo : public object_base<SCAPIX_META_STRING("android/app/ApplicationErrorReport$CrashInfo"),
	java::lang::Object>
{
public:

	ref<java::lang::String> exceptionClassName();
	void exceptionClassName(ref<java::lang::String>);
	ref<java::lang::String> exceptionMessage();
	void exceptionMessage(ref<java::lang::String>);
	ref<java::lang::String> stackTrace();
	void stackTrace(ref<java::lang::String>);
	ref<java::lang::String> throwClassName();
	void throwClassName(ref<java::lang::String>);
	ref<java::lang::String> throwFileName();
	void throwFileName(ref<java::lang::String>);
	jint throwLineNumber();
	void throwLineNumber(jint);
	ref<java::lang::String> throwMethodName();
	void throwMethodName(ref<java::lang::String>);

	static ref<ApplicationErrorReport_CrashInfo> new_object();
	static ref<ApplicationErrorReport_CrashInfo> new_object(ref<java::lang::Throwable> tr);
	static ref<ApplicationErrorReport_CrashInfo> new_object(ref<android::os::Parcel> in);
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	void dump(ref<android::util::Printer> pw, ref<java::lang::String> prefix);

protected:

	ApplicationErrorReport_CrashInfo(handle_type h) : base_(h) {}

};

} // namespace android::app
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/util/Printer.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace android::app {

inline ref<java::lang::String> ApplicationErrorReport_CrashInfo::exceptionClassName() { return get_field<SCAPIX_META_STRING("exceptionClassName"), ref<java::lang::String>>(); }
inline void ApplicationErrorReport_CrashInfo::exceptionClassName(ref<java::lang::String> v) { set_field<SCAPIX_META_STRING("exceptionClassName"), ref<java::lang::String>>(v); }
inline ref<java::lang::String> ApplicationErrorReport_CrashInfo::exceptionMessage() { return get_field<SCAPIX_META_STRING("exceptionMessage"), ref<java::lang::String>>(); }
inline void ApplicationErrorReport_CrashInfo::exceptionMessage(ref<java::lang::String> v) { set_field<SCAPIX_META_STRING("exceptionMessage"), ref<java::lang::String>>(v); }
inline ref<java::lang::String> ApplicationErrorReport_CrashInfo::stackTrace() { return get_field<SCAPIX_META_STRING("stackTrace"), ref<java::lang::String>>(); }
inline void ApplicationErrorReport_CrashInfo::stackTrace(ref<java::lang::String> v) { set_field<SCAPIX_META_STRING("stackTrace"), ref<java::lang::String>>(v); }
inline ref<java::lang::String> ApplicationErrorReport_CrashInfo::throwClassName() { return get_field<SCAPIX_META_STRING("throwClassName"), ref<java::lang::String>>(); }
inline void ApplicationErrorReport_CrashInfo::throwClassName(ref<java::lang::String> v) { set_field<SCAPIX_META_STRING("throwClassName"), ref<java::lang::String>>(v); }
inline ref<java::lang::String> ApplicationErrorReport_CrashInfo::throwFileName() { return get_field<SCAPIX_META_STRING("throwFileName"), ref<java::lang::String>>(); }
inline void ApplicationErrorReport_CrashInfo::throwFileName(ref<java::lang::String> v) { set_field<SCAPIX_META_STRING("throwFileName"), ref<java::lang::String>>(v); }
inline jint ApplicationErrorReport_CrashInfo::throwLineNumber() { return get_field<SCAPIX_META_STRING("throwLineNumber"), jint>(); }
inline void ApplicationErrorReport_CrashInfo::throwLineNumber(jint v) { set_field<SCAPIX_META_STRING("throwLineNumber"), jint>(v); }
inline ref<java::lang::String> ApplicationErrorReport_CrashInfo::throwMethodName() { return get_field<SCAPIX_META_STRING("throwMethodName"), ref<java::lang::String>>(); }
inline void ApplicationErrorReport_CrashInfo::throwMethodName(ref<java::lang::String> v) { set_field<SCAPIX_META_STRING("throwMethodName"), ref<java::lang::String>>(v); }
inline ref<ApplicationErrorReport_CrashInfo> ApplicationErrorReport_CrashInfo::new_object() { return base_::new_object(); }
inline ref<ApplicationErrorReport_CrashInfo> ApplicationErrorReport_CrashInfo::new_object(ref<java::lang::Throwable> tr) { return base_::new_object(tr); }
inline ref<ApplicationErrorReport_CrashInfo> ApplicationErrorReport_CrashInfo::new_object(ref<android::os::Parcel> in) { return base_::new_object(in); }
inline void ApplicationErrorReport_CrashInfo::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline void ApplicationErrorReport_CrashInfo::dump(ref<android::util::Printer> pw, ref<java::lang::String> prefix) { return call_method<SCAPIX_META_STRING("dump"), void>(pw, prefix); }

} // namespace android::app
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_APPLICATIONERRORREPORT_CRASHINFO_H
