// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_PROVIDER_SYNCSTATECONTRACT_HELPERS_H
#define SCAPIX_ANDROID_PROVIDER_SYNCSTATECONTRACT_HELPERS_H

namespace scapix::java_api {

namespace android::accounts { class Account; }
namespace android::content { class ContentProviderClient; }
namespace android::content { class ContentProviderOperation; }
namespace android::net { class Uri; }
namespace android::util { class Pair; }

namespace android::provider {

class SyncStateContract_Helpers : public object_base<SCAPIX_META_STRING("android/provider/SyncStateContract$Helpers"),
	java::lang::Object>
{
public:

	static ref<SyncStateContract_Helpers> new_object();
	static ref<link::java::array<jbyte>> get(ref<android::content::ContentProviderClient> provider, ref<android::net::Uri> uri, ref<android::accounts::Account> account);
	static void set(ref<android::content::ContentProviderClient> provider, ref<android::net::Uri> uri, ref<android::accounts::Account> account, ref<link::java::array<jbyte>> data);
	static ref<android::net::Uri> insert(ref<android::content::ContentProviderClient> provider, ref<android::net::Uri> uri, ref<android::accounts::Account> account, ref<link::java::array<jbyte>> data);
	static void update(ref<android::content::ContentProviderClient> provider, ref<android::net::Uri> uri, ref<link::java::array<jbyte>> data);
	static ref<android::util::Pair> getWithUri(ref<android::content::ContentProviderClient> provider, ref<android::net::Uri> uri, ref<android::accounts::Account> account);
	static ref<android::content::ContentProviderOperation> newSetOperation(ref<android::net::Uri> uri, ref<android::accounts::Account> account, ref<link::java::array<jbyte>> data);
	static ref<android::content::ContentProviderOperation> newUpdateOperation(ref<android::net::Uri> uri, ref<link::java::array<jbyte>> data);

protected:

	SyncStateContract_Helpers(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/android/accounts/Account.h>
#include <scapix/java_api/android/content/ContentProviderClient.h>
#include <scapix/java_api/android/content/ContentProviderOperation.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/util/Pair.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<SyncStateContract_Helpers> SyncStateContract_Helpers::new_object() { return base_::new_object(); }
inline ref<link::java::array<jbyte>> SyncStateContract_Helpers::get(ref<android::content::ContentProviderClient> provider, ref<android::net::Uri> uri, ref<android::accounts::Account> account) { return call_static_method<SCAPIX_META_STRING("get"), ref<link::java::array<jbyte>>>(provider, uri, account); }
inline void SyncStateContract_Helpers::set(ref<android::content::ContentProviderClient> provider, ref<android::net::Uri> uri, ref<android::accounts::Account> account, ref<link::java::array<jbyte>> data) { return call_static_method<SCAPIX_META_STRING("set"), void>(provider, uri, account, data); }
inline ref<android::net::Uri> SyncStateContract_Helpers::insert(ref<android::content::ContentProviderClient> provider, ref<android::net::Uri> uri, ref<android::accounts::Account> account, ref<link::java::array<jbyte>> data) { return call_static_method<SCAPIX_META_STRING("insert"), ref<android::net::Uri>>(provider, uri, account, data); }
inline void SyncStateContract_Helpers::update(ref<android::content::ContentProviderClient> provider, ref<android::net::Uri> uri, ref<link::java::array<jbyte>> data) { return call_static_method<SCAPIX_META_STRING("update"), void>(provider, uri, data); }
inline ref<android::util::Pair> SyncStateContract_Helpers::getWithUri(ref<android::content::ContentProviderClient> provider, ref<android::net::Uri> uri, ref<android::accounts::Account> account) { return call_static_method<SCAPIX_META_STRING("getWithUri"), ref<android::util::Pair>>(provider, uri, account); }
inline ref<android::content::ContentProviderOperation> SyncStateContract_Helpers::newSetOperation(ref<android::net::Uri> uri, ref<android::accounts::Account> account, ref<link::java::array<jbyte>> data) { return call_static_method<SCAPIX_META_STRING("newSetOperation"), ref<android::content::ContentProviderOperation>>(uri, account, data); }
inline ref<android::content::ContentProviderOperation> SyncStateContract_Helpers::newUpdateOperation(ref<android::net::Uri> uri, ref<link::java::array<jbyte>> data) { return call_static_method<SCAPIX_META_STRING("newUpdateOperation"), ref<android::content::ContentProviderOperation>>(uri, data); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_SYNCSTATECONTRACT_HELPERS_H
