// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_UTIL_STATSLOG_H
#define SCAPIX_ANDROID_UTIL_STATSLOG_H

namespace scapix::java_api {
namespace android::util {

class StatsLog : public object_base<SCAPIX_META_STRING("android/util/StatsLog"),
	java::lang::Object>
{
public:

	static jboolean logStart(jint label);
	static jboolean logStop(jint label);
	static jboolean logEvent(jint label);

protected:

	StatsLog(handle_type h) : base_(h) {}

};

} // namespace android::util
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::util {

inline jboolean StatsLog::logStart(jint label) { return call_static_method<SCAPIX_META_STRING("logStart"), jboolean>(label); }
inline jboolean StatsLog::logStop(jint label) { return call_static_method<SCAPIX_META_STRING("logStop"), jboolean>(label); }
inline jboolean StatsLog::logEvent(jint label) { return call_static_method<SCAPIX_META_STRING("logEvent"), jboolean>(label); }

} // namespace android::util
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_UTIL_STATSLOG_H
