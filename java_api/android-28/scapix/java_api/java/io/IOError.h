// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Error.h>

#ifndef SCAPIX_JAVA_IO_IOERROR_H
#define SCAPIX_JAVA_IO_IOERROR_H

namespace scapix::java_api {

namespace java::lang { class Throwable; }

namespace java::io {

class IOError : public object_base<SCAPIX_META_STRING("java/io/IOError"),
	java::lang::Error>
{
public:

	static ref<IOError> new_object(ref<java::lang::Throwable> cause);

protected:

	IOError(handle_type h) : base_(h) {}

};

} // namespace java::io
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace java::io {

inline ref<IOError> IOError::new_object(ref<java::lang::Throwable> cause) { return base_::new_object(cause); }

} // namespace java::io
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_IO_IOERROR_H
