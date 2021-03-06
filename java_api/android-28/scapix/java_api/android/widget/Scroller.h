// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_WIDGET_SCROLLER_H
#define SCAPIX_ANDROID_WIDGET_SCROLLER_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::view::animation { class Interpolator; }

namespace android::widget {

class Scroller : public object_base<SCAPIX_META_STRING("android/widget/Scroller"),
	java::lang::Object>
{
public:

	static ref<Scroller> new_object(ref<android::content::Context> context);
	static ref<Scroller> new_object(ref<android::content::Context> context, ref<android::view::animation::Interpolator> interpolator);
	static ref<Scroller> new_object(ref<android::content::Context> context, ref<android::view::animation::Interpolator> interpolator, jboolean flywheel);
	void setFriction(jfloat friction);
	jboolean isFinished();
	void forceFinished(jboolean finished);
	jint getDuration();
	jint getCurrX();
	jint getCurrY();
	jfloat getCurrVelocity();
	jint getStartX();
	jint getStartY();
	jint getFinalX();
	jint getFinalY();
	jboolean computeScrollOffset();
	void startScroll(jint startX, jint startY, jint dx, jint dy);
	void startScroll(jint startX, jint startY, jint dx, jint dy, jint duration);
	void fling(jint startX, jint startY, jint velocityX, jint velocityY, jint minX, jint maxX, jint minY, jint maxY);
	void abortAnimation();
	void extendDuration(jint extend);
	jint timePassed();
	void setFinalX(jint newX);
	void setFinalY(jint newY);

protected:

	Scroller(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/view/animation/Interpolator.h>

namespace scapix::java_api {
namespace android::widget {

inline ref<Scroller> Scroller::new_object(ref<android::content::Context> context) { return base_::new_object(context); }
inline ref<Scroller> Scroller::new_object(ref<android::content::Context> context, ref<android::view::animation::Interpolator> interpolator) { return base_::new_object(context, interpolator); }
inline ref<Scroller> Scroller::new_object(ref<android::content::Context> context, ref<android::view::animation::Interpolator> interpolator, jboolean flywheel) { return base_::new_object(context, interpolator, flywheel); }
inline void Scroller::setFriction(jfloat friction) { return call_method<SCAPIX_META_STRING("setFriction"), void>(friction); }
inline jboolean Scroller::isFinished() { return call_method<SCAPIX_META_STRING("isFinished"), jboolean>(); }
inline void Scroller::forceFinished(jboolean finished) { return call_method<SCAPIX_META_STRING("forceFinished"), void>(finished); }
inline jint Scroller::getDuration() { return call_method<SCAPIX_META_STRING("getDuration"), jint>(); }
inline jint Scroller::getCurrX() { return call_method<SCAPIX_META_STRING("getCurrX"), jint>(); }
inline jint Scroller::getCurrY() { return call_method<SCAPIX_META_STRING("getCurrY"), jint>(); }
inline jfloat Scroller::getCurrVelocity() { return call_method<SCAPIX_META_STRING("getCurrVelocity"), jfloat>(); }
inline jint Scroller::getStartX() { return call_method<SCAPIX_META_STRING("getStartX"), jint>(); }
inline jint Scroller::getStartY() { return call_method<SCAPIX_META_STRING("getStartY"), jint>(); }
inline jint Scroller::getFinalX() { return call_method<SCAPIX_META_STRING("getFinalX"), jint>(); }
inline jint Scroller::getFinalY() { return call_method<SCAPIX_META_STRING("getFinalY"), jint>(); }
inline jboolean Scroller::computeScrollOffset() { return call_method<SCAPIX_META_STRING("computeScrollOffset"), jboolean>(); }
inline void Scroller::startScroll(jint startX, jint startY, jint dx, jint dy) { return call_method<SCAPIX_META_STRING("startScroll"), void>(startX, startY, dx, dy); }
inline void Scroller::startScroll(jint startX, jint startY, jint dx, jint dy, jint duration) { return call_method<SCAPIX_META_STRING("startScroll"), void>(startX, startY, dx, dy, duration); }
inline void Scroller::fling(jint startX, jint startY, jint velocityX, jint velocityY, jint minX, jint maxX, jint minY, jint maxY) { return call_method<SCAPIX_META_STRING("fling"), void>(startX, startY, velocityX, velocityY, minX, maxX, minY, maxY); }
inline void Scroller::abortAnimation() { return call_method<SCAPIX_META_STRING("abortAnimation"), void>(); }
inline void Scroller::extendDuration(jint extend) { return call_method<SCAPIX_META_STRING("extendDuration"), void>(extend); }
inline jint Scroller::timePassed() { return call_method<SCAPIX_META_STRING("timePassed"), jint>(); }
inline void Scroller::setFinalX(jint newX) { return call_method<SCAPIX_META_STRING("setFinalX"), void>(newX); }
inline void Scroller::setFinalY(jint newY) { return call_method<SCAPIX_META_STRING("setFinalY"), void>(newY); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_SCROLLER_H
