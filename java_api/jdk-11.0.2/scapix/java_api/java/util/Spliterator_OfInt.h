// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Spliterator_OfPrimitive.h>

#ifndef SCAPIX_JAVA_UTIL_SPLITERATOR_OFINT_H
#define SCAPIX_JAVA_UTIL_SPLITERATOR_OFINT_H

namespace scapix::java_api {

namespace java::util::function { class Consumer; }
namespace java::util::function { class IntConsumer; }

namespace java::util {

class Spliterator_OfInt : public object_base<SCAPIX_META_STRING("java/util/Spliterator$OfInt"),
	java::lang::Object,
	java::util::Spliterator_OfPrimitive>
{
public:

	ref<java::util::Spliterator_OfInt> trySplit();
	jboolean tryAdvance(ref<java::util::function::IntConsumer> p1);
	void forEachRemaining(ref<java::util::function::IntConsumer> action);
	jboolean tryAdvance(ref<java::util::function::Consumer> action);
	void forEachRemaining(ref<java::util::function::Consumer> action);

protected:

	Spliterator_OfInt(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/java/util/function/IntConsumer.h>

namespace scapix::java_api {
namespace java::util {

inline ref<java::util::Spliterator_OfInt> Spliterator_OfInt::trySplit() { return call_method<SCAPIX_META_STRING("trySplit"), ref<java::util::Spliterator_OfInt>>(); }
inline jboolean Spliterator_OfInt::tryAdvance(ref<java::util::function::IntConsumer> p1) { return call_method<SCAPIX_META_STRING("tryAdvance"), jboolean>(p1); }
inline void Spliterator_OfInt::forEachRemaining(ref<java::util::function::IntConsumer> action) { return call_method<SCAPIX_META_STRING("forEachRemaining"), void>(action); }
inline jboolean Spliterator_OfInt::tryAdvance(ref<java::util::function::Consumer> action) { return call_method<SCAPIX_META_STRING("tryAdvance"), jboolean>(action); }
inline void Spliterator_OfInt::forEachRemaining(ref<java::util::function::Consumer> action) { return call_method<SCAPIX_META_STRING("forEachRemaining"), void>(action); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_SPLITERATOR_OFINT_H
