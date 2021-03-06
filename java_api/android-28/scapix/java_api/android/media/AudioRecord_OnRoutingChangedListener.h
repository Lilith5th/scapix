// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/media/AudioRouting_OnRoutingChangedListener.h>

#ifndef SCAPIX_ANDROID_MEDIA_AUDIORECORD_ONROUTINGCHANGEDLISTENER_H
#define SCAPIX_ANDROID_MEDIA_AUDIORECORD_ONROUTINGCHANGEDLISTENER_H

namespace scapix::java_api {

namespace android::media { class AudioRecord; }
namespace android::media { class AudioRouting; }

namespace android::media {

class AudioRecord_OnRoutingChangedListener : public object_base<SCAPIX_META_STRING("android/media/AudioRecord$OnRoutingChangedListener"),
	java::lang::Object,
	android::media::AudioRouting_OnRoutingChangedListener>
{
public:

	void onRoutingChanged(ref<android::media::AudioRecord> p1);
	void onRoutingChanged(ref<android::media::AudioRouting> router);

protected:

	AudioRecord_OnRoutingChangedListener(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api

#include <scapix/java_api/android/media/AudioRecord.h>
#include <scapix/java_api/android/media/AudioRouting.h>

namespace scapix::java_api {
namespace android::media {

inline void AudioRecord_OnRoutingChangedListener::onRoutingChanged(ref<android::media::AudioRecord> p1) { return call_method<SCAPIX_META_STRING("onRoutingChanged"), void>(p1); }
inline void AudioRecord_OnRoutingChangedListener::onRoutingChanged(ref<android::media::AudioRouting> router) { return call_method<SCAPIX_META_STRING("onRoutingChanged"), void>(router); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_AUDIORECORD_ONROUTINGCHANGEDLISTENER_H
