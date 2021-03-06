// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_UTIL_CONCURRENT_BROKENBARRIEREXCEPTION_H
#define SCAPIX_JAVA_UTIL_CONCURRENT_BROKENBARRIEREXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::util::concurrent {

class BrokenBarrierException : public object_base<SCAPIX_META_STRING("java/util/concurrent/BrokenBarrierException"),
	java::lang::Exception>
{
public:

	static ref<BrokenBarrierException> new_object();
	static ref<BrokenBarrierException> new_object(ref<java::lang::String> message);

protected:

	BrokenBarrierException(handle_type h) : base_(h) {}

};

} // namespace java::util::concurrent
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::util::concurrent {

inline ref<BrokenBarrierException> BrokenBarrierException::new_object() { return base_::new_object(); }
inline ref<BrokenBarrierException> BrokenBarrierException::new_object(ref<java::lang::String> message) { return base_::new_object(message); }

} // namespace java::util::concurrent
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_CONCURRENT_BROKENBARRIEREXCEPTION_H
