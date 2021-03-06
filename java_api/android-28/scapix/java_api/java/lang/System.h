// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_LANG_SYSTEM_H
#define SCAPIX_JAVA_LANG_SYSTEM_H

namespace scapix::java_api {

namespace java::io { class Console; }
namespace java::io { class InputStream; }
namespace java::io { class PrintStream; }
namespace java::lang { class SecurityManager; }
namespace java::lang { class String; }
namespace java::nio::channels { class Channel; }
namespace java::util { class Map; }
namespace java::util { class Properties; }

namespace java::lang {

class System : public object_base<SCAPIX_META_STRING("java/lang/System"),
	java::lang::Object>
{
public:

	static ref<java::io::PrintStream> err();
	static ref<java::io::InputStream> in();
	static ref<java::io::PrintStream> out();

	static void setIn(ref<java::io::InputStream> in);
	static void setOut(ref<java::io::PrintStream> out);
	static void setErr(ref<java::io::PrintStream> err);
	static ref<java::io::Console> console();
	static ref<java::nio::channels::Channel> inheritedChannel();
	static void setSecurityManager(ref<java::lang::SecurityManager> s);
	static ref<java::lang::SecurityManager> getSecurityManager();
	static jlong currentTimeMillis();
	static jlong nanoTime();
	static void arraycopy(ref<java::lang::Object> p1, jint p2, ref<java::lang::Object> p3, jint p4, jint p5);
	static jint identityHashCode(ref<java::lang::Object> x);
	static ref<java::util::Properties> getProperties();
	static ref<java::lang::String> lineSeparator();
	static void setProperties(ref<java::util::Properties> props);
	static ref<java::lang::String> getProperty(ref<java::lang::String> key);
	static ref<java::lang::String> getProperty(ref<java::lang::String> key, ref<java::lang::String> def);
	static ref<java::lang::String> setProperty(ref<java::lang::String> key, ref<java::lang::String> value);
	static ref<java::lang::String> clearProperty(ref<java::lang::String> key);
	static ref<java::lang::String> getenv(ref<java::lang::String> name);
	static ref<java::util::Map> getenv();
	static void exit(jint status);
	static void gc();
	static void runFinalization();
	static void runFinalizersOnExit(jboolean value);
	static void load(ref<java::lang::String> filename);
	static void loadLibrary(ref<java::lang::String> libname);
	static ref<java::lang::String> mapLibraryName(ref<java::lang::String> p1);

protected:

	System(handle_type h) : base_(h) {}

};

} // namespace java::lang
} // namespace scapix::java_api

#include <scapix/java_api/java/io/Console.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/PrintStream.h>
#include <scapix/java_api/java/lang/SecurityManager.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/channels/Channel.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/Properties.h>

namespace scapix::java_api {
namespace java::lang {

inline ref<java::io::PrintStream> System::err() { return get_static_field<SCAPIX_META_STRING("err"), ref<java::io::PrintStream>>(); }
inline ref<java::io::InputStream> System::in() { return get_static_field<SCAPIX_META_STRING("in"), ref<java::io::InputStream>>(); }
inline ref<java::io::PrintStream> System::out() { return get_static_field<SCAPIX_META_STRING("out"), ref<java::io::PrintStream>>(); }
inline void System::setIn(ref<java::io::InputStream> in) { return call_static_method<SCAPIX_META_STRING("setIn"), void>(in); }
inline void System::setOut(ref<java::io::PrintStream> out) { return call_static_method<SCAPIX_META_STRING("setOut"), void>(out); }
inline void System::setErr(ref<java::io::PrintStream> err) { return call_static_method<SCAPIX_META_STRING("setErr"), void>(err); }
inline ref<java::io::Console> System::console() { return call_static_method<SCAPIX_META_STRING("console"), ref<java::io::Console>>(); }
inline ref<java::nio::channels::Channel> System::inheritedChannel() { return call_static_method<SCAPIX_META_STRING("inheritedChannel"), ref<java::nio::channels::Channel>>(); }
inline void System::setSecurityManager(ref<java::lang::SecurityManager> s) { return call_static_method<SCAPIX_META_STRING("setSecurityManager"), void>(s); }
inline ref<java::lang::SecurityManager> System::getSecurityManager() { return call_static_method<SCAPIX_META_STRING("getSecurityManager"), ref<java::lang::SecurityManager>>(); }
inline jlong System::currentTimeMillis() { return call_static_method<SCAPIX_META_STRING("currentTimeMillis"), jlong>(); }
inline jlong System::nanoTime() { return call_static_method<SCAPIX_META_STRING("nanoTime"), jlong>(); }
inline void System::arraycopy(ref<java::lang::Object> p1, jint p2, ref<java::lang::Object> p3, jint p4, jint p5) { return call_static_method<SCAPIX_META_STRING("arraycopy"), void>(p1, p2, p3, p4, p5); }
inline jint System::identityHashCode(ref<java::lang::Object> x) { return call_static_method<SCAPIX_META_STRING("identityHashCode"), jint>(x); }
inline ref<java::util::Properties> System::getProperties() { return call_static_method<SCAPIX_META_STRING("getProperties"), ref<java::util::Properties>>(); }
inline ref<java::lang::String> System::lineSeparator() { return call_static_method<SCAPIX_META_STRING("lineSeparator"), ref<java::lang::String>>(); }
inline void System::setProperties(ref<java::util::Properties> props) { return call_static_method<SCAPIX_META_STRING("setProperties"), void>(props); }
inline ref<java::lang::String> System::getProperty(ref<java::lang::String> key) { return call_static_method<SCAPIX_META_STRING("getProperty"), ref<java::lang::String>>(key); }
inline ref<java::lang::String> System::getProperty(ref<java::lang::String> key, ref<java::lang::String> def) { return call_static_method<SCAPIX_META_STRING("getProperty"), ref<java::lang::String>>(key, def); }
inline ref<java::lang::String> System::setProperty(ref<java::lang::String> key, ref<java::lang::String> value) { return call_static_method<SCAPIX_META_STRING("setProperty"), ref<java::lang::String>>(key, value); }
inline ref<java::lang::String> System::clearProperty(ref<java::lang::String> key) { return call_static_method<SCAPIX_META_STRING("clearProperty"), ref<java::lang::String>>(key); }
inline ref<java::lang::String> System::getenv(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("getenv"), ref<java::lang::String>>(name); }
inline ref<java::util::Map> System::getenv() { return call_static_method<SCAPIX_META_STRING("getenv"), ref<java::util::Map>>(); }
inline void System::exit(jint status) { return call_static_method<SCAPIX_META_STRING("exit"), void>(status); }
inline void System::gc() { return call_static_method<SCAPIX_META_STRING("gc"), void>(); }
inline void System::runFinalization() { return call_static_method<SCAPIX_META_STRING("runFinalization"), void>(); }
inline void System::runFinalizersOnExit(jboolean value) { return call_static_method<SCAPIX_META_STRING("runFinalizersOnExit"), void>(value); }
inline void System::load(ref<java::lang::String> filename) { return call_static_method<SCAPIX_META_STRING("load"), void>(filename); }
inline void System::loadLibrary(ref<java::lang::String> libname) { return call_static_method<SCAPIX_META_STRING("loadLibrary"), void>(libname); }
inline ref<java::lang::String> System::mapLibraryName(ref<java::lang::String> p1) { return call_static_method<SCAPIX_META_STRING("mapLibraryName"), ref<java::lang::String>>(p1); }

} // namespace java::lang
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_SYSTEM_H
