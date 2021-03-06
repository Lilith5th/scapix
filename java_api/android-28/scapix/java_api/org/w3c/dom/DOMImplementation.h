// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ORG_W3C_DOM_DOMIMPLEMENTATION_H
#define SCAPIX_ORG_W3C_DOM_DOMIMPLEMENTATION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace org::w3c::dom { class Document; }
namespace org::w3c::dom { class DocumentType; }

namespace org::w3c::dom {

class DOMImplementation : public object_base<SCAPIX_META_STRING("org/w3c/dom/DOMImplementation"),
	java::lang::Object>
{
public:

	jboolean hasFeature(ref<java::lang::String> p1, ref<java::lang::String> p2);
	ref<org::w3c::dom::DocumentType> createDocumentType(ref<java::lang::String> p1, ref<java::lang::String> p2, ref<java::lang::String> p3);
	ref<org::w3c::dom::Document> createDocument(ref<java::lang::String> p1, ref<java::lang::String> p2, ref<org::w3c::dom::DocumentType> p3);
	ref<java::lang::Object> getFeature(ref<java::lang::String> p1, ref<java::lang::String> p2);

protected:

	DOMImplementation(handle_type h) : base_(h) {}

};

} // namespace org::w3c::dom
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/Document.h>
#include <scapix/java_api/org/w3c/dom/DocumentType.h>

namespace scapix::java_api {
namespace org::w3c::dom {

inline jboolean DOMImplementation::hasFeature(ref<java::lang::String> p1, ref<java::lang::String> p2) { return call_method<SCAPIX_META_STRING("hasFeature"), jboolean>(p1, p2); }
inline ref<org::w3c::dom::DocumentType> DOMImplementation::createDocumentType(ref<java::lang::String> p1, ref<java::lang::String> p2, ref<java::lang::String> p3) { return call_method<SCAPIX_META_STRING("createDocumentType"), ref<org::w3c::dom::DocumentType>>(p1, p2, p3); }
inline ref<org::w3c::dom::Document> DOMImplementation::createDocument(ref<java::lang::String> p1, ref<java::lang::String> p2, ref<org::w3c::dom::DocumentType> p3) { return call_method<SCAPIX_META_STRING("createDocument"), ref<org::w3c::dom::Document>>(p1, p2, p3); }
inline ref<java::lang::Object> DOMImplementation::getFeature(ref<java::lang::String> p1, ref<java::lang::String> p2) { return call_method<SCAPIX_META_STRING("getFeature"), ref<java::lang::Object>>(p1, p2); }

} // namespace org::w3c::dom
} // namespace scapix::java_api

#endif // SCAPIX_ORG_W3C_DOM_DOMIMPLEMENTATION_H
