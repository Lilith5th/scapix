// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_NET_WIFI_AWARE_SUBSCRIBECONFIG_H
#define SCAPIX_ANDROID_NET_WIFI_AWARE_SUBSCRIBECONFIG_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }
namespace android::net::wifi::aware { class SubscribeConfig_Builder; }

namespace android::net::wifi::aware {

class SubscribeConfig : public object_base<SCAPIX_META_STRING("android/net/wifi/aware/SubscribeConfig"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = SubscribeConfig_Builder;

	static ref<android::os::Parcelable_Creator> CREATOR_();
	static jint SUBSCRIBE_TYPE_ACTIVE_();
	static jint SUBSCRIBE_TYPE_PASSIVE_();

	ref<java::lang::String> toString();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	jboolean equals(ref<java::lang::Object> o);
	jint hashCode();

protected:

	SubscribeConfig(handle_type h) : base_(h) {}

};

} // namespace android::net::wifi::aware
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::net::wifi::aware {

inline ref<android::os::Parcelable_Creator> SubscribeConfig::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jint SubscribeConfig::SUBSCRIBE_TYPE_ACTIVE_() { return get_static_field<SCAPIX_META_STRING("SUBSCRIBE_TYPE_ACTIVE"), jint>(); }
inline jint SubscribeConfig::SUBSCRIBE_TYPE_PASSIVE_() { return get_static_field<SCAPIX_META_STRING("SUBSCRIBE_TYPE_PASSIVE"), jint>(); }
inline ref<java::lang::String> SubscribeConfig::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint SubscribeConfig::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void SubscribeConfig::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline jboolean SubscribeConfig::equals(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(o); }
inline jint SubscribeConfig::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }

} // namespace android::net::wifi::aware
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NET_WIFI_AWARE_SUBSCRIBECONFIG_H
