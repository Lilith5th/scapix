// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/graphics/drawable/LayerDrawable.h>
#include <scapix/java_api/android/graphics/drawable/Drawable_Callback.h>

#ifndef SCAPIX_ANDROID_GRAPHICS_DRAWABLE_TRANSITIONDRAWABLE_H
#define SCAPIX_ANDROID_GRAPHICS_DRAWABLE_TRANSITIONDRAWABLE_H

namespace scapix::java_api {

namespace android::graphics { class Canvas; }
namespace android::graphics::drawable { class Drawable; }

namespace android::graphics::drawable {

class TransitionDrawable : public object_base<SCAPIX_META_STRING("android/graphics/drawable/TransitionDrawable"),
	android::graphics::drawable::LayerDrawable,
	android::graphics::drawable::Drawable_Callback>
{
public:

	static ref<TransitionDrawable> new_object(ref<link::java::array<android::graphics::drawable::Drawable>> layers);
	void startTransition(jint durationMillis);
	void resetTransition();
	void reverseTransition(jint duration);
	void draw(ref<android::graphics::Canvas> canvas);
	void setCrossFadeEnabled(jboolean enabled);
	jboolean isCrossFadeEnabled();

protected:

	TransitionDrawable(handle_type h) : base_(h) {}

};

} // namespace android::graphics::drawable
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>

namespace scapix::java_api {
namespace android::graphics::drawable {

inline ref<TransitionDrawable> TransitionDrawable::new_object(ref<link::java::array<android::graphics::drawable::Drawable>> layers) { return base_::new_object(layers); }
inline void TransitionDrawable::startTransition(jint durationMillis) { return call_method<SCAPIX_META_STRING("startTransition"), void>(durationMillis); }
inline void TransitionDrawable::resetTransition() { return call_method<SCAPIX_META_STRING("resetTransition"), void>(); }
inline void TransitionDrawable::reverseTransition(jint duration) { return call_method<SCAPIX_META_STRING("reverseTransition"), void>(duration); }
inline void TransitionDrawable::draw(ref<android::graphics::Canvas> canvas) { return call_method<SCAPIX_META_STRING("draw"), void>(canvas); }
inline void TransitionDrawable::setCrossFadeEnabled(jboolean enabled) { return call_method<SCAPIX_META_STRING("setCrossFadeEnabled"), void>(enabled); }
inline jboolean TransitionDrawable::isCrossFadeEnabled() { return call_method<SCAPIX_META_STRING("isCrossFadeEnabled"), jboolean>(); }

} // namespace android::graphics::drawable
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GRAPHICS_DRAWABLE_TRANSITIONDRAWABLE_H
