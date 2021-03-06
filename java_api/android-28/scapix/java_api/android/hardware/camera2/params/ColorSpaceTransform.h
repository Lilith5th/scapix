// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_HARDWARE_CAMERA2_PARAMS_COLORSPACETRANSFORM_H
#define SCAPIX_ANDROID_HARDWARE_CAMERA2_PARAMS_COLORSPACETRANSFORM_H

namespace scapix::java_api {

namespace android::util { class Rational; }
namespace java::lang { class String; }

namespace android::hardware::camera2::params {

class ColorSpaceTransform : public object_base<SCAPIX_META_STRING("android/hardware/camera2/params/ColorSpaceTransform"),
	java::lang::Object>
{
public:

	static ref<ColorSpaceTransform> new_object(ref<link::java::array<android::util::Rational>> elements);
	static ref<ColorSpaceTransform> new_object(ref<link::java::array<jint>> elements);
	ref<android::util::Rational> getElement(jint column, jint row);
	void copyElements(ref<link::java::array<android::util::Rational>> destination, jint offset);
	void copyElements(ref<link::java::array<jint>> destination, jint offset);
	jboolean equals(ref<java::lang::Object> obj);
	jint hashCode();
	ref<java::lang::String> toString();

protected:

	ColorSpaceTransform(handle_type h) : base_(h) {}

};

} // namespace android::hardware::camera2::params
} // namespace scapix::java_api

#include <scapix/java_api/android/util/Rational.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::hardware::camera2::params {

inline ref<ColorSpaceTransform> ColorSpaceTransform::new_object(ref<link::java::array<android::util::Rational>> elements) { return base_::new_object(elements); }
inline ref<ColorSpaceTransform> ColorSpaceTransform::new_object(ref<link::java::array<jint>> elements) { return base_::new_object(elements); }
inline ref<android::util::Rational> ColorSpaceTransform::getElement(jint column, jint row) { return call_method<SCAPIX_META_STRING("getElement"), ref<android::util::Rational>>(column, row); }
inline void ColorSpaceTransform::copyElements(ref<link::java::array<android::util::Rational>> destination, jint offset) { return call_method<SCAPIX_META_STRING("copyElements"), void>(destination, offset); }
inline void ColorSpaceTransform::copyElements(ref<link::java::array<jint>> destination, jint offset) { return call_method<SCAPIX_META_STRING("copyElements"), void>(destination, offset); }
inline jboolean ColorSpaceTransform::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jint ColorSpaceTransform::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> ColorSpaceTransform::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::hardware::camera2::params
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_HARDWARE_CAMERA2_PARAMS_COLORSPACETRANSFORM_H
