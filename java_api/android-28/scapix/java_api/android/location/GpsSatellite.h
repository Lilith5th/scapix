// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_LOCATION_GPSSATELLITE_H
#define SCAPIX_ANDROID_LOCATION_GPSSATELLITE_H

namespace scapix::java_api {
namespace android::location {

class GpsSatellite : public object_base<SCAPIX_META_STRING("android/location/GpsSatellite"),
	java::lang::Object>
{
public:

	jint getPrn();
	jfloat getSnr();
	jfloat getElevation();
	jfloat getAzimuth();
	jboolean hasEphemeris();
	jboolean hasAlmanac();
	jboolean usedInFix();

protected:

	GpsSatellite(handle_type h) : base_(h) {}

};

} // namespace android::location
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::location {

inline jint GpsSatellite::getPrn() { return call_method<SCAPIX_META_STRING("getPrn"), jint>(); }
inline jfloat GpsSatellite::getSnr() { return call_method<SCAPIX_META_STRING("getSnr"), jfloat>(); }
inline jfloat GpsSatellite::getElevation() { return call_method<SCAPIX_META_STRING("getElevation"), jfloat>(); }
inline jfloat GpsSatellite::getAzimuth() { return call_method<SCAPIX_META_STRING("getAzimuth"), jfloat>(); }
inline jboolean GpsSatellite::hasEphemeris() { return call_method<SCAPIX_META_STRING("hasEphemeris"), jboolean>(); }
inline jboolean GpsSatellite::hasAlmanac() { return call_method<SCAPIX_META_STRING("hasAlmanac"), jboolean>(); }
inline jboolean GpsSatellite::usedInFix() { return call_method<SCAPIX_META_STRING("usedInFix"), jboolean>(); }

} // namespace android::location
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_LOCATION_GPSSATELLITE_H
