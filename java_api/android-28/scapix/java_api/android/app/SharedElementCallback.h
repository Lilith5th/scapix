// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_APP_SHAREDELEMENTCALLBACK_H
#define SCAPIX_ANDROID_APP_SHAREDELEMENTCALLBACK_H

namespace scapix::java_api {

namespace android::app { class SharedElementCallback_OnSharedElementsReadyListener; }
namespace android::content { class Context; }
namespace android::graphics { class Matrix; }
namespace android::graphics { class RectF; }
namespace android::os { class Parcelable; }
namespace android::view { class View; }
namespace java::util { class List; }
namespace java::util { class Map; }

namespace android::app {

class SharedElementCallback : public object_base<SCAPIX_META_STRING("android/app/SharedElementCallback"),
	java::lang::Object>
{
public:

	using OnSharedElementsReadyListener = SharedElementCallback_OnSharedElementsReadyListener;

	static ref<SharedElementCallback> new_object();
	void onSharedElementStart(ref<java::util::List> sharedElementNames, ref<java::util::List> sharedElements, ref<java::util::List> sharedElementSnapshots);
	void onSharedElementEnd(ref<java::util::List> sharedElementNames, ref<java::util::List> sharedElements, ref<java::util::List> sharedElementSnapshots);
	void onRejectSharedElements(ref<java::util::List> rejectedSharedElements);
	void onMapSharedElements(ref<java::util::List> names, ref<java::util::Map> sharedElements);
	ref<android::os::Parcelable> onCaptureSharedElementSnapshot(ref<android::view::View> sharedElement, ref<android::graphics::Matrix> viewToGlobalMatrix, ref<android::graphics::RectF> screenBounds);
	ref<android::view::View> onCreateSnapshotView(ref<android::content::Context> context, ref<android::os::Parcelable> snapshot);
	void onSharedElementsArrived(ref<java::util::List> sharedElementNames, ref<java::util::List> sharedElements, ref<android::app::SharedElementCallback_OnSharedElementsReadyListener> listener);

protected:

	SharedElementCallback(handle_type h) : base_(h) {}

};

} // namespace android::app
} // namespace scapix::java_api

#include <scapix/java_api/android/app/SharedElementCallback_OnSharedElementsReadyListener.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/graphics/Matrix.h>
#include <scapix/java_api/android/graphics/RectF.h>
#include <scapix/java_api/android/os/Parcelable.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>

namespace scapix::java_api {
namespace android::app {

inline ref<SharedElementCallback> SharedElementCallback::new_object() { return base_::new_object(); }
inline void SharedElementCallback::onSharedElementStart(ref<java::util::List> sharedElementNames, ref<java::util::List> sharedElements, ref<java::util::List> sharedElementSnapshots) { return call_method<SCAPIX_META_STRING("onSharedElementStart"), void>(sharedElementNames, sharedElements, sharedElementSnapshots); }
inline void SharedElementCallback::onSharedElementEnd(ref<java::util::List> sharedElementNames, ref<java::util::List> sharedElements, ref<java::util::List> sharedElementSnapshots) { return call_method<SCAPIX_META_STRING("onSharedElementEnd"), void>(sharedElementNames, sharedElements, sharedElementSnapshots); }
inline void SharedElementCallback::onRejectSharedElements(ref<java::util::List> rejectedSharedElements) { return call_method<SCAPIX_META_STRING("onRejectSharedElements"), void>(rejectedSharedElements); }
inline void SharedElementCallback::onMapSharedElements(ref<java::util::List> names, ref<java::util::Map> sharedElements) { return call_method<SCAPIX_META_STRING("onMapSharedElements"), void>(names, sharedElements); }
inline ref<android::os::Parcelable> SharedElementCallback::onCaptureSharedElementSnapshot(ref<android::view::View> sharedElement, ref<android::graphics::Matrix> viewToGlobalMatrix, ref<android::graphics::RectF> screenBounds) { return call_method<SCAPIX_META_STRING("onCaptureSharedElementSnapshot"), ref<android::os::Parcelable>>(sharedElement, viewToGlobalMatrix, screenBounds); }
inline ref<android::view::View> SharedElementCallback::onCreateSnapshotView(ref<android::content::Context> context, ref<android::os::Parcelable> snapshot) { return call_method<SCAPIX_META_STRING("onCreateSnapshotView"), ref<android::view::View>>(context, snapshot); }
inline void SharedElementCallback::onSharedElementsArrived(ref<java::util::List> sharedElementNames, ref<java::util::List> sharedElements, ref<android::app::SharedElementCallback_OnSharedElementsReadyListener> listener) { return call_method<SCAPIX_META_STRING("onSharedElementsArrived"), void>(sharedElementNames, sharedElements, listener); }

} // namespace android::app
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_SHAREDELEMENTCALLBACK_H
