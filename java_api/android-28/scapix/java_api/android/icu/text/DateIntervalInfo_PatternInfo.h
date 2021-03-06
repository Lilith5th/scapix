// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_ANDROID_ICU_TEXT_DATEINTERVALINFO_PATTERNINFO_H
#define SCAPIX_ANDROID_ICU_TEXT_DATEINTERVALINFO_PATTERNINFO_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::icu::text {

class DateIntervalInfo_PatternInfo : public object_base<SCAPIX_META_STRING("android/icu/text/DateIntervalInfo$PatternInfo"),
	java::lang::Object,
	java::lang::Cloneable,
	java::io::Serializable>
{
public:

	static ref<DateIntervalInfo_PatternInfo> new_object(ref<java::lang::String> firstPart, ref<java::lang::String> secondPart, jboolean firstDateInPtnIsLaterDate);
	ref<java::lang::String> getFirstPart();
	ref<java::lang::String> getSecondPart();
	jboolean firstDateInPtnIsLaterDate();
	jboolean equals(ref<java::lang::Object> a);
	jint hashCode();
	ref<java::lang::String> toString();

protected:

	DateIntervalInfo_PatternInfo(handle_type h) : base_(h) {}

};

} // namespace android::icu::text
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::icu::text {

inline ref<DateIntervalInfo_PatternInfo> DateIntervalInfo_PatternInfo::new_object(ref<java::lang::String> firstPart, ref<java::lang::String> secondPart, jboolean firstDateInPtnIsLaterDate) { return base_::new_object(firstPart, secondPart, firstDateInPtnIsLaterDate); }
inline ref<java::lang::String> DateIntervalInfo_PatternInfo::getFirstPart() { return call_method<SCAPIX_META_STRING("getFirstPart"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DateIntervalInfo_PatternInfo::getSecondPart() { return call_method<SCAPIX_META_STRING("getSecondPart"), ref<java::lang::String>>(); }
inline jboolean DateIntervalInfo_PatternInfo::firstDateInPtnIsLaterDate() { return call_method<SCAPIX_META_STRING("firstDateInPtnIsLaterDate"), jboolean>(); }
inline jboolean DateIntervalInfo_PatternInfo::equals(ref<java::lang::Object> a) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(a); }
inline jint DateIntervalInfo_PatternInfo::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> DateIntervalInfo_PatternInfo::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::icu::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_TEXT_DATEINTERVALINFO_PATTERNINFO_H
