// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_TELECOM_CALL_RTTCALL_H
#define SCAPIX_ANDROID_TELECOM_CALL_RTTCALL_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::telecom {

class Call_RttCall : public object_base<SCAPIX_META_STRING("android/telecom/Call$RttCall"),
	java::lang::Object>
{
public:

	static jint RTT_MODE_FULL_();
	static jint RTT_MODE_HCO_();
	static jint RTT_MODE_VCO_();

	jint getRttAudioMode();
	void setRttMode(jint mode);
	void write(ref<java::lang::String> input);
	ref<java::lang::String> read();
	ref<java::lang::String> readImmediately();

protected:

	Call_RttCall(handle_type h) : base_(h) {}

};

} // namespace android::telecom
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::telecom {

inline jint Call_RttCall::RTT_MODE_FULL_() { return get_static_field<SCAPIX_META_STRING("RTT_MODE_FULL"), jint>(); }
inline jint Call_RttCall::RTT_MODE_HCO_() { return get_static_field<SCAPIX_META_STRING("RTT_MODE_HCO"), jint>(); }
inline jint Call_RttCall::RTT_MODE_VCO_() { return get_static_field<SCAPIX_META_STRING("RTT_MODE_VCO"), jint>(); }
inline jint Call_RttCall::getRttAudioMode() { return call_method<SCAPIX_META_STRING("getRttAudioMode"), jint>(); }
inline void Call_RttCall::setRttMode(jint mode) { return call_method<SCAPIX_META_STRING("setRttMode"), void>(mode); }
inline void Call_RttCall::write(ref<java::lang::String> input) { return call_method<SCAPIX_META_STRING("write"), void>(input); }
inline ref<java::lang::String> Call_RttCall::read() { return call_method<SCAPIX_META_STRING("read"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Call_RttCall::readImmediately() { return call_method<SCAPIX_META_STRING("readImmediately"), ref<java::lang::String>>(); }

} // namespace android::telecom
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TELECOM_CALL_RTTCALL_H
