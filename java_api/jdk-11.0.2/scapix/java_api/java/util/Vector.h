// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractList.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/RandomAccess.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_UTIL_VECTOR_H
#define SCAPIX_JAVA_UTIL_VECTOR_H

namespace scapix::java_api {

namespace java::lang { class Object; }
namespace java::lang { class String; }
namespace java::util { class Collection; }
namespace java::util { class Comparator; }
namespace java::util { class Enumeration; }
namespace java::util { class Iterator; }
namespace java::util { class ListIterator; }
namespace java::util { class Spliterator; }
namespace java::util::function { class Consumer; }
namespace java::util::function { class Predicate; }
namespace java::util::function { class UnaryOperator; }

namespace java::util {

class Vector : public object_base<SCAPIX_META_STRING("java/util/Vector"),
	java::util::AbstractList,
	java::util::List,
	java::util::RandomAccess,
	java::lang::Cloneable,
	java::io::Serializable>
{
public:

	static ref<Vector> new_object(jint initialCapacity, jint capacityIncrement);
	static ref<Vector> new_object(jint initialCapacity);
	static ref<Vector> new_object();
	static ref<Vector> new_object(ref<java::util::Collection> c);
	void copyInto(ref<link::java::array<java::lang::Object>> anArray);
	void trimToSize();
	void ensureCapacity(jint minCapacity);
	void setSize(jint newSize);
	jint capacity();
	jint size();
	jboolean isEmpty();
	ref<java::util::Enumeration> elements();
	jboolean contains(ref<java::lang::Object> o);
	jint indexOf(ref<java::lang::Object> o);
	jint indexOf(ref<java::lang::Object> o, jint index);
	jint lastIndexOf(ref<java::lang::Object> o);
	jint lastIndexOf(ref<java::lang::Object> o, jint index);
	ref<java::lang::Object> elementAt(jint index);
	ref<java::lang::Object> firstElement();
	ref<java::lang::Object> lastElement();
	void setElementAt(ref<java::lang::Object> obj, jint index);
	void removeElementAt(jint index);
	void insertElementAt(ref<java::lang::Object> obj, jint index);
	void addElement(ref<java::lang::Object> obj);
	jboolean removeElement(ref<java::lang::Object> obj);
	void removeAllElements();
	ref<java::lang::Object> clone();
	ref<link::java::array<java::lang::Object>> toArray();
	ref<link::java::array<java::lang::Object>> toArray(ref<link::java::array<java::lang::Object>> a);
	ref<java::lang::Object> get(jint index);
	ref<java::lang::Object> set(jint index, ref<java::lang::Object> element);
	jboolean add(ref<java::lang::Object> e);
	jboolean remove(ref<java::lang::Object> o);
	void add(jint index, ref<java::lang::Object> element);
	ref<java::lang::Object> remove(jint index);
	void clear();
	jboolean containsAll(ref<java::util::Collection> c);
	jboolean addAll(ref<java::util::Collection> c);
	jboolean removeAll(ref<java::util::Collection> c);
	jboolean retainAll(ref<java::util::Collection> c);
	jboolean removeIf(ref<java::util::function::Predicate> filter);
	jboolean addAll(jint index, ref<java::util::Collection> c);
	jboolean equals(ref<java::lang::Object> o);
	jint hashCode();
	ref<java::lang::String> toString();
	ref<java::util::List> subList(jint fromIndex, jint toIndex);
	ref<java::util::ListIterator> listIterator(jint index);
	ref<java::util::ListIterator> listIterator();
	ref<java::util::Iterator> iterator();
	void forEach(ref<java::util::function::Consumer> action);
	void replaceAll(ref<java::util::function::UnaryOperator> operator_);
	void sort(ref<java::util::Comparator> c);
	ref<java::util::Spliterator> spliterator();

protected:

	Vector(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/ListIterator.h>
#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/java/util/function/Predicate.h>
#include <scapix/java_api/java/util/function/UnaryOperator.h>

namespace scapix::java_api {
namespace java::util {

inline ref<Vector> Vector::new_object(jint initialCapacity, jint capacityIncrement) { return base_::new_object(initialCapacity, capacityIncrement); }
inline ref<Vector> Vector::new_object(jint initialCapacity) { return base_::new_object(initialCapacity); }
inline ref<Vector> Vector::new_object() { return base_::new_object(); }
inline ref<Vector> Vector::new_object(ref<java::util::Collection> c) { return base_::new_object(c); }
inline void Vector::copyInto(ref<link::java::array<java::lang::Object>> anArray) { return call_method<SCAPIX_META_STRING("copyInto"), void>(anArray); }
inline void Vector::trimToSize() { return call_method<SCAPIX_META_STRING("trimToSize"), void>(); }
inline void Vector::ensureCapacity(jint minCapacity) { return call_method<SCAPIX_META_STRING("ensureCapacity"), void>(minCapacity); }
inline void Vector::setSize(jint newSize) { return call_method<SCAPIX_META_STRING("setSize"), void>(newSize); }
inline jint Vector::capacity() { return call_method<SCAPIX_META_STRING("capacity"), jint>(); }
inline jint Vector::size() { return call_method<SCAPIX_META_STRING("size"), jint>(); }
inline jboolean Vector::isEmpty() { return call_method<SCAPIX_META_STRING("isEmpty"), jboolean>(); }
inline ref<java::util::Enumeration> Vector::elements() { return call_method<SCAPIX_META_STRING("elements"), ref<java::util::Enumeration>>(); }
inline jboolean Vector::contains(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("contains"), jboolean>(o); }
inline jint Vector::indexOf(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("indexOf"), jint>(o); }
inline jint Vector::indexOf(ref<java::lang::Object> o, jint index) { return call_method<SCAPIX_META_STRING("indexOf"), jint>(o, index); }
inline jint Vector::lastIndexOf(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("lastIndexOf"), jint>(o); }
inline jint Vector::lastIndexOf(ref<java::lang::Object> o, jint index) { return call_method<SCAPIX_META_STRING("lastIndexOf"), jint>(o, index); }
inline ref<java::lang::Object> Vector::elementAt(jint index) { return call_method<SCAPIX_META_STRING("elementAt"), ref<java::lang::Object>>(index); }
inline ref<java::lang::Object> Vector::firstElement() { return call_method<SCAPIX_META_STRING("firstElement"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> Vector::lastElement() { return call_method<SCAPIX_META_STRING("lastElement"), ref<java::lang::Object>>(); }
inline void Vector::setElementAt(ref<java::lang::Object> obj, jint index) { return call_method<SCAPIX_META_STRING("setElementAt"), void>(obj, index); }
inline void Vector::removeElementAt(jint index) { return call_method<SCAPIX_META_STRING("removeElementAt"), void>(index); }
inline void Vector::insertElementAt(ref<java::lang::Object> obj, jint index) { return call_method<SCAPIX_META_STRING("insertElementAt"), void>(obj, index); }
inline void Vector::addElement(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("addElement"), void>(obj); }
inline jboolean Vector::removeElement(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("removeElement"), jboolean>(obj); }
inline void Vector::removeAllElements() { return call_method<SCAPIX_META_STRING("removeAllElements"), void>(); }
inline ref<java::lang::Object> Vector::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<java::lang::Object>>(); }
inline ref<link::java::array<java::lang::Object>> Vector::toArray() { return call_method<SCAPIX_META_STRING("toArray"), ref<link::java::array<java::lang::Object>>>(); }
inline ref<link::java::array<java::lang::Object>> Vector::toArray(ref<link::java::array<java::lang::Object>> a) { return call_method<SCAPIX_META_STRING("toArray"), ref<link::java::array<java::lang::Object>>>(a); }
inline ref<java::lang::Object> Vector::get(jint index) { return call_method<SCAPIX_META_STRING("get"), ref<java::lang::Object>>(index); }
inline ref<java::lang::Object> Vector::set(jint index, ref<java::lang::Object> element) { return call_method<SCAPIX_META_STRING("set"), ref<java::lang::Object>>(index, element); }
inline jboolean Vector::add(ref<java::lang::Object> e) { return call_method<SCAPIX_META_STRING("add"), jboolean>(e); }
inline jboolean Vector::remove(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("remove"), jboolean>(o); }
inline void Vector::add(jint index, ref<java::lang::Object> element) { return call_method<SCAPIX_META_STRING("add"), void>(index, element); }
inline ref<java::lang::Object> Vector::remove(jint index) { return call_method<SCAPIX_META_STRING("remove"), ref<java::lang::Object>>(index); }
inline void Vector::clear() { return call_method<SCAPIX_META_STRING("clear"), void>(); }
inline jboolean Vector::containsAll(ref<java::util::Collection> c) { return call_method<SCAPIX_META_STRING("containsAll"), jboolean>(c); }
inline jboolean Vector::addAll(ref<java::util::Collection> c) { return call_method<SCAPIX_META_STRING("addAll"), jboolean>(c); }
inline jboolean Vector::removeAll(ref<java::util::Collection> c) { return call_method<SCAPIX_META_STRING("removeAll"), jboolean>(c); }
inline jboolean Vector::retainAll(ref<java::util::Collection> c) { return call_method<SCAPIX_META_STRING("retainAll"), jboolean>(c); }
inline jboolean Vector::removeIf(ref<java::util::function::Predicate> filter) { return call_method<SCAPIX_META_STRING("removeIf"), jboolean>(filter); }
inline jboolean Vector::addAll(jint index, ref<java::util::Collection> c) { return call_method<SCAPIX_META_STRING("addAll"), jboolean>(index, c); }
inline jboolean Vector::equals(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(o); }
inline jint Vector::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> Vector::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline ref<java::util::List> Vector::subList(jint fromIndex, jint toIndex) { return call_method<SCAPIX_META_STRING("subList"), ref<java::util::List>>(fromIndex, toIndex); }
inline ref<java::util::ListIterator> Vector::listIterator(jint index) { return call_method<SCAPIX_META_STRING("listIterator"), ref<java::util::ListIterator>>(index); }
inline ref<java::util::ListIterator> Vector::listIterator() { return call_method<SCAPIX_META_STRING("listIterator"), ref<java::util::ListIterator>>(); }
inline ref<java::util::Iterator> Vector::iterator() { return call_method<SCAPIX_META_STRING("iterator"), ref<java::util::Iterator>>(); }
inline void Vector::forEach(ref<java::util::function::Consumer> action) { return call_method<SCAPIX_META_STRING("forEach"), void>(action); }
inline void Vector::replaceAll(ref<java::util::function::UnaryOperator> operator_) { return call_method<SCAPIX_META_STRING("replaceAll"), void>(operator_); }
inline void Vector::sort(ref<java::util::Comparator> c) { return call_method<SCAPIX_META_STRING("sort"), void>(c); }
inline ref<java::util::Spliterator> Vector::spliterator() { return call_method<SCAPIX_META_STRING("spliterator"), ref<java::util::Spliterator>>(); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_VECTOR_H
