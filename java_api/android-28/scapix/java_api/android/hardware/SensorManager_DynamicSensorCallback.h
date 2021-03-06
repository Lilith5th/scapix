// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_HARDWARE_SENSORMANAGER_DYNAMICSENSORCALLBACK_H
#define SCAPIX_ANDROID_HARDWARE_SENSORMANAGER_DYNAMICSENSORCALLBACK_H

namespace scapix::java_api {

namespace android::hardware { class Sensor; }

namespace android::hardware {

class SensorManager_DynamicSensorCallback : public object_base<SCAPIX_META_STRING("android/hardware/SensorManager$DynamicSensorCallback"),
	java::lang::Object>
{
public:

	static ref<SensorManager_DynamicSensorCallback> new_object();
	void onDynamicSensorConnected(ref<android::hardware::Sensor> sensor);
	void onDynamicSensorDisconnected(ref<android::hardware::Sensor> sensor);

protected:

	SensorManager_DynamicSensorCallback(handle_type h) : base_(h) {}

};

} // namespace android::hardware
} // namespace scapix::java_api

#include <scapix/java_api/android/hardware/Sensor.h>

namespace scapix::java_api {
namespace android::hardware {

inline ref<SensorManager_DynamicSensorCallback> SensorManager_DynamicSensorCallback::new_object() { return base_::new_object(); }
inline void SensorManager_DynamicSensorCallback::onDynamicSensorConnected(ref<android::hardware::Sensor> sensor) { return call_method<SCAPIX_META_STRING("onDynamicSensorConnected"), void>(sensor); }
inline void SensorManager_DynamicSensorCallback::onDynamicSensorDisconnected(ref<android::hardware::Sensor> sensor) { return call_method<SCAPIX_META_STRING("onDynamicSensorDisconnected"), void>(sensor); }

} // namespace android::hardware
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_HARDWARE_SENSORMANAGER_DYNAMICSENSORCALLBACK_H
