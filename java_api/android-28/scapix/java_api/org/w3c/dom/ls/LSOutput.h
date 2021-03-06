// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ORG_W3C_DOM_LS_LSOUTPUT_H
#define SCAPIX_ORG_W3C_DOM_LS_LSOUTPUT_H

namespace scapix::java_api {

namespace java::io { class OutputStream; }
namespace java::io { class Writer; }
namespace java::lang { class String; }

namespace org::w3c::dom::ls {

class LSOutput : public object_base<SCAPIX_META_STRING("org/w3c/dom/ls/LSOutput"),
	java::lang::Object>
{
public:

	ref<java::io::Writer> getCharacterStream();
	void setCharacterStream(ref<java::io::Writer> p1);
	ref<java::io::OutputStream> getByteStream();
	void setByteStream(ref<java::io::OutputStream> p1);
	ref<java::lang::String> getSystemId();
	void setSystemId(ref<java::lang::String> p1);
	ref<java::lang::String> getEncoding();
	void setEncoding(ref<java::lang::String> p1);

protected:

	LSOutput(handle_type h) : base_(h) {}

};

} // namespace org::w3c::dom::ls
} // namespace scapix::java_api

#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/io/Writer.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace org::w3c::dom::ls {

inline ref<java::io::Writer> LSOutput::getCharacterStream() { return call_method<SCAPIX_META_STRING("getCharacterStream"), ref<java::io::Writer>>(); }
inline void LSOutput::setCharacterStream(ref<java::io::Writer> p1) { return call_method<SCAPIX_META_STRING("setCharacterStream"), void>(p1); }
inline ref<java::io::OutputStream> LSOutput::getByteStream() { return call_method<SCAPIX_META_STRING("getByteStream"), ref<java::io::OutputStream>>(); }
inline void LSOutput::setByteStream(ref<java::io::OutputStream> p1) { return call_method<SCAPIX_META_STRING("setByteStream"), void>(p1); }
inline ref<java::lang::String> LSOutput::getSystemId() { return call_method<SCAPIX_META_STRING("getSystemId"), ref<java::lang::String>>(); }
inline void LSOutput::setSystemId(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("setSystemId"), void>(p1); }
inline ref<java::lang::String> LSOutput::getEncoding() { return call_method<SCAPIX_META_STRING("getEncoding"), ref<java::lang::String>>(); }
inline void LSOutput::setEncoding(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("setEncoding"), void>(p1); }

} // namespace org::w3c::dom::ls
} // namespace scapix::java_api

#endif // SCAPIX_ORG_W3C_DOM_LS_LSOUTPUT_H
