// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGFIELDUPDATER_H
#define SCAPIX_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGFIELDUPDATER_H

namespace scapix::java_api {

namespace java::lang { class Class; }
namespace java::lang { class String; }
namespace java::util::function { class LongBinaryOperator; }
namespace java::util::function { class LongUnaryOperator; }

namespace java::util::concurrent::atomic {

class AtomicLongFieldUpdater : public object_base<SCAPIX_META_STRING("java/util/concurrent/atomic/AtomicLongFieldUpdater"),
	java::lang::Object>
{
public:

	static ref<java::util::concurrent::atomic::AtomicLongFieldUpdater> newUpdater(ref<java::lang::Class> tclass, ref<java::lang::String> fieldName);
	jboolean compareAndSet(ref<java::lang::Object> p1, jlong p2, jlong p3);
	jboolean weakCompareAndSet(ref<java::lang::Object> p1, jlong p2, jlong p3);
	void set(ref<java::lang::Object> p1, jlong p2);
	void lazySet(ref<java::lang::Object> p1, jlong p2);
	jlong get(ref<java::lang::Object> p1);
	jlong getAndSet(ref<java::lang::Object> obj, jlong newValue);
	jlong getAndIncrement(ref<java::lang::Object> obj);
	jlong getAndDecrement(ref<java::lang::Object> obj);
	jlong getAndAdd(ref<java::lang::Object> obj, jlong delta);
	jlong incrementAndGet(ref<java::lang::Object> obj);
	jlong decrementAndGet(ref<java::lang::Object> obj);
	jlong addAndGet(ref<java::lang::Object> obj, jlong delta);
	jlong getAndUpdate(ref<java::lang::Object> obj, ref<java::util::function::LongUnaryOperator> updateFunction);
	jlong updateAndGet(ref<java::lang::Object> obj, ref<java::util::function::LongUnaryOperator> updateFunction);
	jlong getAndAccumulate(ref<java::lang::Object> obj, jlong x, ref<java::util::function::LongBinaryOperator> p3);
	jlong accumulateAndGet(ref<java::lang::Object> obj, jlong x, ref<java::util::function::LongBinaryOperator> p3);

protected:

	AtomicLongFieldUpdater(handle_type h) : base_(h) {}

};

} // namespace java::util::concurrent::atomic
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/function/LongBinaryOperator.h>
#include <scapix/java_api/java/util/function/LongUnaryOperator.h>

namespace scapix::java_api {
namespace java::util::concurrent::atomic {

inline ref<java::util::concurrent::atomic::AtomicLongFieldUpdater> AtomicLongFieldUpdater::newUpdater(ref<java::lang::Class> tclass, ref<java::lang::String> fieldName) { return call_static_method<SCAPIX_META_STRING("newUpdater"), ref<java::util::concurrent::atomic::AtomicLongFieldUpdater>>(tclass, fieldName); }
inline jboolean AtomicLongFieldUpdater::compareAndSet(ref<java::lang::Object> p1, jlong p2, jlong p3) { return call_method<SCAPIX_META_STRING("compareAndSet"), jboolean>(p1, p2, p3); }
inline jboolean AtomicLongFieldUpdater::weakCompareAndSet(ref<java::lang::Object> p1, jlong p2, jlong p3) { return call_method<SCAPIX_META_STRING("weakCompareAndSet"), jboolean>(p1, p2, p3); }
inline void AtomicLongFieldUpdater::set(ref<java::lang::Object> p1, jlong p2) { return call_method<SCAPIX_META_STRING("set"), void>(p1, p2); }
inline void AtomicLongFieldUpdater::lazySet(ref<java::lang::Object> p1, jlong p2) { return call_method<SCAPIX_META_STRING("lazySet"), void>(p1, p2); }
inline jlong AtomicLongFieldUpdater::get(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("get"), jlong>(p1); }
inline jlong AtomicLongFieldUpdater::getAndSet(ref<java::lang::Object> obj, jlong newValue) { return call_method<SCAPIX_META_STRING("getAndSet"), jlong>(obj, newValue); }
inline jlong AtomicLongFieldUpdater::getAndIncrement(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("getAndIncrement"), jlong>(obj); }
inline jlong AtomicLongFieldUpdater::getAndDecrement(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("getAndDecrement"), jlong>(obj); }
inline jlong AtomicLongFieldUpdater::getAndAdd(ref<java::lang::Object> obj, jlong delta) { return call_method<SCAPIX_META_STRING("getAndAdd"), jlong>(obj, delta); }
inline jlong AtomicLongFieldUpdater::incrementAndGet(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("incrementAndGet"), jlong>(obj); }
inline jlong AtomicLongFieldUpdater::decrementAndGet(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("decrementAndGet"), jlong>(obj); }
inline jlong AtomicLongFieldUpdater::addAndGet(ref<java::lang::Object> obj, jlong delta) { return call_method<SCAPIX_META_STRING("addAndGet"), jlong>(obj, delta); }
inline jlong AtomicLongFieldUpdater::getAndUpdate(ref<java::lang::Object> obj, ref<java::util::function::LongUnaryOperator> updateFunction) { return call_method<SCAPIX_META_STRING("getAndUpdate"), jlong>(obj, updateFunction); }
inline jlong AtomicLongFieldUpdater::updateAndGet(ref<java::lang::Object> obj, ref<java::util::function::LongUnaryOperator> updateFunction) { return call_method<SCAPIX_META_STRING("updateAndGet"), jlong>(obj, updateFunction); }
inline jlong AtomicLongFieldUpdater::getAndAccumulate(ref<java::lang::Object> obj, jlong x, ref<java::util::function::LongBinaryOperator> p3) { return call_method<SCAPIX_META_STRING("getAndAccumulate"), jlong>(obj, x, p3); }
inline jlong AtomicLongFieldUpdater::accumulateAndGet(ref<java::lang::Object> obj, jlong x, ref<java::util::function::LongBinaryOperator> p3) { return call_method<SCAPIX_META_STRING("accumulateAndGet"), jlong>(obj, x, p3); }

} // namespace java::util::concurrent::atomic
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGFIELDUPDATER_H
