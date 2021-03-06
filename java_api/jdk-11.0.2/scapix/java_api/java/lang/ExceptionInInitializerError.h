// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/LinkageError.h>

#ifndef SCAPIX_JAVA_LANG_EXCEPTIONININITIALIZERERROR_H
#define SCAPIX_JAVA_LANG_EXCEPTIONININITIALIZERERROR_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang { class Throwable; }

namespace java::lang {

class ExceptionInInitializerError : public object_base<SCAPIX_META_STRING("java/lang/ExceptionInInitializerError"),
	java::lang::LinkageError>
{
public:

	static ref<ExceptionInInitializerError> new_object();
	static ref<ExceptionInInitializerError> new_object(ref<java::lang::Throwable> thrown);
	static ref<ExceptionInInitializerError> new_object(ref<java::lang::String> s);
	ref<java::lang::Throwable> getException();
	ref<java::lang::Throwable> getCause();

protected:

	ExceptionInInitializerError(handle_type h) : base_(h) {}

};

} // namespace java::lang
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace java::lang {

inline ref<ExceptionInInitializerError> ExceptionInInitializerError::new_object() { return base_::new_object(); }
inline ref<ExceptionInInitializerError> ExceptionInInitializerError::new_object(ref<java::lang::Throwable> thrown) { return base_::new_object(thrown); }
inline ref<ExceptionInInitializerError> ExceptionInInitializerError::new_object(ref<java::lang::String> s) { return base_::new_object(s); }
inline ref<java::lang::Throwable> ExceptionInInitializerError::getException() { return call_method<SCAPIX_META_STRING("getException"), ref<java::lang::Throwable>>(); }
inline ref<java::lang::Throwable> ExceptionInInitializerError::getCause() { return call_method<SCAPIX_META_STRING("getCause"), ref<java::lang::Throwable>>(); }

} // namespace java::lang
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_EXCEPTIONININITIALIZERERROR_H
