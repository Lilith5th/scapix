// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_NET_WIFI_AWARE_DISCOVERYSESSIONCALLBACK_H
#define SCAPIX_ANDROID_NET_WIFI_AWARE_DISCOVERYSESSIONCALLBACK_H

namespace scapix::java_api {

namespace android::net::wifi::aware { class PeerHandle; }
namespace android::net::wifi::aware { class PublishDiscoverySession; }
namespace android::net::wifi::aware { class SubscribeDiscoverySession; }
namespace java::util { class List; }

namespace android::net::wifi::aware {

class DiscoverySessionCallback : public object_base<SCAPIX_META_STRING("android/net/wifi/aware/DiscoverySessionCallback"),
	java::lang::Object>
{
public:

	static ref<DiscoverySessionCallback> new_object();
	void onPublishStarted(ref<android::net::wifi::aware::PublishDiscoverySession> session);
	void onSubscribeStarted(ref<android::net::wifi::aware::SubscribeDiscoverySession> session);
	void onSessionConfigUpdated();
	void onSessionConfigFailed();
	void onSessionTerminated();
	void onServiceDiscovered(ref<android::net::wifi::aware::PeerHandle> peerHandle, ref<link::java::array<jbyte>> serviceSpecificInfo, ref<java::util::List> matchFilter);
	void onServiceDiscoveredWithinRange(ref<android::net::wifi::aware::PeerHandle> peerHandle, ref<link::java::array<jbyte>> serviceSpecificInfo, ref<java::util::List> matchFilter, jint distanceMm);
	void onMessageSendSucceeded(jint messageId);
	void onMessageSendFailed(jint messageId);
	void onMessageReceived(ref<android::net::wifi::aware::PeerHandle> peerHandle, ref<link::java::array<jbyte>> message);

protected:

	DiscoverySessionCallback(handle_type h) : base_(h) {}

};

} // namespace android::net::wifi::aware
} // namespace scapix::java_api

#include <scapix/java_api/android/net/wifi/aware/PeerHandle.h>
#include <scapix/java_api/android/net/wifi/aware/PublishDiscoverySession.h>
#include <scapix/java_api/android/net/wifi/aware/SubscribeDiscoverySession.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace android::net::wifi::aware {

inline ref<DiscoverySessionCallback> DiscoverySessionCallback::new_object() { return base_::new_object(); }
inline void DiscoverySessionCallback::onPublishStarted(ref<android::net::wifi::aware::PublishDiscoverySession> session) { return call_method<SCAPIX_META_STRING("onPublishStarted"), void>(session); }
inline void DiscoverySessionCallback::onSubscribeStarted(ref<android::net::wifi::aware::SubscribeDiscoverySession> session) { return call_method<SCAPIX_META_STRING("onSubscribeStarted"), void>(session); }
inline void DiscoverySessionCallback::onSessionConfigUpdated() { return call_method<SCAPIX_META_STRING("onSessionConfigUpdated"), void>(); }
inline void DiscoverySessionCallback::onSessionConfigFailed() { return call_method<SCAPIX_META_STRING("onSessionConfigFailed"), void>(); }
inline void DiscoverySessionCallback::onSessionTerminated() { return call_method<SCAPIX_META_STRING("onSessionTerminated"), void>(); }
inline void DiscoverySessionCallback::onServiceDiscovered(ref<android::net::wifi::aware::PeerHandle> peerHandle, ref<link::java::array<jbyte>> serviceSpecificInfo, ref<java::util::List> matchFilter) { return call_method<SCAPIX_META_STRING("onServiceDiscovered"), void>(peerHandle, serviceSpecificInfo, matchFilter); }
inline void DiscoverySessionCallback::onServiceDiscoveredWithinRange(ref<android::net::wifi::aware::PeerHandle> peerHandle, ref<link::java::array<jbyte>> serviceSpecificInfo, ref<java::util::List> matchFilter, jint distanceMm) { return call_method<SCAPIX_META_STRING("onServiceDiscoveredWithinRange"), void>(peerHandle, serviceSpecificInfo, matchFilter, distanceMm); }
inline void DiscoverySessionCallback::onMessageSendSucceeded(jint messageId) { return call_method<SCAPIX_META_STRING("onMessageSendSucceeded"), void>(messageId); }
inline void DiscoverySessionCallback::onMessageSendFailed(jint messageId) { return call_method<SCAPIX_META_STRING("onMessageSendFailed"), void>(messageId); }
inline void DiscoverySessionCallback::onMessageReceived(ref<android::net::wifi::aware::PeerHandle> peerHandle, ref<link::java::array<jbyte>> message) { return call_method<SCAPIX_META_STRING("onMessageReceived"), void>(peerHandle, message); }

} // namespace android::net::wifi::aware
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NET_WIFI_AWARE_DISCOVERYSESSIONCALLBACK_H
