// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_LOCATION_CRITERIA_H
#define SCAPIX_ANDROID_LOCATION_CRITERIA_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }

namespace android::location {

class Criteria : public object_base<SCAPIX_META_STRING("android/location/Criteria"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jint ACCURACY_COARSE_();
	static jint ACCURACY_FINE_();
	static jint ACCURACY_HIGH_();
	static jint ACCURACY_LOW_();
	static jint ACCURACY_MEDIUM_();
	static ref<android::os::Parcelable_Creator> CREATOR_();
	static jint NO_REQUIREMENT_();
	static jint POWER_HIGH_();
	static jint POWER_LOW_();
	static jint POWER_MEDIUM_();

	static ref<Criteria> new_object();
	static ref<Criteria> new_object(ref<android::location::Criteria> criteria);
	void setHorizontalAccuracy(jint accuracy);
	jint getHorizontalAccuracy();
	void setVerticalAccuracy(jint accuracy);
	jint getVerticalAccuracy();
	void setSpeedAccuracy(jint accuracy);
	jint getSpeedAccuracy();
	void setBearingAccuracy(jint accuracy);
	jint getBearingAccuracy();
	void setAccuracy(jint accuracy);
	jint getAccuracy();
	void setPowerRequirement(jint level);
	jint getPowerRequirement();
	void setCostAllowed(jboolean costAllowed);
	jboolean isCostAllowed();
	void setAltitudeRequired(jboolean altitudeRequired);
	jboolean isAltitudeRequired();
	void setSpeedRequired(jboolean speedRequired);
	jboolean isSpeedRequired();
	void setBearingRequired(jboolean bearingRequired);
	jboolean isBearingRequired();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> parcel, jint flags);
	ref<java::lang::String> toString();

protected:

	Criteria(handle_type h) : base_(h) {}

};

} // namespace android::location
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::location {

inline jint Criteria::ACCURACY_COARSE_() { return get_static_field<SCAPIX_META_STRING("ACCURACY_COARSE"), jint>(); }
inline jint Criteria::ACCURACY_FINE_() { return get_static_field<SCAPIX_META_STRING("ACCURACY_FINE"), jint>(); }
inline jint Criteria::ACCURACY_HIGH_() { return get_static_field<SCAPIX_META_STRING("ACCURACY_HIGH"), jint>(); }
inline jint Criteria::ACCURACY_LOW_() { return get_static_field<SCAPIX_META_STRING("ACCURACY_LOW"), jint>(); }
inline jint Criteria::ACCURACY_MEDIUM_() { return get_static_field<SCAPIX_META_STRING("ACCURACY_MEDIUM"), jint>(); }
inline ref<android::os::Parcelable_Creator> Criteria::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jint Criteria::NO_REQUIREMENT_() { return get_static_field<SCAPIX_META_STRING("NO_REQUIREMENT"), jint>(); }
inline jint Criteria::POWER_HIGH_() { return get_static_field<SCAPIX_META_STRING("POWER_HIGH"), jint>(); }
inline jint Criteria::POWER_LOW_() { return get_static_field<SCAPIX_META_STRING("POWER_LOW"), jint>(); }
inline jint Criteria::POWER_MEDIUM_() { return get_static_field<SCAPIX_META_STRING("POWER_MEDIUM"), jint>(); }
inline ref<Criteria> Criteria::new_object() { return base_::new_object(); }
inline ref<Criteria> Criteria::new_object(ref<android::location::Criteria> criteria) { return base_::new_object(criteria); }
inline void Criteria::setHorizontalAccuracy(jint accuracy) { return call_method<SCAPIX_META_STRING("setHorizontalAccuracy"), void>(accuracy); }
inline jint Criteria::getHorizontalAccuracy() { return call_method<SCAPIX_META_STRING("getHorizontalAccuracy"), jint>(); }
inline void Criteria::setVerticalAccuracy(jint accuracy) { return call_method<SCAPIX_META_STRING("setVerticalAccuracy"), void>(accuracy); }
inline jint Criteria::getVerticalAccuracy() { return call_method<SCAPIX_META_STRING("getVerticalAccuracy"), jint>(); }
inline void Criteria::setSpeedAccuracy(jint accuracy) { return call_method<SCAPIX_META_STRING("setSpeedAccuracy"), void>(accuracy); }
inline jint Criteria::getSpeedAccuracy() { return call_method<SCAPIX_META_STRING("getSpeedAccuracy"), jint>(); }
inline void Criteria::setBearingAccuracy(jint accuracy) { return call_method<SCAPIX_META_STRING("setBearingAccuracy"), void>(accuracy); }
inline jint Criteria::getBearingAccuracy() { return call_method<SCAPIX_META_STRING("getBearingAccuracy"), jint>(); }
inline void Criteria::setAccuracy(jint accuracy) { return call_method<SCAPIX_META_STRING("setAccuracy"), void>(accuracy); }
inline jint Criteria::getAccuracy() { return call_method<SCAPIX_META_STRING("getAccuracy"), jint>(); }
inline void Criteria::setPowerRequirement(jint level) { return call_method<SCAPIX_META_STRING("setPowerRequirement"), void>(level); }
inline jint Criteria::getPowerRequirement() { return call_method<SCAPIX_META_STRING("getPowerRequirement"), jint>(); }
inline void Criteria::setCostAllowed(jboolean costAllowed) { return call_method<SCAPIX_META_STRING("setCostAllowed"), void>(costAllowed); }
inline jboolean Criteria::isCostAllowed() { return call_method<SCAPIX_META_STRING("isCostAllowed"), jboolean>(); }
inline void Criteria::setAltitudeRequired(jboolean altitudeRequired) { return call_method<SCAPIX_META_STRING("setAltitudeRequired"), void>(altitudeRequired); }
inline jboolean Criteria::isAltitudeRequired() { return call_method<SCAPIX_META_STRING("isAltitudeRequired"), jboolean>(); }
inline void Criteria::setSpeedRequired(jboolean speedRequired) { return call_method<SCAPIX_META_STRING("setSpeedRequired"), void>(speedRequired); }
inline jboolean Criteria::isSpeedRequired() { return call_method<SCAPIX_META_STRING("isSpeedRequired"), jboolean>(); }
inline void Criteria::setBearingRequired(jboolean bearingRequired) { return call_method<SCAPIX_META_STRING("setBearingRequired"), void>(bearingRequired); }
inline jboolean Criteria::isBearingRequired() { return call_method<SCAPIX_META_STRING("isBearingRequired"), jboolean>(); }
inline jint Criteria::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void Criteria::writeToParcel(ref<android::os::Parcel> parcel, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(parcel, flags); }
inline ref<java::lang::String> Criteria::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::location
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_LOCATION_CRITERIA_H
