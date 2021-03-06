// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_ICU_TEXT_COLLATIONKEY_BOUNDMODE_H
#define SCAPIX_ANDROID_ICU_TEXT_COLLATIONKEY_BOUNDMODE_H

namespace scapix::java_api {


namespace android::icu::text {

class CollationKey_BoundMode : public object_base<SCAPIX_META_STRING("android/icu/text/CollationKey$BoundMode"),
	java::lang::Object>
{
public:

	static jint LOWER_();
	static jint UPPER_();
	static jint UPPER_LONG_();


protected:

	CollationKey_BoundMode(handle_type h) : base_(h) {}

};

} // namespace android::icu::text
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::icu::text {

inline jint CollationKey_BoundMode::LOWER_() { return get_static_field<SCAPIX_META_STRING("LOWER"), jint>(); }
inline jint CollationKey_BoundMode::UPPER_() { return get_static_field<SCAPIX_META_STRING("UPPER"), jint>(); }
inline jint CollationKey_BoundMode::UPPER_LONG_() { return get_static_field<SCAPIX_META_STRING("UPPER_LONG"), jint>(); }

} // namespace android::icu::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_TEXT_COLLATIONKEY_BOUNDMODE_H
