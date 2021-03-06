// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_SAX_ENDTEXTELEMENTLISTENER_H
#define SCAPIX_ANDROID_SAX_ENDTEXTELEMENTLISTENER_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::sax {

class EndTextElementListener : public object_base<SCAPIX_META_STRING("android/sax/EndTextElementListener"),
	java::lang::Object>
{
public:

	void end(ref<java::lang::String> p1);

protected:

	EndTextElementListener(handle_type h) : base_(h) {}

};

} // namespace android::sax
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::sax {

inline void EndTextElementListener::end(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("end"), void>(p1); }

} // namespace android::sax
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_SAX_ENDTEXTELEMENTLISTENER_H
