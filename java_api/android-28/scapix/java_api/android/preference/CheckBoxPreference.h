// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/preference/TwoStatePreference.h>

#ifndef SCAPIX_ANDROID_PREFERENCE_CHECKBOXPREFERENCE_H
#define SCAPIX_ANDROID_PREFERENCE_CHECKBOXPREFERENCE_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::util { class AttributeSet; }

namespace android::preference {

class CheckBoxPreference : public object_base<SCAPIX_META_STRING("android/preference/CheckBoxPreference"),
	android::preference::TwoStatePreference>
{
public:

	static ref<CheckBoxPreference> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr);
	static ref<CheckBoxPreference> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes);
	static ref<CheckBoxPreference> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs);
	static ref<CheckBoxPreference> new_object(ref<android::content::Context> context);

protected:

	CheckBoxPreference(handle_type h) : base_(h) {}

};

} // namespace android::preference
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>

namespace scapix::java_api {
namespace android::preference {

inline ref<CheckBoxPreference> CheckBoxPreference::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
inline ref<CheckBoxPreference> CheckBoxPreference::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
inline ref<CheckBoxPreference> CheckBoxPreference::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
inline ref<CheckBoxPreference> CheckBoxPreference::new_object(ref<android::content::Context> context) { return base_::new_object(context); }

} // namespace android::preference
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PREFERENCE_CHECKBOXPREFERENCE_H
