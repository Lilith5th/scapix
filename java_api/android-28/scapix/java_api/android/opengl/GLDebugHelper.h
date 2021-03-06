// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_OPENGL_GLDEBUGHELPER_H
#define SCAPIX_ANDROID_OPENGL_GLDEBUGHELPER_H

namespace scapix::java_api {

namespace java::io { class Writer; }
namespace javax::microedition::khronos::egl { class EGL; }
namespace javax::microedition::khronos::opengles { class GL; }

namespace android::opengl {

class GLDebugHelper : public object_base<SCAPIX_META_STRING("android/opengl/GLDebugHelper"),
	java::lang::Object>
{
public:

	static jint CONFIG_CHECK_GL_ERROR_();
	static jint CONFIG_CHECK_THREAD_();
	static jint CONFIG_LOG_ARGUMENT_NAMES_();
	static jint ERROR_WRONG_THREAD_();

	static ref<GLDebugHelper> new_object();
	static ref<javax::microedition::khronos::opengles::GL> wrap(ref<javax::microedition::khronos::opengles::GL> gl, jint configFlags, ref<java::io::Writer> log);
	static ref<javax::microedition::khronos::egl::EGL> wrap(ref<javax::microedition::khronos::egl::EGL> egl, jint configFlags, ref<java::io::Writer> log);

protected:

	GLDebugHelper(handle_type h) : base_(h) {}

};

} // namespace android::opengl
} // namespace scapix::java_api

#include <scapix/java_api/java/io/Writer.h>
#include <scapix/java_api/javax/microedition/khronos/egl/EGL.h>
#include <scapix/java_api/javax/microedition/khronos/opengles/GL.h>

namespace scapix::java_api {
namespace android::opengl {

inline jint GLDebugHelper::CONFIG_CHECK_GL_ERROR_() { return get_static_field<SCAPIX_META_STRING("CONFIG_CHECK_GL_ERROR"), jint>(); }
inline jint GLDebugHelper::CONFIG_CHECK_THREAD_() { return get_static_field<SCAPIX_META_STRING("CONFIG_CHECK_THREAD"), jint>(); }
inline jint GLDebugHelper::CONFIG_LOG_ARGUMENT_NAMES_() { return get_static_field<SCAPIX_META_STRING("CONFIG_LOG_ARGUMENT_NAMES"), jint>(); }
inline jint GLDebugHelper::ERROR_WRONG_THREAD_() { return get_static_field<SCAPIX_META_STRING("ERROR_WRONG_THREAD"), jint>(); }
inline ref<GLDebugHelper> GLDebugHelper::new_object() { return base_::new_object(); }
inline ref<javax::microedition::khronos::opengles::GL> GLDebugHelper::wrap(ref<javax::microedition::khronos::opengles::GL> gl, jint configFlags, ref<java::io::Writer> log) { return call_static_method<SCAPIX_META_STRING("wrap"), ref<javax::microedition::khronos::opengles::GL>>(gl, configFlags, log); }
inline ref<javax::microedition::khronos::egl::EGL> GLDebugHelper::wrap(ref<javax::microedition::khronos::egl::EGL> egl, jint configFlags, ref<java::io::Writer> log) { return call_static_method<SCAPIX_META_STRING("wrap"), ref<javax::microedition::khronos::egl::EGL>>(egl, configFlags, log); }

} // namespace android::opengl
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OPENGL_GLDEBUGHELPER_H
