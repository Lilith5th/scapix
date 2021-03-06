// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_LANG_MODULE_MODULEDESCRIPTOR_OPENS_MODIFIER_H
#define SCAPIX_JAVA_LANG_MODULE_MODULEDESCRIPTOR_OPENS_MODIFIER_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::lang::module {

class ModuleDescriptor_Opens_Modifier : public object_base<SCAPIX_META_STRING("java/lang/module/ModuleDescriptor$Opens$Modifier"),
	java::lang::Enum>
{
public:

	static ref<java::lang::module::ModuleDescriptor_Opens_Modifier> SYNTHETIC_();
	static ref<java::lang::module::ModuleDescriptor_Opens_Modifier> MANDATED_();

	static ref<link::java::array<java::lang::module::ModuleDescriptor_Opens_Modifier>> values();
	static ref<java::lang::module::ModuleDescriptor_Opens_Modifier> valueOf(ref<java::lang::String> name);

protected:

	ModuleDescriptor_Opens_Modifier(handle_type h) : base_(h) {}

};

} // namespace java::lang::module
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::lang::module {

inline ref<java::lang::module::ModuleDescriptor_Opens_Modifier> ModuleDescriptor_Opens_Modifier::SYNTHETIC_() { return get_static_field<SCAPIX_META_STRING("SYNTHETIC"), ref<java::lang::module::ModuleDescriptor_Opens_Modifier>>(); }
inline ref<java::lang::module::ModuleDescriptor_Opens_Modifier> ModuleDescriptor_Opens_Modifier::MANDATED_() { return get_static_field<SCAPIX_META_STRING("MANDATED"), ref<java::lang::module::ModuleDescriptor_Opens_Modifier>>(); }
inline ref<link::java::array<java::lang::module::ModuleDescriptor_Opens_Modifier>> ModuleDescriptor_Opens_Modifier::values() { return call_static_method<SCAPIX_META_STRING("values"), ref<link::java::array<java::lang::module::ModuleDescriptor_Opens_Modifier>>>(); }
inline ref<java::lang::module::ModuleDescriptor_Opens_Modifier> ModuleDescriptor_Opens_Modifier::valueOf(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<java::lang::module::ModuleDescriptor_Opens_Modifier>>(name); }

} // namespace java::lang::module
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_MODULE_MODULEDESCRIPTOR_OPENS_MODIFIER_H
