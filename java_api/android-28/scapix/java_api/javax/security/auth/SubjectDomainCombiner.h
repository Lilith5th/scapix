// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/DomainCombiner.h>

#ifndef SCAPIX_JAVAX_SECURITY_AUTH_SUBJECTDOMAINCOMBINER_H
#define SCAPIX_JAVAX_SECURITY_AUTH_SUBJECTDOMAINCOMBINER_H

namespace scapix::java_api {

namespace java::security { class ProtectionDomain; }
namespace javax::security::auth { class Subject; }

namespace javax::security::auth {

class SubjectDomainCombiner : public object_base<SCAPIX_META_STRING("javax/security/auth/SubjectDomainCombiner"),
	java::lang::Object,
	java::security::DomainCombiner>
{
public:

	static ref<SubjectDomainCombiner> new_object(ref<javax::security::auth::Subject> subject);
	ref<javax::security::auth::Subject> getSubject();
	ref<link::java::array<java::security::ProtectionDomain>> combine(ref<link::java::array<java::security::ProtectionDomain>> currentDomains, ref<link::java::array<java::security::ProtectionDomain>> assignedDomains);

protected:

	SubjectDomainCombiner(handle_type h) : base_(h) {}

};

} // namespace javax::security::auth
} // namespace scapix::java_api

#include <scapix/java_api/java/security/ProtectionDomain.h>
#include <scapix/java_api/javax/security/auth/Subject.h>

namespace scapix::java_api {
namespace javax::security::auth {

inline ref<SubjectDomainCombiner> SubjectDomainCombiner::new_object(ref<javax::security::auth::Subject> subject) { return base_::new_object(subject); }
inline ref<javax::security::auth::Subject> SubjectDomainCombiner::getSubject() { return call_method<SCAPIX_META_STRING("getSubject"), ref<javax::security::auth::Subject>>(); }
inline ref<link::java::array<java::security::ProtectionDomain>> SubjectDomainCombiner::combine(ref<link::java::array<java::security::ProtectionDomain>> currentDomains, ref<link::java::array<java::security::ProtectionDomain>> assignedDomains) { return call_method<SCAPIX_META_STRING("combine"), ref<link::java::array<java::security::ProtectionDomain>>>(currentDomains, assignedDomains); }

} // namespace javax::security::auth
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_SECURITY_AUTH_SUBJECTDOMAINCOMBINER_H
