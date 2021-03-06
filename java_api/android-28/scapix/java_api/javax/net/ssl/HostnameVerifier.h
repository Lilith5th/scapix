// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVAX_NET_SSL_HOSTNAMEVERIFIER_H
#define SCAPIX_JAVAX_NET_SSL_HOSTNAMEVERIFIER_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace javax::net::ssl { class SSLSession; }

namespace javax::net::ssl {

class HostnameVerifier : public object_base<SCAPIX_META_STRING("javax/net/ssl/HostnameVerifier"),
	java::lang::Object>
{
public:

	jboolean verify(ref<java::lang::String> p1, ref<javax::net::ssl::SSLSession> p2);

protected:

	HostnameVerifier(handle_type h) : base_(h) {}

};

} // namespace javax::net::ssl
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/net/ssl/SSLSession.h>

namespace scapix::java_api {
namespace javax::net::ssl {

inline jboolean HostnameVerifier::verify(ref<java::lang::String> p1, ref<javax::net::ssl::SSLSession> p2) { return call_method<SCAPIX_META_STRING("verify"), jboolean>(p1, p2); }

} // namespace javax::net::ssl
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_NET_SSL_HOSTNAMEVERIFIER_H
