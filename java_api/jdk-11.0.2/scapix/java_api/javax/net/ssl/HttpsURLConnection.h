// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/net/HttpURLConnection.h>

#ifndef SCAPIX_JAVAX_NET_SSL_HTTPSURLCONNECTION_H
#define SCAPIX_JAVAX_NET_SSL_HTTPSURLCONNECTION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::security { class Principal; }
namespace java::security::cert { class Certificate; }
namespace javax::net::ssl { class HostnameVerifier; }
namespace javax::net::ssl { class SSLSocketFactory; }

namespace javax::net::ssl {

class HttpsURLConnection : public object_base<SCAPIX_META_STRING("javax/net/ssl/HttpsURLConnection"),
	java::net::HttpURLConnection>
{
public:

	ref<java::lang::String> getCipherSuite();
	ref<link::java::array<java::security::cert::Certificate>> getLocalCertificates();
	ref<link::java::array<java::security::cert::Certificate>> getServerCertificates();
	ref<java::security::Principal> getPeerPrincipal();
	ref<java::security::Principal> getLocalPrincipal();
	static void setDefaultHostnameVerifier(ref<javax::net::ssl::HostnameVerifier> v);
	static ref<javax::net::ssl::HostnameVerifier> getDefaultHostnameVerifier();
	void setHostnameVerifier(ref<javax::net::ssl::HostnameVerifier> v);
	ref<javax::net::ssl::HostnameVerifier> getHostnameVerifier();
	static void setDefaultSSLSocketFactory(ref<javax::net::ssl::SSLSocketFactory> sf);
	static ref<javax::net::ssl::SSLSocketFactory> getDefaultSSLSocketFactory();
	void setSSLSocketFactory(ref<javax::net::ssl::SSLSocketFactory> sf);
	ref<javax::net::ssl::SSLSocketFactory> getSSLSocketFactory();

protected:

	HttpsURLConnection(handle_type h) : base_(h) {}

};

} // namespace javax::net::ssl
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Principal.h>
#include <scapix/java_api/java/security/cert/Certificate.h>
#include <scapix/java_api/javax/net/ssl/HostnameVerifier.h>
#include <scapix/java_api/javax/net/ssl/SSLSocketFactory.h>

namespace scapix::java_api {
namespace javax::net::ssl {

inline ref<java::lang::String> HttpsURLConnection::getCipherSuite() { return call_method<SCAPIX_META_STRING("getCipherSuite"), ref<java::lang::String>>(); }
inline ref<link::java::array<java::security::cert::Certificate>> HttpsURLConnection::getLocalCertificates() { return call_method<SCAPIX_META_STRING("getLocalCertificates"), ref<link::java::array<java::security::cert::Certificate>>>(); }
inline ref<link::java::array<java::security::cert::Certificate>> HttpsURLConnection::getServerCertificates() { return call_method<SCAPIX_META_STRING("getServerCertificates"), ref<link::java::array<java::security::cert::Certificate>>>(); }
inline ref<java::security::Principal> HttpsURLConnection::getPeerPrincipal() { return call_method<SCAPIX_META_STRING("getPeerPrincipal"), ref<java::security::Principal>>(); }
inline ref<java::security::Principal> HttpsURLConnection::getLocalPrincipal() { return call_method<SCAPIX_META_STRING("getLocalPrincipal"), ref<java::security::Principal>>(); }
inline void HttpsURLConnection::setDefaultHostnameVerifier(ref<javax::net::ssl::HostnameVerifier> v) { return call_static_method<SCAPIX_META_STRING("setDefaultHostnameVerifier"), void>(v); }
inline ref<javax::net::ssl::HostnameVerifier> HttpsURLConnection::getDefaultHostnameVerifier() { return call_static_method<SCAPIX_META_STRING("getDefaultHostnameVerifier"), ref<javax::net::ssl::HostnameVerifier>>(); }
inline void HttpsURLConnection::setHostnameVerifier(ref<javax::net::ssl::HostnameVerifier> v) { return call_method<SCAPIX_META_STRING("setHostnameVerifier"), void>(v); }
inline ref<javax::net::ssl::HostnameVerifier> HttpsURLConnection::getHostnameVerifier() { return call_method<SCAPIX_META_STRING("getHostnameVerifier"), ref<javax::net::ssl::HostnameVerifier>>(); }
inline void HttpsURLConnection::setDefaultSSLSocketFactory(ref<javax::net::ssl::SSLSocketFactory> sf) { return call_static_method<SCAPIX_META_STRING("setDefaultSSLSocketFactory"), void>(sf); }
inline ref<javax::net::ssl::SSLSocketFactory> HttpsURLConnection::getDefaultSSLSocketFactory() { return call_static_method<SCAPIX_META_STRING("getDefaultSSLSocketFactory"), ref<javax::net::ssl::SSLSocketFactory>>(); }
inline void HttpsURLConnection::setSSLSocketFactory(ref<javax::net::ssl::SSLSocketFactory> sf) { return call_method<SCAPIX_META_STRING("setSSLSocketFactory"), void>(sf); }
inline ref<javax::net::ssl::SSLSocketFactory> HttpsURLConnection::getSSLSocketFactory() { return call_method<SCAPIX_META_STRING("getSSLSocketFactory"), ref<javax::net::ssl::SSLSocketFactory>>(); }

} // namespace javax::net::ssl
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_NET_SSL_HTTPSURLCONNECTION_H
