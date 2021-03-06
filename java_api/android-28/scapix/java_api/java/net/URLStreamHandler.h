// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_NET_URLSTREAMHANDLER_H
#define SCAPIX_JAVA_NET_URLSTREAMHANDLER_H

namespace scapix::java_api {
namespace java::net {

class URLStreamHandler : public object_base<SCAPIX_META_STRING("java/net/URLStreamHandler"),
	java::lang::Object>
{
public:

	static ref<URLStreamHandler> new_object();

protected:

	URLStreamHandler(handle_type h) : base_(h) {}

};

} // namespace java::net
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::net {

inline ref<URLStreamHandler> URLStreamHandler::new_object() { return base_::new_object(); }

} // namespace java::net
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NET_URLSTREAMHANDLER_H
