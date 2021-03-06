// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATION_REQUEST_H
#define SCAPIX_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATION_REQUEST_H

namespace scapix::java_api {

namespace android::os { class LocaleList; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class CharSequence; }
namespace java::time { class ZonedDateTime; }
namespace android::view::textclassifier { class TextClassification_Request_Builder; }

namespace android::view::textclassifier {

class TextClassification_Request : public object_base<SCAPIX_META_STRING("android/view/textclassifier/TextClassification$Request"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = TextClassification_Request_Builder;

	static ref<android::os::Parcelable_Creator> CREATOR_();

	ref<java::lang::CharSequence> getText();
	jint getStartIndex();
	jint getEndIndex();
	ref<android::os::LocaleList> getDefaultLocales();
	ref<java::time::ZonedDateTime> getReferenceTime();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);

protected:

	TextClassification_Request(handle_type h) : base_(h) {}

};

} // namespace android::view::textclassifier
} // namespace scapix::java_api

#include <scapix/java_api/android/os/LocaleList.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/time/ZonedDateTime.h>

namespace scapix::java_api {
namespace android::view::textclassifier {

inline ref<android::os::Parcelable_Creator> TextClassification_Request::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<java::lang::CharSequence> TextClassification_Request::getText() { return call_method<SCAPIX_META_STRING("getText"), ref<java::lang::CharSequence>>(); }
inline jint TextClassification_Request::getStartIndex() { return call_method<SCAPIX_META_STRING("getStartIndex"), jint>(); }
inline jint TextClassification_Request::getEndIndex() { return call_method<SCAPIX_META_STRING("getEndIndex"), jint>(); }
inline ref<android::os::LocaleList> TextClassification_Request::getDefaultLocales() { return call_method<SCAPIX_META_STRING("getDefaultLocales"), ref<android::os::LocaleList>>(); }
inline ref<java::time::ZonedDateTime> TextClassification_Request::getReferenceTime() { return call_method<SCAPIX_META_STRING("getReferenceTime"), ref<java::time::ZonedDateTime>>(); }
inline jint TextClassification_Request::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void TextClassification_Request::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }

} // namespace android::view::textclassifier
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATION_REQUEST_H
