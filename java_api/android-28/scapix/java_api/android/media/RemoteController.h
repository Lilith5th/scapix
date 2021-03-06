// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_REMOTECONTROLLER_H
#define SCAPIX_ANDROID_MEDIA_REMOTECONTROLLER_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::media { class RemoteController_MetadataEditor; }
namespace android::media { class RemoteController_OnClientUpdateListener; }
namespace android::os { class Looper; }
namespace android::view { class KeyEvent; }

namespace android::media {

class RemoteController : public object_base<SCAPIX_META_STRING("android/media/RemoteController"),
	java::lang::Object>
{
public:

	using OnClientUpdateListener = RemoteController_OnClientUpdateListener;
	using MetadataEditor = RemoteController_MetadataEditor;

	static jint POSITION_SYNCHRONIZATION_CHECK_();
	static jint POSITION_SYNCHRONIZATION_NONE_();

	static ref<RemoteController> new_object(ref<android::content::Context> context, ref<android::media::RemoteController_OnClientUpdateListener> updateListener);
	static ref<RemoteController> new_object(ref<android::content::Context> context, ref<android::media::RemoteController_OnClientUpdateListener> updateListener, ref<android::os::Looper> looper);
	jlong getEstimatedMediaPosition();
	jboolean sendMediaKeyEvent(ref<android::view::KeyEvent> keyEvent);
	jboolean seekTo(jlong timeMs);
	jboolean setArtworkConfiguration(jint width, jint height);
	jboolean clearArtworkConfiguration();
	jboolean setSynchronizationMode(jint sync);
	ref<android::media::RemoteController_MetadataEditor> editMetadata();

protected:

	RemoteController(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/media/RemoteController_MetadataEditor.h>
#include <scapix/java_api/android/media/RemoteController_OnClientUpdateListener.h>
#include <scapix/java_api/android/os/Looper.h>
#include <scapix/java_api/android/view/KeyEvent.h>

namespace scapix::java_api {
namespace android::media {

inline jint RemoteController::POSITION_SYNCHRONIZATION_CHECK_() { return get_static_field<SCAPIX_META_STRING("POSITION_SYNCHRONIZATION_CHECK"), jint>(); }
inline jint RemoteController::POSITION_SYNCHRONIZATION_NONE_() { return get_static_field<SCAPIX_META_STRING("POSITION_SYNCHRONIZATION_NONE"), jint>(); }
inline ref<RemoteController> RemoteController::new_object(ref<android::content::Context> context, ref<android::media::RemoteController_OnClientUpdateListener> updateListener) { return base_::new_object(context, updateListener); }
inline ref<RemoteController> RemoteController::new_object(ref<android::content::Context> context, ref<android::media::RemoteController_OnClientUpdateListener> updateListener, ref<android::os::Looper> looper) { return base_::new_object(context, updateListener, looper); }
inline jlong RemoteController::getEstimatedMediaPosition() { return call_method<SCAPIX_META_STRING("getEstimatedMediaPosition"), jlong>(); }
inline jboolean RemoteController::sendMediaKeyEvent(ref<android::view::KeyEvent> keyEvent) { return call_method<SCAPIX_META_STRING("sendMediaKeyEvent"), jboolean>(keyEvent); }
inline jboolean RemoteController::seekTo(jlong timeMs) { return call_method<SCAPIX_META_STRING("seekTo"), jboolean>(timeMs); }
inline jboolean RemoteController::setArtworkConfiguration(jint width, jint height) { return call_method<SCAPIX_META_STRING("setArtworkConfiguration"), jboolean>(width, height); }
inline jboolean RemoteController::clearArtworkConfiguration() { return call_method<SCAPIX_META_STRING("clearArtworkConfiguration"), jboolean>(); }
inline jboolean RemoteController::setSynchronizationMode(jint sync) { return call_method<SCAPIX_META_STRING("setSynchronizationMode"), jboolean>(sync); }
inline ref<android::media::RemoteController_MetadataEditor> RemoteController::editMetadata() { return call_method<SCAPIX_META_STRING("editMetadata"), ref<android::media::RemoteController_MetadataEditor>>(); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_REMOTECONTROLLER_H
