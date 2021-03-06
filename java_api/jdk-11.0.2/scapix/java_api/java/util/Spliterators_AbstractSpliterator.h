// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Spliterator.h>

#ifndef SCAPIX_JAVA_UTIL_SPLITERATORS_ABSTRACTSPLITERATOR_H
#define SCAPIX_JAVA_UTIL_SPLITERATORS_ABSTRACTSPLITERATOR_H

namespace scapix::java_api {


namespace java::util {

class Spliterators_AbstractSpliterator : public object_base<SCAPIX_META_STRING("java/util/Spliterators$AbstractSpliterator"),
	java::lang::Object,
	java::util::Spliterator>
{
public:

	ref<java::util::Spliterator> trySplit();
	jlong estimateSize();
	jint characteristics();

protected:

	Spliterators_AbstractSpliterator(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::util {

inline ref<java::util::Spliterator> Spliterators_AbstractSpliterator::trySplit() { return call_method<SCAPIX_META_STRING("trySplit"), ref<java::util::Spliterator>>(); }
inline jlong Spliterators_AbstractSpliterator::estimateSize() { return call_method<SCAPIX_META_STRING("estimateSize"), jlong>(); }
inline jint Spliterators_AbstractSpliterator::characteristics() { return call_method<SCAPIX_META_STRING("characteristics"), jint>(); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_SPLITERATORS_ABSTRACTSPLITERATOR_H
