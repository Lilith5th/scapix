// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_PROVIDER_CONTACTSCONTRACT_DATAUSAGESTATCOLUMNS_H
#define SCAPIX_ANDROID_PROVIDER_CONTACTSCONTRACT_DATAUSAGESTATCOLUMNS_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::provider {

class ContactsContract_DataUsageStatColumns : public object_base<SCAPIX_META_STRING("android/provider/ContactsContract$DataUsageStatColumns"),
	java::lang::Object>
{
public:

	static ref<java::lang::String> LAST_TIME_USED_();
	static ref<java::lang::String> TIMES_USED_();


protected:

	ContactsContract_DataUsageStatColumns(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<java::lang::String> ContactsContract_DataUsageStatColumns::LAST_TIME_USED_() { return get_static_field<SCAPIX_META_STRING("LAST_TIME_USED"), ref<java::lang::String>>(); }
inline ref<java::lang::String> ContactsContract_DataUsageStatColumns::TIMES_USED_() { return get_static_field<SCAPIX_META_STRING("TIMES_USED"), ref<java::lang::String>>(); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_CONTACTSCONTRACT_DATAUSAGESTATCOLUMNS_H
