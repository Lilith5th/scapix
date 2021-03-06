// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYMANAGER_TOUCHEXPLORATIONSTATECHANGELISTENER_H
#define SCAPIX_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYMANAGER_TOUCHEXPLORATIONSTATECHANGELISTENER_H

namespace scapix::java_api {


namespace android::view::accessibility {

class AccessibilityManager_TouchExplorationStateChangeListener : public object_base<SCAPIX_META_STRING("android/view/accessibility/AccessibilityManager$TouchExplorationStateChangeListener"),
	java::lang::Object>
{
public:

	void onTouchExplorationStateChanged(jboolean p1);

protected:

	AccessibilityManager_TouchExplorationStateChangeListener(handle_type h) : base_(h) {}

};

} // namespace android::view::accessibility
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::view::accessibility {

inline void AccessibilityManager_TouchExplorationStateChangeListener::onTouchExplorationStateChanged(jboolean p1) { return call_method<SCAPIX_META_STRING("onTouchExplorationStateChanged"), void>(p1); }

} // namespace android::view::accessibility
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYMANAGER_TOUCHEXPLORATIONSTATECHANGELISTENER_H
