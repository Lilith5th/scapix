// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/text/TextUtils_StringSplitter.h>
#include <scapix/java_api/java/util/Iterator.h>

#ifndef SCAPIX_ANDROID_TEXT_TEXTUTILS_SIMPLESTRINGSPLITTER_H
#define SCAPIX_ANDROID_TEXT_TEXTUTILS_SIMPLESTRINGSPLITTER_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::text {

class TextUtils_SimpleStringSplitter : public object_base<SCAPIX_META_STRING("android/text/TextUtils$SimpleStringSplitter"),
	java::lang::Object,
	android::text::TextUtils_StringSplitter,
	java::util::Iterator>
{
public:

	static ref<TextUtils_SimpleStringSplitter> new_object(jchar delimiter);
	void setString(ref<java::lang::String> string);
	ref<java::util::Iterator> iterator();
	jboolean hasNext();
	ref<java::lang::String> next();
	void remove();

protected:

	TextUtils_SimpleStringSplitter(handle_type h) : base_(h) {}

};

} // namespace android::text
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::text {

inline ref<TextUtils_SimpleStringSplitter> TextUtils_SimpleStringSplitter::new_object(jchar delimiter) { return base_::new_object(delimiter); }
inline void TextUtils_SimpleStringSplitter::setString(ref<java::lang::String> string) { return call_method<SCAPIX_META_STRING("setString"), void>(string); }
inline ref<java::util::Iterator> TextUtils_SimpleStringSplitter::iterator() { return call_method<SCAPIX_META_STRING("iterator"), ref<java::util::Iterator>>(); }
inline jboolean TextUtils_SimpleStringSplitter::hasNext() { return call_method<SCAPIX_META_STRING("hasNext"), jboolean>(); }
inline ref<java::lang::String> TextUtils_SimpleStringSplitter::next() { return call_method<SCAPIX_META_STRING("next"), ref<java::lang::String>>(); }
inline void TextUtils_SimpleStringSplitter::remove() { return call_method<SCAPIX_META_STRING("remove"), void>(); }

} // namespace android::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_TEXTUTILS_SIMPLESTRINGSPLITTER_H
