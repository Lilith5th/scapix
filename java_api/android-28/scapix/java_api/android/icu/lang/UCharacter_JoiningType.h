// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_ICU_LANG_UCHARACTER_JOININGTYPE_H
#define SCAPIX_ANDROID_ICU_LANG_UCHARACTER_JOININGTYPE_H

namespace scapix::java_api {


namespace android::icu::lang {

class UCharacter_JoiningType : public object_base<SCAPIX_META_STRING("android/icu/lang/UCharacter$JoiningType"),
	java::lang::Object>
{
public:

	static jint DUAL_JOINING_();
	static jint JOIN_CAUSING_();
	static jint LEFT_JOINING_();
	static jint NON_JOINING_();
	static jint RIGHT_JOINING_();
	static jint TRANSPARENT_();


protected:

	UCharacter_JoiningType(handle_type h) : base_(h) {}

};

} // namespace android::icu::lang
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::icu::lang {

inline jint UCharacter_JoiningType::DUAL_JOINING_() { return get_static_field<SCAPIX_META_STRING("DUAL_JOINING"), jint>(); }
inline jint UCharacter_JoiningType::JOIN_CAUSING_() { return get_static_field<SCAPIX_META_STRING("JOIN_CAUSING"), jint>(); }
inline jint UCharacter_JoiningType::LEFT_JOINING_() { return get_static_field<SCAPIX_META_STRING("LEFT_JOINING"), jint>(); }
inline jint UCharacter_JoiningType::NON_JOINING_() { return get_static_field<SCAPIX_META_STRING("NON_JOINING"), jint>(); }
inline jint UCharacter_JoiningType::RIGHT_JOINING_() { return get_static_field<SCAPIX_META_STRING("RIGHT_JOINING"), jint>(); }
inline jint UCharacter_JoiningType::TRANSPARENT_() { return get_static_field<SCAPIX_META_STRING("TRANSPARENT"), jint>(); }

} // namespace android::icu::lang
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_LANG_UCHARACTER_JOININGTYPE_H
