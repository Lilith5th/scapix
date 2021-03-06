// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/text/ParcelableSpan.h>

#ifndef SCAPIX_ANDROID_TEXT_STYLE_EASYEDITSPAN_H
#define SCAPIX_ANDROID_TEXT_STYLE_EASYEDITSPAN_H

namespace scapix::java_api {

namespace android::app { class PendingIntent; }
namespace android::os { class Parcel; }
namespace java::lang { class String; }

namespace android::text::style {

class EasyEditSpan : public object_base<SCAPIX_META_STRING("android/text/style/EasyEditSpan"),
	java::lang::Object,
	android::text::ParcelableSpan>
{
public:

	static ref<java::lang::String> EXTRA_TEXT_CHANGED_TYPE_();
	static jint TEXT_DELETED_();
	static jint TEXT_MODIFIED_();

	static ref<EasyEditSpan> new_object();
	static ref<EasyEditSpan> new_object(ref<android::app::PendingIntent> pendingIntent);
	static ref<EasyEditSpan> new_object(ref<android::os::Parcel> source);
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	jint getSpanTypeId();

protected:

	EasyEditSpan(handle_type h) : base_(h) {}

};

} // namespace android::text::style
} // namespace scapix::java_api

#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::text::style {

inline ref<java::lang::String> EasyEditSpan::EXTRA_TEXT_CHANGED_TYPE_() { return get_static_field<SCAPIX_META_STRING("EXTRA_TEXT_CHANGED_TYPE"), ref<java::lang::String>>(); }
inline jint EasyEditSpan::TEXT_DELETED_() { return get_static_field<SCAPIX_META_STRING("TEXT_DELETED"), jint>(); }
inline jint EasyEditSpan::TEXT_MODIFIED_() { return get_static_field<SCAPIX_META_STRING("TEXT_MODIFIED"), jint>(); }
inline ref<EasyEditSpan> EasyEditSpan::new_object() { return base_::new_object(); }
inline ref<EasyEditSpan> EasyEditSpan::new_object(ref<android::app::PendingIntent> pendingIntent) { return base_::new_object(pendingIntent); }
inline ref<EasyEditSpan> EasyEditSpan::new_object(ref<android::os::Parcel> source) { return base_::new_object(source); }
inline jint EasyEditSpan::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void EasyEditSpan::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline jint EasyEditSpan::getSpanTypeId() { return call_method<SCAPIX_META_STRING("getSpanTypeId"), jint>(); }

} // namespace android::text::style
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_STYLE_EASYEDITSPAN_H
