// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_NET_CREDENTIALS_H
#define SCAPIX_ANDROID_NET_CREDENTIALS_H

namespace scapix::java_api {
namespace android::net {

class Credentials : public object_base<SCAPIX_META_STRING("android/net/Credentials"),
	java::lang::Object>
{
public:

	static ref<Credentials> new_object(jint pid, jint uid, jint gid);
	jint getPid();
	jint getUid();
	jint getGid();

protected:

	Credentials(handle_type h) : base_(h) {}

};

} // namespace android::net
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::net {

inline ref<Credentials> Credentials::new_object(jint pid, jint uid, jint gid) { return base_::new_object(pid, uid, gid); }
inline jint Credentials::getPid() { return call_method<SCAPIX_META_STRING("getPid"), jint>(); }
inline jint Credentials::getUid() { return call_method<SCAPIX_META_STRING("getUid"), jint>(); }
inline jint Credentials::getGid() { return call_method<SCAPIX_META_STRING("getGid"), jint>(); }

} // namespace android::net
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NET_CREDENTIALS_H
