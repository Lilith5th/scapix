// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/util/Printer.h>

#ifndef SCAPIX_ANDROID_UTIL_LOGPRINTER_H
#define SCAPIX_ANDROID_UTIL_LOGPRINTER_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::util {

class LogPrinter : public object_base<SCAPIX_META_STRING("android/util/LogPrinter"),
	java::lang::Object,
	android::util::Printer>
{
public:

	static ref<LogPrinter> new_object(jint priority, ref<java::lang::String> tag);
	void println(ref<java::lang::String> x);

protected:

	LogPrinter(handle_type h) : base_(h) {}

};

} // namespace android::util
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::util {

inline ref<LogPrinter> LogPrinter::new_object(jint priority, ref<java::lang::String> tag) { return base_::new_object(priority, tag); }
inline void LogPrinter::println(ref<java::lang::String> x) { return call_method<SCAPIX_META_STRING("println"), void>(x); }

} // namespace android::util
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_UTIL_LOGPRINTER_H
