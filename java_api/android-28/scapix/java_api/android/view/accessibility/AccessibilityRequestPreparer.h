// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYREQUESTPREPARER_H
#define SCAPIX_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYREQUESTPREPARER_H

namespace scapix::java_api {

namespace android::os { class Bundle; }
namespace android::os { class Message; }
namespace android::view { class View; }
namespace java::lang { class String; }

namespace android::view::accessibility {

class AccessibilityRequestPreparer : public object_base<SCAPIX_META_STRING("android/view/accessibility/AccessibilityRequestPreparer"),
	java::lang::Object>
{
public:

	static jint REQUEST_TYPE_EXTRA_DATA_();

	static ref<AccessibilityRequestPreparer> new_object(ref<android::view::View> view, jint requestTypes);
	void onPrepareExtraData(jint p1, ref<java::lang::String> p2, ref<android::os::Bundle> p3, ref<android::os::Message> p4);
	ref<android::view::View> getView();

protected:

	AccessibilityRequestPreparer(handle_type h) : base_(h) {}

};

} // namespace android::view::accessibility
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Message.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::view::accessibility {

inline jint AccessibilityRequestPreparer::REQUEST_TYPE_EXTRA_DATA_() { return get_static_field<SCAPIX_META_STRING("REQUEST_TYPE_EXTRA_DATA"), jint>(); }
inline ref<AccessibilityRequestPreparer> AccessibilityRequestPreparer::new_object(ref<android::view::View> view, jint requestTypes) { return base_::new_object(view, requestTypes); }
inline void AccessibilityRequestPreparer::onPrepareExtraData(jint p1, ref<java::lang::String> p2, ref<android::os::Bundle> p3, ref<android::os::Message> p4) { return call_method<SCAPIX_META_STRING("onPrepareExtraData"), void>(p1, p2, p3, p4); }
inline ref<android::view::View> AccessibilityRequestPreparer::getView() { return call_method<SCAPIX_META_STRING("getView"), ref<android::view::View>>(); }

} // namespace android::view::accessibility
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYREQUESTPREPARER_H
