// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_TV_TVTRACKINFO_BUILDER_H
#define SCAPIX_ANDROID_MEDIA_TV_TVTRACKINFO_BUILDER_H

namespace scapix::java_api {

namespace android::media::tv { class TvTrackInfo; }
namespace android::os { class Bundle; }
namespace java::lang { class CharSequence; }
namespace java::lang { class String; }

namespace android::media::tv {

class TvTrackInfo_Builder : public object_base<SCAPIX_META_STRING("android/media/tv/TvTrackInfo$Builder"),
	java::lang::Object>
{
public:

	static ref<TvTrackInfo_Builder> new_object(jint type, ref<java::lang::String> id);
	ref<android::media::tv::TvTrackInfo_Builder> setLanguage(ref<java::lang::String> language);
	ref<android::media::tv::TvTrackInfo_Builder> setDescription(ref<java::lang::CharSequence> description);
	ref<android::media::tv::TvTrackInfo_Builder> setAudioChannelCount(jint audioChannelCount);
	ref<android::media::tv::TvTrackInfo_Builder> setAudioSampleRate(jint audioSampleRate);
	ref<android::media::tv::TvTrackInfo_Builder> setVideoWidth(jint videoWidth);
	ref<android::media::tv::TvTrackInfo_Builder> setVideoHeight(jint videoHeight);
	ref<android::media::tv::TvTrackInfo_Builder> setVideoFrameRate(jfloat videoFrameRate);
	ref<android::media::tv::TvTrackInfo_Builder> setVideoPixelAspectRatio(jfloat videoPixelAspectRatio);
	ref<android::media::tv::TvTrackInfo_Builder> setVideoActiveFormatDescription(jbyte videoActiveFormatDescription);
	ref<android::media::tv::TvTrackInfo_Builder> setExtra(ref<android::os::Bundle> extra);
	ref<android::media::tv::TvTrackInfo> build();

protected:

	TvTrackInfo_Builder(handle_type h) : base_(h) {}

};

} // namespace android::media::tv
} // namespace scapix::java_api

#include <scapix/java_api/android/media/tv/TvTrackInfo.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::media::tv {

inline ref<TvTrackInfo_Builder> TvTrackInfo_Builder::new_object(jint type, ref<java::lang::String> id) { return base_::new_object(type, id); }
inline ref<android::media::tv::TvTrackInfo_Builder> TvTrackInfo_Builder::setLanguage(ref<java::lang::String> language) { return call_method<SCAPIX_META_STRING("setLanguage"), ref<android::media::tv::TvTrackInfo_Builder>>(language); }
inline ref<android::media::tv::TvTrackInfo_Builder> TvTrackInfo_Builder::setDescription(ref<java::lang::CharSequence> description) { return call_method<SCAPIX_META_STRING("setDescription"), ref<android::media::tv::TvTrackInfo_Builder>>(description); }
inline ref<android::media::tv::TvTrackInfo_Builder> TvTrackInfo_Builder::setAudioChannelCount(jint audioChannelCount) { return call_method<SCAPIX_META_STRING("setAudioChannelCount"), ref<android::media::tv::TvTrackInfo_Builder>>(audioChannelCount); }
inline ref<android::media::tv::TvTrackInfo_Builder> TvTrackInfo_Builder::setAudioSampleRate(jint audioSampleRate) { return call_method<SCAPIX_META_STRING("setAudioSampleRate"), ref<android::media::tv::TvTrackInfo_Builder>>(audioSampleRate); }
inline ref<android::media::tv::TvTrackInfo_Builder> TvTrackInfo_Builder::setVideoWidth(jint videoWidth) { return call_method<SCAPIX_META_STRING("setVideoWidth"), ref<android::media::tv::TvTrackInfo_Builder>>(videoWidth); }
inline ref<android::media::tv::TvTrackInfo_Builder> TvTrackInfo_Builder::setVideoHeight(jint videoHeight) { return call_method<SCAPIX_META_STRING("setVideoHeight"), ref<android::media::tv::TvTrackInfo_Builder>>(videoHeight); }
inline ref<android::media::tv::TvTrackInfo_Builder> TvTrackInfo_Builder::setVideoFrameRate(jfloat videoFrameRate) { return call_method<SCAPIX_META_STRING("setVideoFrameRate"), ref<android::media::tv::TvTrackInfo_Builder>>(videoFrameRate); }
inline ref<android::media::tv::TvTrackInfo_Builder> TvTrackInfo_Builder::setVideoPixelAspectRatio(jfloat videoPixelAspectRatio) { return call_method<SCAPIX_META_STRING("setVideoPixelAspectRatio"), ref<android::media::tv::TvTrackInfo_Builder>>(videoPixelAspectRatio); }
inline ref<android::media::tv::TvTrackInfo_Builder> TvTrackInfo_Builder::setVideoActiveFormatDescription(jbyte videoActiveFormatDescription) { return call_method<SCAPIX_META_STRING("setVideoActiveFormatDescription"), ref<android::media::tv::TvTrackInfo_Builder>>(videoActiveFormatDescription); }
inline ref<android::media::tv::TvTrackInfo_Builder> TvTrackInfo_Builder::setExtra(ref<android::os::Bundle> extra) { return call_method<SCAPIX_META_STRING("setExtra"), ref<android::media::tv::TvTrackInfo_Builder>>(extra); }
inline ref<android::media::tv::TvTrackInfo> TvTrackInfo_Builder::build() { return call_method<SCAPIX_META_STRING("build"), ref<android::media::tv::TvTrackInfo>>(); }

} // namespace android::media::tv
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_TV_TVTRACKINFO_BUILDER_H
