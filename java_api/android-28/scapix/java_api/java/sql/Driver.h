// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_SQL_DRIVER_H
#define SCAPIX_JAVA_SQL_DRIVER_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::sql { class Connection; }
namespace java::sql { class DriverPropertyInfo; }
namespace java::util { class Properties; }

namespace java::sql {

class Driver : public object_base<SCAPIX_META_STRING("java/sql/Driver"),
	java::lang::Object>
{
public:

	ref<java::sql::Connection> connect(ref<java::lang::String> p1, ref<java::util::Properties> p2);
	jboolean acceptsURL(ref<java::lang::String> p1);
	ref<link::java::array<java::sql::DriverPropertyInfo>> getPropertyInfo(ref<java::lang::String> p1, ref<java::util::Properties> p2);
	jint getMajorVersion();
	jint getMinorVersion();
	jboolean jdbcCompliant();

protected:

	Driver(handle_type h) : base_(h) {}

};

} // namespace java::sql
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/sql/Connection.h>
#include <scapix/java_api/java/sql/DriverPropertyInfo.h>
#include <scapix/java_api/java/util/Properties.h>

namespace scapix::java_api {
namespace java::sql {

inline ref<java::sql::Connection> Driver::connect(ref<java::lang::String> p1, ref<java::util::Properties> p2) { return call_method<SCAPIX_META_STRING("connect"), ref<java::sql::Connection>>(p1, p2); }
inline jboolean Driver::acceptsURL(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("acceptsURL"), jboolean>(p1); }
inline ref<link::java::array<java::sql::DriverPropertyInfo>> Driver::getPropertyInfo(ref<java::lang::String> p1, ref<java::util::Properties> p2) { return call_method<SCAPIX_META_STRING("getPropertyInfo"), ref<link::java::array<java::sql::DriverPropertyInfo>>>(p1, p2); }
inline jint Driver::getMajorVersion() { return call_method<SCAPIX_META_STRING("getMajorVersion"), jint>(); }
inline jint Driver::getMinorVersion() { return call_method<SCAPIX_META_STRING("getMinorVersion"), jint>(); }
inline jboolean Driver::jdbcCompliant() { return call_method<SCAPIX_META_STRING("jdbcCompliant"), jboolean>(); }

} // namespace java::sql
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SQL_DRIVER_H
