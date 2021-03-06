// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/view/View.h>

#ifndef SCAPIX_ANDROID_APP_MEDIAROUTEBUTTON_H
#define SCAPIX_ANDROID_APP_MEDIAROUTEBUTTON_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::util { class AttributeSet; }
namespace android::view { class View_OnClickListener; }
namespace java::lang { class CharSequence; }

namespace android::app {

class MediaRouteButton : public object_base<SCAPIX_META_STRING("android/app/MediaRouteButton"),
	android::view::View>
{
public:

	static ref<MediaRouteButton> new_object(ref<android::content::Context> context);
	static ref<MediaRouteButton> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs);
	static ref<MediaRouteButton> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr);
	static ref<MediaRouteButton> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes);
	jint getRouteTypes();
	void setRouteTypes(jint types);
	void setExtendedSettingsClickListener(ref<android::view::View_OnClickListener> listener);
	void showDialog();
	void setContentDescription(ref<java::lang::CharSequence> contentDescription);
	jboolean performClick();
	void jumpDrawablesToCurrentState();
	void setVisibility(jint visibility);
	void onAttachedToWindow();
	void onDetachedFromWindow();

protected:

	MediaRouteButton(handle_type h) : base_(h) {}

};

} // namespace android::app
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/View_OnClickListener.h>
#include <scapix/java_api/java/lang/CharSequence.h>

namespace scapix::java_api {
namespace android::app {

inline ref<MediaRouteButton> MediaRouteButton::new_object(ref<android::content::Context> context) { return base_::new_object(context); }
inline ref<MediaRouteButton> MediaRouteButton::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
inline ref<MediaRouteButton> MediaRouteButton::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
inline ref<MediaRouteButton> MediaRouteButton::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
inline jint MediaRouteButton::getRouteTypes() { return call_method<SCAPIX_META_STRING("getRouteTypes"), jint>(); }
inline void MediaRouteButton::setRouteTypes(jint types) { return call_method<SCAPIX_META_STRING("setRouteTypes"), void>(types); }
inline void MediaRouteButton::setExtendedSettingsClickListener(ref<android::view::View_OnClickListener> listener) { return call_method<SCAPIX_META_STRING("setExtendedSettingsClickListener"), void>(listener); }
inline void MediaRouteButton::showDialog() { return call_method<SCAPIX_META_STRING("showDialog"), void>(); }
inline void MediaRouteButton::setContentDescription(ref<java::lang::CharSequence> contentDescription) { return call_method<SCAPIX_META_STRING("setContentDescription"), void>(contentDescription); }
inline jboolean MediaRouteButton::performClick() { return call_method<SCAPIX_META_STRING("performClick"), jboolean>(); }
inline void MediaRouteButton::jumpDrawablesToCurrentState() { return call_method<SCAPIX_META_STRING("jumpDrawablesToCurrentState"), void>(); }
inline void MediaRouteButton::setVisibility(jint visibility) { return call_method<SCAPIX_META_STRING("setVisibility"), void>(visibility); }
inline void MediaRouteButton::onAttachedToWindow() { return call_method<SCAPIX_META_STRING("onAttachedToWindow"), void>(); }
inline void MediaRouteButton::onDetachedFromWindow() { return call_method<SCAPIX_META_STRING("onDetachedFromWindow"), void>(); }

} // namespace android::app
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_MEDIAROUTEBUTTON_H
