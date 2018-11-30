//
//  Agora Rtc Engine SDK
//
//  Copyright (c) 2018 Agora.io. All rights reserved.
//


/**
 @mainpage Introduction
 \brief <p>Agora provides ensured quality of experience (QoE) for worldwide Internet-based voice and video communications through a virtual global network optimized for real-time web and mobile-to-mobile applications.</p><p><ul><li>The \ref agora::rtc::IRtcEngine "IRtcEngine" class is the entry point of the Agora SDK providing API methods for apps to easily start a voice/video communication or interactive broadcast.</li><li>The \ref agora::rtc::IRtcEngineEventHandler "IRtcEngineEventHandler" class reports runtime events to the App.</li></ul></p>
 
 @section Methods
 
 ### Core Methods
 Core methods for creating an RTC engine and setting up a basic communication channel. This group of methods is applicable to [Voice Communication](https://docs.agora.io/en/Voice/downloads), [Video Communication](https://docs.agora.io/en/Video/downloads), and [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).

 - createAgoraRtcEngine()
 - \ref agora::rtc::IRtcEngine::initialize "initialize"
 - \ref agora::rtc::IRtcEngine::release "release"
 - \ref agora::rtc::IRtcEngine::setChannelProfile "setChannelProfile"
 - \ref agora::rtc::IRtcEngine::setClientRole "setClientRole"
 - \ref agora::rtc::IRtcEngine::joinChannel "joinChannel"
 - \ref agora::rtc::IRtcEngine::leaveChannel "leaveChannel"
 - \ref agora::rtc::IRtcEngine::renewToken "renewToken"
 - \ref agora::rtc::RtcEngineParameters::enableWebSdkInteroperability "enableWebSdkInteroperability"

 ### Core Audio
 This group of methods is applicable to [Voice Communication](https://docs.agora.io/en/Voice/downloads), [Video Communication](https://docs.agora.io/en/Video/downloads), and [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).
 
 - \ref agora::rtc::IRtcEngine::enableAudio "enableAudio"
 - \ref agora::rtc::IRtcEngine::enableLocalAudio "enableLocalAudio"
 - \ref agora::rtc::IRtcEngine::disableAudio "disableAudio"
 - \ref agora::rtc::IRtcEngine::setAudioProfile "setAudioProfile"
 - \ref agora::rtc::RtcEngineParameters::pauseAudio "pauseAudio"
 - \ref agora::rtc::RtcEngineParameters::resumeAudio "resumeAudio"
 - \ref agora::rtc::RtcEngineParameters::setHighQualityAudioParameters "setHighQualityAudioParameters"
 - \ref agora::rtc::RtcEngineParameters::adjustRecordingSignalVolume "adjustRecordingSignalVolume"
 - \ref agora::rtc::RtcEngineParameters::adjustPlaybackSignalVolume "adjustPlaybackSignalVolume"
 - \ref agora::rtc::RtcEngineParameters::muteRecordingSignal "muteRecordingSignal"
 - \ref agora::rtc::RtcEngineParameters::enableAudioVolumeIndication "enableAudioVolumeIndication"
 - \ref agora::rtc::RtcEngineParameters::muteLocalAudioStream "muteLocalAudioStream"
 - \ref agora::rtc::RtcEngineParameters::muteRemoteAudioStream "muteRemoteAudioStream"
 - \ref agora::rtc::RtcEngineParameters::muteAllRemoteAudioStreams "muteAllRemoteAudioStreams"
 - \ref agora::rtc::RtcEngineParameters::setDefaultMuteAllRemoteAudioStreams "setDefaultMuteAllRemoteAudioStreams"

 ### Core Video
 This group of methods is applicable to [Video Communication](https://docs.agora.io/en/Video/downloads) and [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).
 
 - \ref agora::rtc::IRtcEngine::enableVideo "enableVideo"
 - \ref agora::rtc::IRtcEngine::disableVideo "disableVideo"
 - \ref agora::rtc::IRtcEngine::setVideoProfile "setVideoProfile"
 - \ref agora::rtc::IRtcEngine::setVideoEncoderConfiguration "setVideoEncoderConfiguration"
 - \ref agora::rtc::IRtcEngine::setupLocalVideo "setupLocalVideo"
 - \ref agora::rtc::IRtcEngine::setupRemoteVideo "setupRemoteVideo"
 - \ref agora::rtc::IRtcEngine::startPreview "startPreview"
 - \ref agora::rtc::IRtcEngine::stopPreview "stopPreview"
 - \ref agora::rtc::RtcEngineParameters::enableLocalVideo "enableLocalVideo"
 - \ref agora::rtc::RtcEngineParameters::muteLocalVideoStream "muteLocalVideoStream"
 - \ref agora::rtc::RtcEngineParameters::muteAllRemoteVideoStreams "muteAllRemoteVideoStreams"
 - \ref agora::rtc::RtcEngineParameters::setDefaultMuteAllRemoteVideoStreams "setDefaultMuteAllRemoteVideoStreams"
 - \ref agora::rtc::RtcEngineParameters::muteRemoteVideoStream "muteRemoteVideoStream"
 - \ref agora::rtc::RtcEngineParameters::setLocalRenderMode "setLocalRenderMode"
 - \ref agora::rtc::RtcEngineParameters::setRemoteRenderMode "setRemoteRenderMode"
 
 ### Miscellaneous Audio Control
 This group of methods is applicable to [Voice Communication](https://docs.agora.io/en/Voice/downloads), [Video Communication](https://docs.agora.io/en/Video/downloads), and [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).
 
 - \ref agora::rtc::RtcEngineParameters::enableLoopbackRecording "enableLoopbackRecording"
 - \ref agora::rtc::RtcEngineParameters::setInEarMonitoringVolume "setInEarMonitoringVolume"
 
 ### Audio Sound Effect
 This group of methods is applicable to [Voice Communication](https://docs.agora.io/en/Voice/downloads), [Video Communication](https://docs.agora.io/en/Video/downloads), and [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).
 
 - \ref agora::rtc::RtcEngineParameters::setLocalVoicePitch "setLocalVoicePitch"
 - \ref agora::rtc::RtcEngineParameters::setLocalVoiceEqualization "setLocalVoiceEqualization"
 - \ref agora::rtc::RtcEngineParameters::setLocalVoiceReverb "setLocalVoiceReverb"

 ### Audio Mixing
 This group of methods is applicable to [Voice Communication](https://docs.agora.io/en/Voice/downloads), [Video Communication](https://docs.agora.io/en/Video/downloads), and [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).
 
 - \ref agora::rtc::RtcEngineParameters::startAudioMixing "startAudioMixing"
 - \ref agora::rtc::RtcEngineParameters::stopAudioMixing "stopAudioMixing"
 - \ref agora::rtc::RtcEngineParameters::pauseAudioMixing "pauseAudioMixing"
 - \ref agora::rtc::RtcEngineParameters::resumeAudioMixing "resumeAudioMixing"
 - \ref agora::rtc::RtcEngineParameters::adjustAudioMixingVolume "adjustAudioMixingVolume"
 - \ref agora::rtc::RtcEngineParameters::getAudioMixingDuration "getAudioMixingDuration"
 - \ref agora::rtc::RtcEngineParameters::getAudioMixingCurrentPosition "getAudioMixingCurrentPosition"
 - \ref agora::rtc::RtcEngineParameters::setAudioMixingPosition "setAudioMixingPosition"
 
 ### Audio Effect Playback
 This group of methods is applicable to [Voice Communication](https://docs.agora.io/en/Voice/downloads), [Video Communication](https://docs.agora.io/en/Video/downloads), and [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).
 
 - \ref agora::rtc::RtcEngineParameters::getEffectsVolume "getEffectsVolume"
 - \ref agora::rtc::RtcEngineParameters::setEffectsVolume "setEffectsVolume"
 - \ref agora::rtc::RtcEngineParameters::setVolumeOfEffect "setVolumeOfEffect"
 - \ref agora::rtc::RtcEngineParameters::playEffect "playEffect"
 - \ref agora::rtc::RtcEngineParameters::stopEffect "stopEffect"
 - \ref agora::rtc::RtcEngineParameters::stopAllEffects "stopAllEffects"
 - \ref agora::rtc::RtcEngineParameters::preloadEffect "preloadEffect"
 - \ref agora::rtc::RtcEngineParameters::unloadEffect "unloadEffect"
 - \ref agora::rtc::RtcEngineParameters::pauseEffect "pauseEffect"
 - \ref agora::rtc::RtcEngineParameters::pauseAllEffects "pauseAllEffects"
 - \ref agora::rtc::RtcEngineParameters::resumeEffect "resumeEffect"
 - \ref agora::rtc::RtcEngineParameters::resumeAllEffects "resumeAllEffects"
 
 ### Audio Recorder
 This group of methods is applicable to [Voice Communication](https://docs.agora.io/en/Voice/downloads), [Video Communication](https://docs.agora.io/en/Video/downloads), and [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).
 
 - \ref agora::rtc::RtcEngineParameters::startAudioRecording "startAudioRecording"
 - \ref agora::rtc::RtcEngineParameters::stopAudioRecording "stopAudioRecording"

 ### Echo Test
 This group of methods is applicable to [Voice Communication](https://docs.agora.io/en/Voice/downloads), [Video Communication](https://docs.agora.io/en/Video/downloads), and [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).

 - \ref agora::rtc::IRtcEngine::startEchoTest "startEchoTest"
 - \ref agora::rtc::IRtcEngine::stopEchoTest "stopEchoTest"

 ### Custom Video Module
 
 - N/A
 
 ### External Video Data (Push-mode Only)
 
 - N/A

 ### External Audio Data (Push-mode Only)
 This group of methods is applicable to [Voice Communication](https://docs.agora.io/en/Voice/downloads), [Video Communication](https://docs.agora.io/en/Video/downloads), and [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).
 
 - \ref agora::rtc::RtcEngineParameters::setExternalAudioSource "setExternalAudioSource"
 - \ref agora::media::IMediaEngine::pushAudioFrame "pushAudioFrame"

 ### Raw Audio Data
 This group of methods is applicable to [Voice Communication](https://docs.agora.io/en/Voice/downloads), [Video Communication](https://docs.agora.io/en/Video/downloads), and [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).
 
 - \ref agora::media::IMediaEngine::registerAudioFrameObserver "registerAudioFrameObserver"
 - \ref agora::rtc::RtcEngineParameters::setRecordingAudioFrameParameters "setRecordingAudioFrameParameters"
 - \ref agora::rtc::RtcEngineParameters::setPlaybackAudioFrameParameters "setPlaybackAudioFrameParameters"
 - \ref agora::rtc::RtcEngineParameters::setMixedAudioFrameParameters "setMixedAudioFrameParameters"

 ### Raw Video Data
 This group of methods is applicable to [Video Communication](https://docs.agora.io/en/Video/downloads) and [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).
 
 - \ref agora::media::IMediaEngine::registerVideoFrameObserver "registerVideoFrameObserver"
 
 ### Watermark
 This group of methods is applicable only to [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).
 
 - \ref agora::rtc::IRtcEngine::addVideoWatermark "addVideoWatermark"
 - \ref agora::rtc::IRtcEngine::clearVideoWatermarks "clearVideoWatermarks"

 ### Stream Fallback
 This group of methods is applicable only to [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).
 
 - \ref agora::rtc::RtcEngineParameters::setLocalPublishFallbackOption "setLocalPublishFallbackOption"
 - \ref agora::rtc::RtcEngineParameters::setRemoteSubscribeFallbackOption "setRemoteSubscribeFallbackOption"

 ### Dual-video Mode
 This group of methods is applicable to [Video Communication](https://docs.agora.io/en/Video/downloads) and [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).
 
 - \ref agora::rtc::RtcEngineParameters::enableDualStreamMode "enableDualStreamMode"
 - \ref agora::rtc::RtcEngineParameters::setRemoteVideoStreamType "setRemoteVideoStreamType"
 - \ref agora::rtc::RtcEngineParameters::setRemoteDefaultVideoStreamType "setRemoteDefaultVideoStreamType"

 ### Encryption
 This group of methods is applicable to [Voice Communication](https://docs.agora.io/en/Voice/downloads), [Video Communication](https://docs.agora.io/en/Video/downloads), and [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).
 
 - \ref agora::rtc::IRtcEngine::setEncryptionSecret "setEncryptionSecret"
 - \ref agora::rtc::IRtcEngine::setEncryptionMode "setEncryptionMode"
 - \ref agora::rtc::IRtcEngine::registerPacketObserver "registerPacketObserver"

 ### Inject Stream URL
 This group of methods is applicable only to [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).
 
 - \ref agora::rtc::IRtcEngine::addInjectStreamUrl "addInjectStreamUrl"
 - \ref agora::rtc::IRtcEngine::removeInjectStreamUrl "removeInjectStreamUrl"

 ### CDN Live Streaming
 This group of methods is applicable only to [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).
 
 - \ref agora::rtc::IRtcEngine::addPublishStreamUrl "addPublishStreamUrl"
 - \ref agora::rtc::IRtcEngine::removePublishStreamUrl "removePublishStreamUrl"
 - \ref agora::rtc::IRtcEngine::setLiveTranscoding "setLiveTranscoding"
 - \ref agora::rtc::IRtcEngine::configPublisher "configPublisher"
 - \ref agora::rtc::IRtcEngine::setVideoCompositingLayout "setVideoCompositingLayout"
 - \ref agora::rtc::IRtcEngine::clearVideoCompositingLayout "clearVideoCompositingLayout"

 ### Data Stream
 This group of methods is applicable to [Video Communication](https://docs.agora.io/en/Video/downloads) and [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).
 
 - \ref agora::rtc::IRtcEngine::createDataStream "createDataStream"
 - \ref agora::rtc::IRtcEngine::sendStreamMessage "sendStreamMessage"

 ### Miscellaneous Video Control
 This group of methods is applicable to [Video Communication](https://docs.agora.io/en/Video/downloads) and [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).
 
 - \ref agora::rtc::RtcEngineParameters::setVideoQualityParameters "setVideoQualityParameters"
 - \ref agora::rtc::RtcEngineParameters::setLocalVideoMirrorMode "setLocalVideoMirrorMode"

 ### Miscellaneous Methods
 This group of methods is applicable to [Voice Communication](https://docs.agora.io/en/Voice/downloads), [Video Communication](https://docs.agora.io/en/Video/downloads), and [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).
 
 - \ref agora::rtc::IRtcEngine::getCallId "getCallId"
 - \ref agora::rtc::IRtcEngine::rate "rate"
 - \ref agora::rtc::IRtcEngine::complain "complain"
 - \ref agora::rtc::IRtcEngine::getVersion "getVersion"
 - \ref agora::rtc::IRtcEngine::enableLastmileTest "enableLastmileTest"
 - \ref agora::rtc::IRtcEngine::disableLastmileTest "disableLastmileTest"
 - \ref agora::rtc::IRtcEngine::getErrorDescription "getErrorDescription"
 - \ref agora::rtc::RtcEngineParameters::setLogFile "setLogFile"
 - \ref agora::rtc::RtcEngineParameters::setLogFilter "setLogFilter"

 ### Customized Methods
 This group of methods is applicable to [Voice Communication](https://docs.agora.io/en/Voice/downloads), [Video Communication](https://docs.agora.io/en/Video/downloads), and [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).
 
 - \ref agora::rtc::IRtcEngineParameter::setParameters "setParameters"
 
 ### Screen Capture
 This group of methods is applicable to [Video Communication](https://docs.agora.io/en/Video/downloads) and [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).
 
 - \ref agora::rtc::IRtcEngine::startScreenCapture "startScreenCapture"
 - \ref agora::rtc::IRtcEngine::stopScreenCapture "stopScreenCapture"
 - \ref agora::rtc::IRtcEngine::updateScreenCaptureRegion "updateScreenCaptureRegion"

 ### Camera Control
 
 - N/A

 ### Device Manager

 - \ref agora::rtc::IVideoDeviceManager::enumerateVideoDevices "enumerateVideoDevices"
 - \ref agora::rtc::IVideoDeviceManager::startDeviceTest "startDeviceTest"
 - \ref agora::rtc::IVideoDeviceManager::stopDeviceTest "stopDeviceTest"
 - \ref agora::rtc::IVideoDeviceCollection::getCount "getCount"
 - \ref agora::rtc::IVideoDeviceManager::getDevice "getDevice"
 - \ref agora::rtc::IVideoDeviceManager::setDevice "setDevice"
 - \ref agora::rtc::IAudioDeviceManager::enumeratePlaybackDevices "enumeratePlaybackDevices"
 - \ref agora::rtc::IAudioDeviceManager::enumerateRecordingDevices "enumerateRecordingDevices"
 - \ref agora::rtc::IAudioDeviceManager::setPlaybackDevice "setPlaybackDevice"
 - \ref agora::rtc::IAudioDeviceManager::setRecordingDevice "setRecordingDevice"
 - \ref agora::rtc::IAudioDeviceManager::startPlaybackDeviceTest "startPlaybackDeviceTest"
 - \ref agora::rtc::IAudioDeviceManager::stopPlaybackDeviceTest "stopPlaybackDeviceTest"
 - \ref agora::rtc::IAudioDeviceManager::setPlaybackDeviceVolume "setPlaybackDeviceVolume"
 - \ref agora::rtc::IAudioDeviceManager::getPlaybackDeviceVolume "getPlaybackDeviceVolume"
 - \ref agora::rtc::IAudioDeviceManager::setRecordingDeviceVolume "setRecordingDeviceVolume"
 - \ref agora::rtc::IAudioDeviceManager::getRecordingDeviceVolume "getRecordingDeviceVolume"
 - \ref agora::rtc::IAudioDeviceManager::setPlaybackDeviceMute "setPlaybackDeviceMute"
 - \ref agora::rtc::IAudioDeviceManager::getPlaybackDeviceMute "getPlaybackDeviceMute"
 - \ref agora::rtc::IAudioDeviceManager::setRecordingDeviceMute "setRecordingDeviceMute"
 - \ref agora::rtc::IAudioDeviceManager::getRecordingDeviceMute "getRecordingDeviceMute"
 - \ref agora::rtc::IAudioDeviceManager::startRecordingDeviceTest "startRecordingDeviceTest"
 - \ref agora::rtc::IAudioDeviceManager::stopRecordingDeviceTest "stopRecordingDeviceTest"

 @section Callbacks
 
 ### Core Events
 This group of methods is applicable to [Voice Communication](https://docs.agora.io/en/Voice/downloads), [Video Communication](https://docs.agora.io/en/Video/downloads), and [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).
 
 - \ref agora::rtc::IRtcEngineEventHandler::onWarning "onWarning"
 - \ref agora::rtc::IRtcEngineEventHandler::onError "onError"
 - \ref agora::rtc::IRtcEngineEventHandler::onJoinChannelSuccess "onJoinChannelSuccess"
 - \ref agora::rtc::IRtcEngineEventHandler::onRejoinChannelSuccess "onRejoinChannelSuccess"
 - \ref agora::rtc::IRtcEngineEventHandler::onLeaveChannel "onLeaveChannel"
 - \ref agora::rtc::IRtcEngineEventHandler::onClientRoleChanged "onClientRoleChanged"
 - \ref agora::rtc::IRtcEngineEventHandler::onUserJoined "onUserJoined"
 - \ref agora::rtc::IRtcEngineEventHandler::onUserOffline "onUserOffline"
 - \ref agora::rtc::IRtcEngineEventHandler::onLastmileQuality "onLastmileQuality"
 - \ref agora::rtc::IRtcEngineEventHandler::onConnectionInterrupted "onConnectionInterrupted"
 - \ref agora::rtc::IRtcEngineEventHandler::onConnectionLost "onConnectionLost"
 - \ref agora::rtc::IRtcEngineEventHandler::onConnectionBanned "onConnectionBanned"
 - \ref agora::rtc::IRtcEngineEventHandler::onApiCallExecuted "onApiCallExecuted"
 - \ref agora::rtc::IRtcEngineEventHandler::onRequestToken "onRequestToken"
 - \ref agora::rtc::IRtcEngineEventHandler::onTokenPrivilegeWillExpire "onTokenPrivilegeWillExpire"

 ### Media Events

 - \ref agora::rtc::IRtcEngineEventHandler::onAudioVolumeIndication "onAudioVolumeIndication"
 - \ref agora::rtc::IRtcEngineEventHandler::onActiveSpeaker "onActiveSpeaker"
 - \ref agora::rtc::IRtcEngineEventHandler::onVideoStopped "onVideoStopped"
 - \ref agora::rtc::IRtcEngineEventHandler::onFirstLocalVideoFrame "onFirstLocalVideoFrame"
 - \ref agora::rtc::IRtcEngineEventHandler::onFirstRemoteVideoDecoded "onFirstRemoteVideoDecoded"
 - \ref agora::rtc::IRtcEngineEventHandler::onFirstRemoteVideoFrame "onFirstRemoteVideoFrame"
 - \ref agora::rtc::IRtcEngineEventHandler::onUserMuteAudio "onUserMuteAudio"
 - \ref agora::rtc::IRtcEngineEventHandler::onUserMuteVideo "onUserMuteVideo"
 - \ref agora::rtc::IRtcEngineEventHandler::onUserEnableVideo "onUserEnableVideo"

 ### Fallback Events
 
 - \ref agora::rtc::IRtcEngineEventHandler::onLocalPublishFallbackToAudioOnly "onLocalPublishFallbackToAudioOnly"
 - \ref agora::rtc::IRtcEngineEventHandler::onRemoteSubscribeFallbackToAudioOnly "onRemoteSubscribeFallbackToAudioOnly"

 ### Device Events

 - \ref agora::rtc::IRtcEngineEventHandler::onAudioDeviceStateChanged "onAudioDeviceStateChanged"
 - \ref agora::rtc::IRtcEngineEventHandler::onAudioDeviceVolumeChanged "onAudioDeviceVolumeChanged"
 - \ref agora::rtc::IRtcEngineEventHandler::onCameraReady "onCameraReady"
 - \ref agora::rtc::IRtcEngineEventHandler::onCameraFocusAreaChanged "onCameraFocusAreaChanged"

 ### Statistics Events

 - \ref agora::rtc::IRtcEngineEventHandler::onAudioQuality "onAudioQuality"
 - \ref agora::rtc::IRtcEngineEventHandler::onRtcStats "onRtcStats"
 - \ref agora::rtc::IRtcEngineEventHandler::onNetworkQuality "onNetworkQuality"
 - \ref agora::rtc::IRtcEngineEventHandler::onLocalVideoStats "onLocalVideoStats"
 - \ref agora::rtc::IRtcEngineEventHandler::onRemoteVideoStats "onRemoteVideoStats"

 ### Audio Player Events
 This group of methods is applicable to [Voice Communication](https://docs.agora.io/en/Voice/downloads), [Video Communication](https://docs.agora.io/en/Video/downloads), and [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).

 - \ref agora::rtc::IRtcEngineEventHandler::onAudioMixingFinished "onAudioMixingFinished"
 - \ref agora::rtc::IRtcEngineEventHandler::onRemoteAudioMixingBegin "onRemoteAudioMixingBegin"
 - \ref agora::rtc::IRtcEngineEventHandler::onRemoteAudioMixingEnd "onRemoteAudioMixingEnd"
 - \ref agora::rtc::IRtcEngineEventHandler::onAudioEffectFinished "onAudioEffectFinished"

 ### CDN Live Streaming Events
 This group of methods is applicable only to [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).
 
 - \ref agora::rtc::IRtcEngineEventHandler::onStreamPublished "onStreamPublished"
 - \ref agora::rtc::IRtcEngineEventHandler::onStreamUnpublished "onStreamUnpublished"
 - \ref agora::rtc::IRtcEngineEventHandler::onTranscodingUpdated "onTranscodingUpdated"

 ### Inject Stream URL Events
 This group of methods is applicable only to [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).
 
 - \ref agora::rtc::IRtcEngineEventHandler::onStreamInjectedStatus "onStreamInjectedStatus"

 ### Stream Message Events
 This group of methods is applicable to [Voice Communication](https://docs.agora.io/en/Voice/downloads), [Video Communication](https://docs.agora.io/en/Video/downloads), and [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).
 
 - \ref agora::rtc::IRtcEngineEventHandler::onStreamMessage "onStreamMessage"
 - \ref agora::rtc::IRtcEngineEventHandler::onStreamMessageError "onStreamMessageError"

 ### Miscellaneous Events
 This group of methods is applicable to [Voice Communication](https://docs.agora.io/en/Voice/downloads), [Video Communication](https://docs.agora.io/en/Video/downloads), and [Interactive broadcast](https://docs.agora.io/en/Interactive%20Broadcast/downloads).
 
 - \ref agora::rtc::IRtcEngineEventHandler::onMediaEngineLoadSuccess "onMediaEngineLoadSuccess"
 - \ref agora::rtc::IRtcEngineEventHandler::onMediaEngineStartCallSuccess "onMediaEngineStartCallSuccess"
 
 ### Raw Media Data Events
 
 - \ref agora::media::IAudioFrameObserver::onRecordAudioFrame "onRecordAudioFrame"
 - \ref agora::media::IAudioFrameObserver::onPlaybackAudioFrame "onPlaybackAudioFrame"
 - \ref agora::media::IAudioFrameObserver::onPlaybackAudioFrameBeforeMixing "onPlaybackAudioFrameBeforeMixing"
 - \ref agora::media::IAudioFrameObserver::onMixedAudioFrame "onMixedAudioFrame"
 - \ref agora::media::IVideoFrameObserver::onCaptureVideoFrame "onCaptureVideoFrame"

*/

/**
 @defgroup createAgoraRtcEngine Create an Agora Rtc Engine
 */

#ifndef AGORA_RTC_ENGINE_H
#define AGORA_RTC_ENGINE_H
#include "AgoraBase.h"
#include "IAgoraService.h"

namespace agora {
namespace rtc {
    typedef unsigned int uid_t;
    typedef void* view_t;
/** Maximum length of the device ID.
*/
enum MAX_DEVICE_ID_LENGTH_TYPE
{
  /** The maximum length of the device ID is 512 bytes.
  */
    MAX_DEVICE_ID_LENGTH = 512
};
/** Format of the quality report.
*/
enum QUALITY_REPORT_FORMAT_TYPE
{
  /** 0: The quality report in JSON format,
  */
    QUALITY_REPORT_JSON = 0,
    /** 1: The quality report in HTML format.
    */
    QUALITY_REPORT_HTML = 1,
};

enum MEDIA_ENGINE_EVENT_CODE_TYPE
{
    MEDIA_ENGINE_RECORDING_ERROR = 0,
    MEDIA_ENGINE_PLAYOUT_ERROR = 1,
    MEDIA_ENGINE_RECORDING_WARNING = 2,
    MEDIA_ENGINE_PLAYOUT_WARNING = 3,
    MEDIA_ENGINE_AUDIO_FILE_MIX_FINISH = 10,
    MEDIA_ENGINE_AUDIO_FAREND_MUSIC_BEGINS = 12,
    MEDIA_ENGINE_AUDIO_FAREND_MUSIC_ENDS = 13,
    MEDIA_ENGINE_LOCAL_AUDIO_RECORD_ENABLED = 14,
    MEDIA_ENGINE_LOCAL_AUDIO_RECORD_DISABLED = 15,
    // media engine role changed
    MEDIA_ENGINE_ROLE_BROADCASTER_SOLO = 20,
    MEDIA_ENGINE_ROLE_BROADCASTER_INTERACTIVE = 21,
    MEDIA_ENGINE_ROLE_AUDIENCE = 22,
    MEDIA_ENGINE_ROLE_COMM_PEER = 23,
    MEDIA_ENGINE_ROLE_GAME_PEER = 24,
    // iOS adm sample rate changed
    MEDIA_ENGINE_AUDIO_ADM_REQUIRE_RESTART = 110,
    MEDIA_ENGINE_AUDIO_ADM_SPECIAL_RESTART = 111,
};
/** Media device state.
*/
enum MEDIA_DEVICE_STATE_TYPE
{
  /** 1: The device is active.
  */
    MEDIA_DEVICE_STATE_ACTIVE = 1,
    /** 2: The device is disabled.
    */
    MEDIA_DEVICE_STATE_DISABLED = 2,
    /** 4: The device is not present.
    */
    MEDIA_DEVICE_STATE_NOT_PRESENT = 4,
    /** 8: The device is unplugged.
    */
    MEDIA_DEVICE_STATE_UNPLUGGED = 8
};

/** Media device type.
*/
enum MEDIA_DEVICE_TYPE
{
  /** -1: Unknown device type.
  */
    UNKNOWN_AUDIO_DEVICE = -1,
    /** 0: Audio playback device.
    */
    AUDIO_PLAYOUT_DEVICE = 0,
    /** 1: Audio recording device.
    */
    AUDIO_RECORDING_DEVICE = 1,
    /** 2: Video renderer
    */
    VIDEO_RENDER_DEVICE = 2,
    /** 3: Video capturer
    */
    VIDEO_CAPTURE_DEVICE = 3,
    /** 4: Application audio playback device.
    */
    AUDIO_APPLICATION_PLAYOUT_DEVICE = 4,
};

/** Audio recording quality.
*/
enum AUDIO_RECORDING_QUALITY_TYPE
{
  /** 0: Low audio recording quality.
  */
    AUDIO_RECORDING_QUALITY_LOW = 0,
    /** 1: Medium audio recording quality.
    */
    AUDIO_RECORDING_QUALITY_MEDIUM = 1,
    /** 2: High audio recording quality.
    */
    AUDIO_RECORDING_QUALITY_HIGH = 2,
};

/** Network quality. */
enum QUALITY_TYPE
{
      /** 0: The network quality is unknown. */
    QUALITY_UNKNOWN = 0,
    /**  1: The network quality is excellent. */
    QUALITY_EXCELLENT = 1,
      /** 2: The network quality is quite good, but the bitrate may be slightly lower than excellent. */
    QUALITY_GOOD = 2,
      /** 3: Users can feel the communication slightly impaired. */
    QUALITY_POOR = 3,
      /** 4: Users can communicate only not very smoothly. */
    QUALITY_BAD = 4,
     /** 5: The network is so bad that users can hardly communicate. */
    QUALITY_VBAD = 5,
       /** 6: The network is down  and users cannot communicate at all. */
    QUALITY_DOWN = 6,
    QUALITY_UNSUPPORTED = 7,
};

/** Video display mode. */
enum RENDER_MODE_TYPE
{
  /**
1: Uniformly scale the video until it fills the visible boundaries (cropped). One dimension of the video may have clipped contents.
 */
    RENDER_MODE_HIDDEN = 1,
    /**
2: Uniformly scale the video until one of its dimension fits the boundary (zoomed to fit). Areas that are not filled due to the disparity in the aspect ratio will be filled with black.
 */
    RENDER_MODE_FIT = 2,
    /** @deprecated
     3：This mode is deprecated.
     */
    RENDER_MODE_ADAPTIVE = 3,
};

/** Video mirror mode. */
enum VIDEO_MIRROR_MODE_TYPE
{
      /** 0: Default mirror mode determined by the SDK. */
    VIDEO_MIRROR_MODE_AUTO = 0,//determined by SDK
        /** 1: Enabled mirror mode */
    VIDEO_MIRROR_MODE_ENABLED = 1,//enabled mirror
        /** 2: Disabled mirror mode */
    VIDEO_MIRROR_MODE_DISABLED = 2,//disable mirror
};

/** @deprecated
 Video profile. */
enum VIDEO_PROFILE_TYPE
{
    /** 0: 160 &times; 120, frame rate 15 fps, bitrate 65 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_120P = 0,
    /** 2: 120 &times; 120, frame rate 15 fps, bitrate 50 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_120P_3 = 2,
    /** 10: 320&times;180, frame rate 15 fps, bitrate 140 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_180P = 10,
    /** 12: 180 &times; 180, frame rate 15 fps, bitrate 100 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_180P_3 = 12,
    /** 13: 240 &times; 180, frame rate 15 fps, bitrate 120 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_180P_4 = 13,
    /** 20: 320 &times; 240, frame rate 15 fps, bitrate 200 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_240P = 20,
    /** 22: 240 &times; 240, frame rate 15 fps, bitrate 140 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_240P_3 = 22,
    /** 23: 424 &times; 240, frame rate 15 fps, bitrate 220 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_240P_4 = 23,
    /** 30: 640 &times; 360, frame rate 15 fps, bitrate 400 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_360P = 30,
    /** 32: 360 &times; 360, frame rate 15 fps, bitrate 260 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_360P_3 = 32,
    /** 33: 640 &times; 360, frame rate 30 fps, bitrate 600 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_360P_4 = 33,
    /** 35: 360 &times; 360, frame rate 30 fps, bitrate 400 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_360P_6 = 35,
    /** 36: 480 &times; 360, frame rate 15 fps, bitrate 320 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_360P_7 = 36,
    /** 37: 480 &times; 360, frame rate 30 fps, bitrate 490 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_360P_8 = 37,
    /** 38: 640 &times; 360, frame rate 15 fps, bitrate 800 Kbps.
     @note This profile is applicable to the live broadcast channel profile only.
     */
    VIDEO_PROFILE_LANDSCAPE_360P_9 = 38,
    /** 39: 640 &times; 360, frame rate 24 fps, bitrate 800 Kbps.
     @note This profile is applicable to the live broadcast channel profile only.
     */
    VIDEO_PROFILE_LANDSCAPE_360P_10 = 39,
    /** 100: 640 &times; 360, frame rate 24 fps, bitrate 1000 Kbps.
     @note This profile is applicable to the live broadcast channel profile only.
     */
    VIDEO_PROFILE_LANDSCAPE_360P_11 = 100,
    /** 40: 640 &times; 480, frame rate 15 fps, bitrate 500 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_480P = 40,
    /** 42: 480 &times; 480, frame rate 15 fps, bitrate 400 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_480P_3 = 42,
    /** 43: 640 &times; 480, frame rate 30 fps, bitrate 750 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_480P_4 = 43,
    /** 45: 480 &times; 480, frame rate 30 fps, bitrate 600 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_480P_6 = 45,
    /** 47: 848 &times; 480, frame rate 15 fps, bitrate 610 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_480P_8 = 47,
    /** 48: 848 &times; 480, frame rate 30 fps, bitrate 930 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_480P_9 = 48,
    /** 49: 640 &times; 480, frame rate 10 fps, bitrate 400 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_480P_10 = 49,
    /** 50: 1280 &times; 720, frame rate 15 fps, bitrate 1130 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_720P = 50,
    /** 52: 1280 &times; 720, frame rate 30 fps, bitrate 1710 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_720P_3 = 52,
    /** 54: 960 &times; 720, frame rate 15 fps, bitrate 910 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_720P_5 = 54,
    /** 55: 960 &times; 720, frame rate 30 fps, bitrate 1380 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_720P_6 = 55,
    /** 60: 1920 &times; 1080, frame rate 15 fps, bitrate 2080 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_1080P = 60,
    /** 62: 1920 &times; 1080, frame rate 30 fps, bitrate 3150 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_1080P_3 = 62,
    /** 64: 1920 &times; 1080, frame rate 60 fps, bitrate 4780 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_1080P_5 = 64,
    /** 66: 2560 &times; 1440, frame rate 30 fps, bitrate 4850 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_1440P = 66,
    /** 67: 2560 &times; 1440, frame rate 60 fps, bitrate 6500 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_1440P_2 = 67,
    /** 70: 3840 &times; 2160, frame rate 30 fps, bitrate 6500 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_4K = 70,
    /** 72: 3840 &times; 2160, frame rate 60 fps, bitrate 6500 Kbps. */
    VIDEO_PROFILE_LANDSCAPE_4K_3 = 72,
    /** 1000: 120 &times; 160, frame rate 15 fps, bitrate 65 Kbps. */
    VIDEO_PROFILE_PORTRAIT_120P = 1000,
    /** 1002: 120 &times; 120, frame rate 15 fps, bitrate 50 Kbps. */
    VIDEO_PROFILE_PORTRAIT_120P_3 = 1002,
    /** 1010: 180 &times; 320, frame rate 15 fps, bitrate 140 Kbps. */
    VIDEO_PROFILE_PORTRAIT_180P = 1010,
    /** 1012: 180 &times; 180, frame rate 15 fps, bitrate 100 Kbps. */
    VIDEO_PROFILE_PORTRAIT_180P_3 = 1012,
    /** 1013: 180 &times; 240, frame rate 15 fps, bitrate 120 Kbps. */
    VIDEO_PROFILE_PORTRAIT_180P_4 = 1013,
    /** 1020: 240 &times; 320, frame rate 15 fps, bitrate 200 Kbps. */
    VIDEO_PROFILE_PORTRAIT_240P = 1020,
    /** 1022: 240 &times; 240, frame rate 15 fps, bitrate 140 Kbps. */
    VIDEO_PROFILE_PORTRAIT_240P_3 = 1022,
    /** 1023: 240 &times; 424, frame rate 15 fps, bitrate 220 Kbps. */
    VIDEO_PROFILE_PORTRAIT_240P_4 = 1023,
    /** 1030: 360 &times; 640, frame rate 15 fps, bitrate 400 Kbps. */
    VIDEO_PROFILE_PORTRAIT_360P = 1030,
    /** 1032: 360 &times; 360, frame rate 15 fps, bitrate 260 Kbps. */
    VIDEO_PROFILE_PORTRAIT_360P_3 = 1032,
    /** 1033: 360 &times; 640, frame rate 30 fps, bitrate 600 Kbps. */
    VIDEO_PROFILE_PORTRAIT_360P_4 = 1033,
    /** 1035: 360 &times; 360, frame rate 30 fps, bitrate 400 Kbps. */
    VIDEO_PROFILE_PORTRAIT_360P_6 = 1035,
    /** 1036: 360 &times; 480, frame rate 15 fps, bitrate 320 Kbps. */
    VIDEO_PROFILE_PORTRAIT_360P_7 = 1036,
    /** 1037: 360 &times; 480, frame rate 30 fps, bitrate 490 Kbps. */
    VIDEO_PROFILE_PORTRAIT_360P_8 = 1037,
    /** 1038: 360 &times; 640, frame rate 15 fps, bitrate 800 Kbps.
     @note This profile is applicable to the live broadcast channel profile only.
     */
    VIDEO_PROFILE_PORTRAIT_360P_9 = 1038,
    /** 1039: 360 &times; 640, frame rate 24 fps, bitrate 800 Kbps.
     @note This profile is applicable to the live broadcast channel profile only.
     */
    VIDEO_PROFILE_PORTRAIT_360P_10 = 1039,
    /** 1100: 360 &times; 640, frame rate 24 fps, bitrate 1000 Kbps.
     @note This profile is applicable to the live broadcast channel profile only.
     */
    VIDEO_PROFILE_PORTRAIT_360P_11 = 1100,
    /** 1040: 480 &times; 640, frame rate 15 fps, bitrate 500 Kbps. */
    VIDEO_PROFILE_PORTRAIT_480P = 1040,
    /** 1042: 480 &times; 480, frame rate 15 fps, bitrate 400 Kbps. */
    VIDEO_PROFILE_PORTRAIT_480P_3 = 1042,
    /** 1043: 480 &times; 640, frame rate 30 fps, bitrate 750 Kbps. */
    VIDEO_PROFILE_PORTRAIT_480P_4 = 1043,
    /** 1045: 480 &times; 480, frame rate 30 fps, bitrate 600 Kbps. */
    VIDEO_PROFILE_PORTRAIT_480P_6 = 1045,
    /** 1047: 480 &times; 848, frame rate 15 fps, bitrate 610 Kbps. */
    VIDEO_PROFILE_PORTRAIT_480P_8 = 1047,
    /** 1048: 480 &times; 848, frame rate 30 fps, bitrate 930 Kbps. */
    VIDEO_PROFILE_PORTRAIT_480P_9 = 1048,
    /** 1049: 480 &times; 640, frame rate 10 fps, bitrate 400 Kbps. */
    VIDEO_PROFILE_PORTRAIT_480P_10 = 1049,
    /** 1050: 720 &times; 1280, frame rate 15 fps, bitrate 1130 Kbps. */
    VIDEO_PROFILE_PORTRAIT_720P = 1050,
    /** 1052: 720 &times; 1280, frame rate 30 fps, bitrate 1710 Kbps. */
    VIDEO_PROFILE_PORTRAIT_720P_3 = 1052,
    /** 1054: 720 &times; 960, frame rate 15 fps, bitrate 910 Kbps. */
    VIDEO_PROFILE_PORTRAIT_720P_5 = 1054,
    /** 1055: 720 &times; 960, frame rate 30 fps, bitrate 1380 Kbps. */
    VIDEO_PROFILE_PORTRAIT_720P_6 = 1055,
    /** 1060: 1080 &times; 1920, frame rate 15 fps, bitrate 2080 Kbps. */
    VIDEO_PROFILE_PORTRAIT_1080P = 1060,
    /** 1062: 1080 &times; 1920, frame rate 30 fps, bitrate 3150 Kbps. */
    VIDEO_PROFILE_PORTRAIT_1080P_3 = 1062,
    /** 1064: 1080 &times; 1920, frame rate 60 fps, bitrate 4780 Kbps. */
    VIDEO_PROFILE_PORTRAIT_1080P_5 = 1064,
    /** 1066: 1440 &times; 2560, frame rate 30 fps, bitrate 4850 Kbps. */
    VIDEO_PROFILE_PORTRAIT_1440P = 1066,
    /** 1067: 1440 &times; 2560, frame rate 60 fps, bitrate 6500 Kbps. */
    VIDEO_PROFILE_PORTRAIT_1440P_2 = 1067,
    /** 1070: 2160 &times; 3840, frame rate 30 fps, bitrate 6500 Kbps. */
    VIDEO_PROFILE_PORTRAIT_4K = 1070,
    /** 1072: 2160 &times; 3840, frame rate 60 fps, bitrate 6500 Kbps. */
    VIDEO_PROFILE_PORTRAIT_4K_3 = 1072,
    /** Default 640 &times; 360, frame rate 15 fps, bitrate 400 Kbps. */
    VIDEO_PROFILE_DEFAULT = VIDEO_PROFILE_LANDSCAPE_360P,
};

/** Audio profile.

Sets the sampling rate, bitrate, encode mode, and the number of channels:*/
enum AUDIO_PROFILE_TYPE // sample rate, bit rate, mono/stereo, speech/music codec
{
  /**
   0: Default audio profile. In the communication mode, the default value is 1; in the live-broadcast mode, the default value is 2.
   */
    AUDIO_PROFILE_DEFAULT = 0, // use default settings
    /**
     1: Sampling rate of 32 kHz, audio encoding, mono, and bitrate up to 18 Kbps.
     */
    AUDIO_PROFILE_SPEECH_STANDARD = 1, // 32Khz, 18Kbps, mono, speech
    /**
     2: Sampling rate of 48 kHz, music encoding, mono, and bitrate up to 48 Kbps.
     */
    AUDIO_PROFILE_MUSIC_STANDARD = 2, // 48Khz, 48Kbps, mono, music
    /**
     3: Sampling rate of 48 kHz, music encoding, stereo, and bitrate up to 56 Kbps.
     */
    AUDIO_PROFILE_MUSIC_STANDARD_STEREO = 3, // 48Khz, 56Kbps, stereo, music
    /**
     4: Sampling rate of 48 kHz, music encoding, mono, and bitrate up to 128 Kbps.
     */
    AUDIO_PROFILE_MUSIC_HIGH_QUALITY = 4, // 48Khz, 128Kbps, mono, music
    /**
     5: Sampling rate of 48 kHz, music encoding, stereo, and bitrate up to 192 Kbps.
     */
    AUDIO_PROFILE_MUSIC_HIGH_QUALITY_STEREO = 5, // 48Khz, 192Kbps, stereo, music
    /**
     6: Sampling rate of 16 kHz, audio encoding, mono, and Acoustic Echo Cancellation (AES) enabled.
     */
    AUDIO_PROFILE_IOT                       = 6,
    AUDIO_PROFILE_NUM = 7,
};

/** Audio application scenario.
*/
enum AUDIO_SCENARIO_TYPE // set a suitable scenario for your app type
{
    /** 0: Default. */
    AUDIO_SCENARIO_DEFAULT = 0,
    /** 1: Entertainment scenario, supporting voice during gameplay. */
    AUDIO_SCENARIO_CHATROOM_ENTERTAINMENT = 1,
    /** 2: Education scenario, prioritizing fluency and stability. */
    AUDIO_SCENARIO_EDUCATION = 2,
    /** 3: Live gaming scenario, enabling the gaming audio effects in the speaker mode in a live broadcast scenario. Choose this scenario if you wish to achieve high-fidelity music playback. */
    AUDIO_SCENARIO_GAME_STREAMING = 3,
    /** 4: Showroom scenario, optimizing the audio quality with external professional equipment. */
    AUDIO_SCENARIO_SHOWROOM = 4,
    /** 5: Gaming scenario. */
    AUDIO_SCENARIO_CHATROOM_GAMING = 5,
    /** 6: Applicable to the IoT scenerio. */
    AUDIO_SCENARIO_IOT = 6,
    AUDIO_SCENARIO_NUM = 7,
};

 /** Channel profile.
 */
enum CHANNEL_PROFILE_TYPE
{
  /** 0: Communication.

   This is used in one-on-one calls or group calls, where all users in the channel can talk freely.
   */
	CHANNEL_PROFILE_COMMUNICATION = 0,
  /** 1: Live Broadcast.

   Host and audience roles that can be set by calling IRtcEngine::setClientRole "setClientRole". The host sends and receives voice, while the audience receives voice only with the sending function disabled.
   */
	CHANNEL_PROFILE_LIVE_BROADCASTING = 1,
  /** 2: Gaming.

   @note This profile applies to the Agora Gaming SDK only.

   Any user in the channel can talk freely. This mode uses the codec with low-power consumption and low bitrate by default.
   */
    CHANNEL_PROFILE_GAME = 2,
};

/** Client role in a live broadcast. */
enum CLIENT_ROLE_TYPE
{
    /** 1: Host */
    CLIENT_ROLE_BROADCASTER = 1,
        /** 2: Audience */
    CLIENT_ROLE_AUDIENCE = 2,
};

/** Reason for the user being offline. */
enum USER_OFFLINE_REASON_TYPE
{
    /** 0: A user has quit the call. */
    USER_OFFLINE_QUIT = 0,
    /** 1: The SDK timed out and the user dropped offline because it has not received any data package within a certain period of time. If a user quits the call and the message is not passed to the SDK (due to an unreliable channel), the SDK assumes the user has dropped offline. */
    USER_OFFLINE_DROPPED = 1,
      /** 2: User switched to an audience */
    USER_OFFLINE_BECOME_AUDIENCE = 2,
};

/** Status of importing an external video stream in a live broadcast. */
enum INJECT_STREAM_STATUS
{
    /** 0: The external video stream imported successfully. */
    INJECT_STREAM_STATUS_START_SUCCESS = 0,
    /** 1: The external video stream already exists. */
    INJECT_STREAM_STATUS_START_ALREADY_EXISTS = 1,
        /** 2: The external video stream import is unauthorized */
    INJECT_STREAM_STATUS_START_UNAUTHORIZED = 2,
    /** 3: Import external video stream timeout. */
    INJECT_STREAM_STATUS_START_TIMEDOUT = 3,
      /** 4: The external video stream failed to import. */
    INJECT_STREAM_STATUS_START_FAILED = 4,
      /** 5: The external video stream imports successfully. */
    INJECT_STREAM_STATUS_STOP_SUCCESS = 5,
    /** 6: No external video stream is found. */
    INJECT_STREAM_STATUS_STOP_NOT_FOUND = 6,
        /** 7: The external video stream is stopped from being unauthorized. */
    INJECT_STREAM_STATUS_STOP_UNAUTHORIZED = 7,
    /** 8: Importing the external video stream timeout. */
    INJECT_STREAM_STATUS_STOP_TIMEDOUT = 8,
      /** 9: Importing the external video stream failed. */
    INJECT_STREAM_STATUS_STOP_FAILED = 9,
      /** 10: The external video stream is broken. */
    INJECT_STREAM_STATUS_BROKEN = 10,
};
/** Remote video stream type. */
enum REMOTE_VIDEO_STREAM_TYPE
{
      /** 0: High-video stream */
    REMOTE_VIDEO_STREAM_HIGH = 0,
      /** 1: Low-video stream */
    REMOTE_VIDEO_STREAM_LOW = 1,
};

/** Use mode of the media::IAudioFrameObserver::onRecordAudioFrame "onRecordAudioFrame" callback function. */
enum RAW_AUDIO_FRAME_OP_MODE_TYPE
{
    /** 0: Read-only mode: Users only read the AudioFrame data without modifying anything. For example, when users acquire data with the Agora SDK then push the RTMP streams. */
    RAW_AUDIO_FRAME_OP_MODE_READ_ONLY = 0,
    /** 1: Write-only mode: Users replace the AudioFrame data with their own data and pass them to the SDK for encoding. For example, when users acquire data. */
    RAW_AUDIO_FRAME_OP_MODE_WRITE_ONLY = 1,
    /** 2: Read and write mode: Users read the data from AudioFrame, modify it, and then play it. For example, when users have their own sound-effect processing module and do some voice pre-processing such as a voice change. */
    RAW_AUDIO_FRAME_OP_MODE_READ_WRITE = 2,
};

/** Audio-sampling rate. */
enum AUDIO_SAMPLE_RATE_TYPE
{
    /** 32000: 32 kHz */
    AUDIO_SAMPLE_RATE_32000 = 32000,
    /** 44100: 44.1 kHz */
    AUDIO_SAMPLE_RATE_44100 = 44100,
      /** 48000: 48 kHz */
    AUDIO_SAMPLE_RATE_48000 = 48000,
};

/** Video codec profile type. */
enum VIDEO_CODEC_PROFILE_TYPE
{  /** 66: Baseline video codec profile. Generally used on video call on mobile phones. */
    VIDEO_CODEC_PROFILE_BASELINE = 66,
    /** 77: Main video codec profile. Generally used on mainstream electronics such as mp4, portable video player, PSP and iPad. */
    VIDEO_CODEC_PROFILE_MAIN = 77,
      /**  100: (Default) High video codec profile. Generally used on high-resolution broadcast or television. */
    VIDEO_CODEC_PROFILE_HIGH = 100,
};

/** Audio equalization band frequency. */
enum AUDIO_EQUALIZATION_BAND_FREQUENCY
{
    /** 0: 31 Hz */
    AUDIO_EQUALIZATION_BAND_31 = 0,
      /** 1: 62 Hz */
    AUDIO_EQUALIZATION_BAND_62 = 1,
    /** 2: 125 Hz */
    AUDIO_EQUALIZATION_BAND_125 = 2,
      /** 3: 250 Hz */
    AUDIO_EQUALIZATION_BAND_250 = 3,
      /** 4: 500 Hz */
    AUDIO_EQUALIZATION_BAND_500 = 4,
        /** 5: 1 kHz */
    AUDIO_EQUALIZATION_BAND_1K = 5,
        /** 6: 2 kHz */
    AUDIO_EQUALIZATION_BAND_2K = 6,
        /** 7: 4 kHz */
    AUDIO_EQUALIZATION_BAND_4K = 7,
        /** 8: 8 kHz */
    AUDIO_EQUALIZATION_BAND_8K = 8,
      /** 9: 16 kHz */
    AUDIO_EQUALIZATION_BAND_16K = 9,
};

/** Audio reverberation type. */
enum AUDIO_REVERB_TYPE
{
    /** 0: db, [-20,10], the level of the dry signal */
    AUDIO_REVERB_DRY_LEVEL = 0, // (dB, [-20,10]), the level of the dry signal
    /** 1: dB, [-20,10], the level of the early reflection signal (wet signal) */
    AUDIO_REVERB_WET_LEVEL = 1, // (dB, [-20,10]), the level of the early reflection signal (wet signal)
    /** 2: [0,100], the room size of the reflection */
    AUDIO_REVERB_ROOM_SIZE = 2, // ([0,100]), the room size of the reflection
    /** 3: ms, [0,200], the length of the initial delay of the wet signal in ms */
    AUDIO_REVERB_WET_DELAY = 3, // (ms, [0,200]), the length of the initial delay of the wet signal in ms
    /** 4: [0,100], the strength of the late reverberation */
    AUDIO_REVERB_STRENGTH = 4, // ([0,100]), the strength of the late reverberation
};

/** Remote video state. */
enum REMOTE_VIDEO_STATE
{
    // REMOTE_VIDEO_STATE_STOPPED is not used at this version. Ignore this value.
    // REMOTE_VIDEO_STATE_STOPPED = 0,  // Default state, video is started or remote user disabled/muted video stream
      /** 1: Remote video is playing. */
      REMOTE_VIDEO_STATE_RUNNING = 1,  // Running state, remote video can be displayed normally
      /** 2: Remote video is frozen. */
      REMOTE_VIDEO_STATE_FROZEN = 2,    // Remote video is frozen, probably due to network issue.
};

/** Video frame rate. */
enum FRAME_RATE
{
      /** 1: 1 fps */
    FRAME_RATE_FPS_1 = 1,
        /** 7: 7 fps */
    FRAME_RATE_FPS_7 = 7,
      /** 10: 10 fps */
    FRAME_RATE_FPS_10 = 10,
    /** 15: 15 fps */
    FRAME_RATE_FPS_15 = 15,
        /** 24: 24 fps */
    FRAME_RATE_FPS_24 = 24,
    /** 30: 30 fps */
    FRAME_RATE_FPS_30 = 30,
    /** 60: 60 fps (Windows and macOS only) */
    FRAME_RATE_FPS_60 = 60,
};

/** Video output orientation mode.
 */
enum ORIENTATION_MODE {
  /** 0: Adaptive mode (Default).

   The video encoder adapts to the orientation mode of the video input device.

   - If the width of the captured video from the SDK is larger than the height, the video sent out by the encoder is in landscape mode. The encoder also sends out the rotational information of the video, and the receiving end will rotate the received video based on the rotational information.
   - When a custom video source is used, the output video from the encoder inherits the orientation of the original video. If the original video is in  portrait mode, the output video from the encoder is also in portrait mode. The encoder also sends out the rotational information of the video to the receiver.
   */
    ORIENTATION_MODE_ADAPTIVE = 0,
    /** 1: Landscape mode.

     The video encoder always sends out the video in landscape mode. The original video is rotated before being sent out and the rotational information is therefore 0. This mode applies to scenarios involving CDN live streaming.
     */
    ORIENTATION_MODE_FIXED_LANDSCAPE = 1,
    /** 2: Portrait mode.

     The video encoder always sends out the video in portrait mode. The original video is rotated before being sent out and the rotational information is therefore 0. This mode applies to scenarios involving CDN live streaming.
     */
    ORIENTATION_MODE_FIXED_PORTRAIT = 2,
};

/** Stream fallback options. */
enum STREAM_FALLBACK_OPTIONS
{
    /** 0: No fallback operation for the local/remote stream when the uplink/downlink network condition is poor. The quality of the stream cannot be guaranteed. */
    STREAM_FALLBACK_OPTION_DISABLED = 0,
    /** 1: Under poor downlink network conditions, the SDK will receive the low stream (lower resolution and lower bitrate). You can only set this option in RtcEngineParameters::setRemoteSubscribeFallbackOption "setRemoteSubscribeFallbackOption". Nothing happens when you set this in RtcEngineParameters::setLocalPublishFallbackOption "setLocalPublishFallbackOption". */
    STREAM_FALLBACK_OPTION_VIDEO_STREAM_LOW = 1,
    /** 2: Under poor network conditions, the SDK may send or receive the low stream (lower resolution and lower bitrate) first, but if the network still does not allow displaying the video, the SDK will send or receive audio only. */
    STREAM_FALLBACK_OPTION_AUDIO_ONLY = 2,
};

/** Properties of the audio volume information.

An array containing the user ID and volume information for each speaker.
 */

struct AudioVolumeInfo
{
  /**
 User ID of the speaker. The uid of the local user is 0.
 */
    uid_t uid;
    /** The volume of the speaker. The volume ranges between 0 (lowest volume) and 255 (highest volume).
 */
    unsigned int volume;
};

/** Statistics of the channel.
 */
struct RtcStats
{
  /**
   Call duration (s), represented by an aggregate value.
   */
    unsigned int duration;
    /**
     Total number of bytes transmitted, represented by an aggregate value.
     */
    unsigned int txBytes;
    /**
     Total number of bytes received, represented by an aggregate value.
     */
    unsigned int rxBytes;
    /**
     Transmission bitrate (Kbps), represented by an instantaneous value.
     */
    unsigned short txKBitRate;
    /**
     Receive bitrate (Kbps), represented by an instantaneous value.
     */
    unsigned short rxKBitRate;
    /**
     Audio receive bitrate (Kbps), represented by an instantaneous value.
     */
    unsigned short rxAudioKBitRate;
    /**
     Audio transmission bitrate (Kbps), represented by an instantaneous value.
     */
    unsigned short txAudioKBitRate;
    /**
     Video receive bitrate (Kbps), represented by an instantaneous value.
     */
    unsigned short rxVideoKBitRate;
    /**
     Video transmission bitrate (Kbps), represented by an instantaneous value.
     */
    unsigned short txVideoKBitRate;
    /** Client-server latency (ms)
     */
    unsigned short lastmileDelay;
    /** Number of users in the channel.

     - Communication mode: The number of users in the channel.
     - Live broadcast mode:

         -  If the local user is an audience: The number of hosts in the channel + 1.
         -  If the user is a host: The number of hosts in the channel.
     */
    unsigned int userCount;
    /**
     Application CPU usage (%).
     */
    double cpuAppUsage;
    /**
     System CPU usage (%).
     */
    double cpuTotalUsage;
};

/** Statistics of the local video stream.
 */
struct LocalVideoStats
{
  /** Data transmission bitrate (Kbps) sent since last count.
   */
    int sentBitrate;
    /** Data transmission frame rate (fps) sent since last count.
     */
    int sentFrameRate;
};
/** Statistics of the remote video stream.
 */
struct RemoteVideoStats
{
  /**
 User ID of the user sending the video streams.
 */
    uid_t uid;
    /** @deprecated Time delay (ms).
 */
    int delay;
/**
 Width (pixels) of the video stream.
 */
	int width;
  /**
 Height (pixels) of the video stream.
 */
	int height;
  /**
 Data receive bitrate (Kbps) received since the last count.
 */
	int receivedBitrate;
  /**
 Data receive frame rate (fps) received since the last count.
 */
	int receivedFrameRate;
  /**
   Remote video stream type (high- or low-video stream): #REMOTE_VIDEO_STREAM_TYPE
   */
    REMOTE_VIDEO_STREAM_TYPE rxStreamType;
};

/** @deprecated
 Rtc video compositing layout.
 */
struct VideoCompositingLayout
{
  /** @deprecated
   The display region of a specified user on the screen.
   */
    struct Region {
      /** User ID of the user whose video will be displayed on the screen.
      */
        uid_t uid;
        /** Horizontal position of the region on the screen. The value ranges between 0.0 and 1.0.
        */
        double x;//[0,1]
        /** Vertical position of the region on the screen. The value ranges between 0.0 and 1.0.
         */
        double y;//[0,1]
        /** Actual width of the region. The value ranges between 0.0 and 1.0. For example, if the width of the screen is 360, and the width of the region is 120, set the width value as 0.33.
        */
        double width;//[0,1]
        /** Actual height of the region. The value ranges between 0.0 and 1.0. For example, if the height of the screen is 240, and the height of the region is 120, set the height value as 0.5.
        */
        double height;//[0,1]
        /** Layer position of the region:

         - 0: (Default) The region is at the bottom layer.
         - 100: The region is at the top layer.

         @note
         - If zOrder is beyond this range, the SDK reports #ERR_INVALID_ARGUMENT.
         - As of v2.3, the SDK supports zOrder = 0.
         */
        int zOrder; //optional, [0, 100] //0 (default): bottom most, 100: top most

    /** The transparency of the video region in CDN live. The value ranges between 0.0 and 1.0:

    - 0: The region is transparent.
    - 1: (Default) The region is opaque.
    */
        double alpha;
        /** @deprecated This parameter will not take effect. Ignore it.
         */
        RENDER_MODE_TYPE renderMode;
        Region()
            :uid(0)
            , x(0)
            , y(0)
            , width(0)
            , height(0)
            , zOrder(0)
            , alpha(1.0)
            , renderMode(RENDER_MODE_HIDDEN)
        {}

    };
    /** Ignore this parameter. The width of the canvas is set by \ref IRtcEngine::configPublisher "configPublisher", not by \ref VideoCompositingLayout::canvasWidth "canvasWidth".
    */
    int canvasWidth;
    /** Ignore this parameter. The height of the canvas is set by \ref IRtcEngine::configPublisher "configPublisher", not by \ref VideoCompositingLayout::canvasHeight "canvasWidth".
    */
    int canvasHeight;
    /** RGB hex color value.

     @note Do not include a #. For example, C0C0C0.
     */
    const char* backgroundColor;
    /** Screen display region information.

     Sets the screen display region of a host or a delegated host in CDN live streaming. See Region for more information.
     */
    const Region* regions;
    /** Number of the screen display regions.
     */
    int regionCount;
    /** Application-defined data.
    */
    const char* appData;
    /** Length of the user-defined application data.
    */
    int appDataLength;
    VideoCompositingLayout()
        :canvasWidth(0)
        ,canvasHeight(0)
        ,backgroundColor(NULL)
        ,regions(NULL)
        , regionCount(0)
        , appData(NULL)
        , appDataLength(0)
    {}
};

/**
 * Video dimensions.
 */
struct VideoDimensions {
    /** The width of the video in number of pixels.*/
    int width;
      /** The height of the video in number of pixels.*/
    int height;
    VideoDimensions()
        : width(0), height(0)
    {}
    VideoDimensions(int w, int h)
        : width(w), height(h)
    {}
};

/** (Recommended) The standard bitrate in \ref IRtcEngine::setVideoEncoderConfiguration "setVideoEncoderConfiguration".

 In this mode, the bitrate in the live broadcast profile differs from the communication profile:

 - In the communication profile, the video bitrate is the same as the base bitrate.
 - In the live broadcast profile, the videobitrate is twice the base bitrate.

 */
const int STANDARD_BITRATE = 0;

/** The compatible bitrate in \ref IRtcEngine::setVideoEncoderConfiguration "setVideoEncoderConfiguration".

 The bitrate remains the same regardless of the channel profile. If you choose this mode in the live broadcast profile, the video frame rate may be lower than the set value.
 */
const int COMPATIBLE_BITRATE = -1;
/** Properties of the video encoder configuration.
 */
struct VideoEncoderConfiguration {
  /** The video frame dimension used to specify the video quality and measured by the total number of pixels along a frame's width and height: VideoDimensions.
  */
    VideoDimensions dimensions;
    /** Frame rate of the video: #FRAME_RATE.
    */
    FRAME_RATE frameRate;
    /** Bitrate of the video.

     - #STANDARD_BITRATE: (Recommended) Standard bitrate.
     - #COMPATIBLE_BITRATE: Compatible bitrate.

     Agora uses different video codecs for different channel profiles to optimize the user experience. For example, a communication channel prioritizes the smoothness while a live broadcast channel emphasizes on the video quality (higher bitrate requirements for a live broadcast channel). Therefore, Agora recommends setting this parameter as #STANDARD_BITRATE.

     | Resoulution            | Frame Rate (fps) | Base Bitrate (Kbps)   |
     |------------------------|------------------|-----------------------|
     | 160 &times; 120        | 15               | 65                    |
     | 120 &times; 120        | 15               | 50                    |
     | 320 &times; 180        | 15               | 140                   |
     | 180 &times; 180        | 15               | 100                   |
     | 240 &times; 180        | 15               | 120                   |
     | 320 &times; 240        | 15               | 200                   |
     | 240 &times; 240        | 15               | 140                   |
     | 424 &times; 240        | 15               | 220                   |
     | 640 &times; 360        | 15               | 400                   |
     | 360 &times; 360        | 15               | 260                   |
     | 640 &times; 360        | 30               | 600                   |
     | 360 &times; 360        | 30               | 400                   |
     | 480 &times; 360        | 15               | 320                   |
     | 480 &times; 360        | 30               | 490                   |
     | 640 &times; 480        | 15               | 500                   |
     | 480 &times; 480        | 15               | 400                   |
     | 640 &times; 480        | 30               | 750                   |
     | 480 &times; 480        | 30               | 600                   |
     | 848 &times; 480        | 15               | 610                   |
     | 848 &times; 480        | 30               | 930                   |
     | 640 &times; 480        | 10               | 400                   |
     | 1280 &times; 720       | 15               | 1130                  |
     | 1280 &times; 720       | 30               | 1710                  |
     | 960 &times; 720        | 15               | 910                   |
     | 960 &times; 720        | 30               | 1380                  |
     | 1920 &times; 1080      | 15               | 2080                  |
     | 1920 &times; 1080      | 30               | 3150                  |
     | 1920 &times; 1080      | 60               | 4780                  |
     | 2560 &times; 1440      | 30               | 4850                  |
     | 2560 &times; 1440      | 60               | 6500                  |
     | 3840 &times; 2160      | 30               | 6500                  |
     | 3840 &times; 2160      | 60               | 6500                  |

     @note The base bitrate in this table applies to a communication channel. A live broadcast channel generally requires a higher bitrate for better video quality. Agora recommends setting the bitrate mode as #STANDARD_BITRATE. You can also set the bitrate as twice the base bitrate.

     */
    int bitrate;
    /** Video orientation mode of the video: #ORIENTATION_MODE.
    */
    ORIENTATION_MODE orientationMode;
    VideoEncoderConfiguration(
        const VideoDimensions& d, FRAME_RATE f,
        int b, ORIENTATION_MODE m)
        : dimensions(d), frameRate(f), bitrate(b), orientationMode(m)
    {}
    VideoEncoderConfiguration(
        int width, int height, FRAME_RATE f,
        int b, ORIENTATION_MODE m)
        : dimensions(width, height), frameRate(f), bitrate(b), orientationMode(m)
    {}
    VideoEncoderConfiguration()
        : frameRate(FRAME_RATE_FPS_30)
        , bitrate(0)
        , orientationMode(ORIENTATION_MODE_ADAPTIVE)
    {}
};
/** Definition of the rectangular region. */
typedef struct Rect {
    /** Y-axis of the top line.
     */
    int top;
    /** X-axis of the left line.
     */
    int left;
    /** Y-axis of the bottom line.
     */
    int bottom;
    /** X-axis of the right line.
     */
    int right;

    Rect(): top(0), left(0), bottom(0), right(0) {}
    Rect(int t, int l, int b, int r): top(t), left(l), bottom(b), right(r) {}
} Rect;

/** TranscodingUser defines the video properties of the user displaying the video in the CDN live. Agora supports a maximum of 17 transcoding users in a CDN streaming channel.
*/
typedef struct TranscodingUser {
  /** User ID of the user displaying the video in the CDN live.
  */
    uid_t uid;

/** Horizontal position from the top left corner of the video frame.
*/
    int x;
    /** Vertical position from the top left corner of the video frame.
    */
    int y;
    /** Width of the video frame. The default value is 360.
    */
    int width;
    /** Height of the video frame. The default value is 640.
    */
    int height;

    /** Layer position of the video frame. The value ranges between 0 and 100.

     - 0: (Default) Lowest
     - 100: Highest

     @note
     - If zOrder is beyond this range, the SDK reports #ERR_INVALID_ARGUMENT.
     - As of v2.3, the SDK supports zOrder = 0.
     */
    int zOrder;
    /**  Transparency of the video frame in CDN live. The value ranges between 0 and 1.0:

     - 0: Completely transparent
     - 1.0: (Default) Opaque
     */
    double alpha;
    /** The audio channel of the sound. The default value is 0:

     - 0: (Default) Supports dual channels at most, depending on the upstream of the broadcaster.
     - 1: The audio stream of the broadcaster uses the FL audio channel. If the upstream of the broadcaster uses multiple audio channels, these channels will be mixed into mono first.
     - 2: The audio stream of the broadcaster uses the FC audio channel. If the upstream of the broadcaster uses multiple audio channels, these channels will be mixed into mono first.
     - 3: The audio stream of the broadcaster uses the FR audio channel. If the upstream of the broadcaster uses multiple audio channels, these channels will be mixed into mono first.
     - 4: The audio stream of the broadcaster uses the BL audio channel. If the upstream of the broadcaster uses multiple audio channels, these channels will be mixed into mono first.
     - 5: The audio stream of the broadcaster uses the BR audio channel. If the upstream of the broadcaster uses multiple audio channels, these channels will be mixed into mono first.

     @note If your setting is not 0, you may need a specialized player.
     */
    int audioChannel;
    TranscodingUser()
        : uid(0)
        , x(0)
        , y(0)
        , width(0)
        , height(0)
        , zOrder(0)
        , alpha(1.0)
        , audioChannel(0)
    {}

} TranscodingUser;

/** Image properties.

 A structure for setting the properties of the watermark and background images.
 */
typedef struct RtcImage {
    RtcImage() :
       url(NULL),
       x(0),
       y(0),
       width(0),
       height(0)
    {}
    /** URL address of the image on the broadcasting video. */
    const char* url;
    /** Horizontal position of the image from the upper left of the broadcasting video. */
    int x;
    /** Vertical position of the image from the upper left of the broadcasting video. */
    int y;
    /** Width of the image on the broadcasting video. */
    int width;
    /** Height of the image on the broadcasting video. */
    int height;
} RtcImage;

/**  A structure for managing CDN live audio/video transcoding settings.
*/
typedef struct LiveTranscoding {
  /** Width of the video. The default value is 360.
   */
    int width;
    /** Height of the video. The default value is 640.
    */
    int height;
    /** Bitrate of the CDN live output video stream. The default value is 400 Kbps.
    */
    int videoBitrate;
    /** Frame rate of the output video stream set for the CDN live broadcast. The default value is 15 fps.
    */
    int videoFramerate;

    /** Latency mode:

     - true: Low latency with unassured quality.
     - false:（Default）High latency with assured quality.
     */
    bool lowLatency;

    /** Video GOP in frames. The default value is 30 fps.
    */
    int videoGop;
    /** Self-defined video codec profile: #VIDEO_CODEC_PROFILE_TYPE
    */
    VIDEO_CODEC_PROFILE_TYPE videoCodecProfile;
    /** RGB hex value.

     Background color of the output video stream for CDN live broadcast. It is defined as int color = (A & 0xff) << 24 | (R & 0xff) << 16 | (G & 0xff) << 8 | (B & 0xff). Users can set the backgroundColor with ARGB ColorInt.

     @note Value only, do not include a #. For example, C0C0C0.
     */
    unsigned int backgroundColor;
    /** The number of users in the live broadcast.
     */
    unsigned int userCount;
    /** TranscodingUser
    */
    TranscodingUser *transcodingUsers;
    /** Reserved property. Extra user-defined information to send SEI for the H.264/H.265 video stream to the CDN live client.
     */
    const char *transcodingExtraInfo;

    /** The metadata sent to the CDN live client defined by the RTMP or FLV metadata.
     */
    const char *metadata;
    /** The watermark image added to the CDN live publishing stream.

    The audience of the CDN live publishing stream can see the watermark image. See RtcImage.
    */
    RtcImage* watermark;
    /** The background image added to the CDN live publishing stream.

    The audience of the CDN live publishing stream can see the background image. See RtcImage.
    */
    RtcImage* backgroundImage;
    /** Self-defined audio-sampling rate: #AUDIO_SAMPLE_RATE_TYPE
    */
    AUDIO_SAMPLE_RATE_TYPE audioSampleRate;
    /** Bitrate of the CDN live audio output stream. The default value is 48 Kbps, and the highest value is 128.
     */
    int audioBitrate;
    /** Agora's self-defined audio-channel type. Agora recommends choosing 1 or 2. A special player is required if you choose 3, 4 or 5:

     - 1: (Default) Mono
     - 2: Dual-sound channels
     - 3: Three-sound channels
     - 4: Four-sound channels
     - 5: Five-sound channels
     */
    int audioChannels;

    LiveTranscoding()
        : width(360)
        , height(640)
        , videoBitrate(400)
        , videoFramerate(15)
        , lowLatency(false)
        , videoGop(30)
        , videoCodecProfile(VIDEO_CODEC_PROFILE_HIGH)
        , backgroundColor(0x000000)
        , userCount(0)
        , transcodingUsers(NULL)
        , transcodingExtraInfo(NULL)
        , watermark(NULL)
        , audioSampleRate(AUDIO_SAMPLE_RATE_48000)
        , audioBitrate(48)
        , audioChannels(1)
    {}
} LiveTranscoding;

/** Configuration of the imported live broadcast voice or video stream.
 */
struct InjectStreamConfig {
    /** Width of the added stream in the broadcast. The default value is 0 (same width as the original stream).
     */
    int width;
    /** Height of the added stream in the broadcast. The default value is 0 (same height as the original stream).
     */
    int height;
    /** Video GOP of the added stream in the broadcast in frames. The default value is 30 fps.
     */
    int videoGop;
    /**  Video frame rate of the added stream in the broadcast. The default value is 15 fps.
     */
    int videoFramerate;
    /** Video bitrate of the added stream in the broadcast. The default value is 400 Kbps.

     @note The setting of the video bitrate is closely linked to the resolution. If the video bitrate you set is beyond the reasonable range, the SDK will set it within the reasonable range instead.
     */
    int videoBitrate;
    /** Audio-sampling rate of the added stream in the broadcast: #AUDIO_SAMPLE_RATE_TYPE. The default value is 48000.
     */
    AUDIO_SAMPLE_RATE_TYPE audioSampleRate;
    /** Audio bitrate of the added stream in the broadcast. The default value is 48.
     */
    int audioBitrate;
    /** Audio channels to add into the broadcast.

     - 1: (Default) Mono
     - 2: Dual-sound channels
     */
    int audioChannels;

    // width / height default set to 0 means pull the stream with its original resolution
    InjectStreamConfig()
        : width(0)
        , height(0)
        , videoGop(30)
        , videoFramerate(15)
        , videoBitrate(400)
        , audioSampleRate(AUDIO_SAMPLE_RATE_48000)
        , audioBitrate(48)
        , audioChannels(1)
    {}
};

/**  @deprecated Lifecycle of the CDN live video stream.
*/
enum RTMP_STREAM_LIFE_CYCLE_TYPE
{
  /** Bound to the channel lifecycle. If all hosts leave the channel, the CDN live streaming stops after 30 seconds.
  */
	RTMP_STREAM_LIFE_CYCLE_BIND2CHANNEL = 1,
  /** Bound to the owner of the RTMP stream. If the owner leaves the channel, the CDN live streaming stops immediately.
  */
	RTMP_STREAM_LIFE_CYCLE_BIND2OWNER = 2,
};

/** @deprecated
*/
struct PublisherConfiguration {
  /** Width of the CDN live output video stream. The default value is 360.
  */
	int width;
  /** Height of the CDN live output video stream. The default value is 640.
  */
	int height;
  /** Frame rate of the CDN live output video stream. The default value is 15 fps.
  */
	int framerate;
  /** Bitrate of the CDN live output video stream. The default value is 500 Kbps.
  */
	int bitrate;
  /** Default layout:

   - 0: Tile horizontally
   - 1: Layered windows
   - 2: Tile vertically
   */
	int defaultLayout;
    /** Video stream lifecycle of CDN live: #RTMP_STREAM_LIFE_CYCLE_TYPE.
  */
	int lifecycle;
  /** Whether the current user is the owner of the RTMP stream:

   - true: Yes (default). The push-stream configuration takes effect.
   - false: No. The push-stream configuration will not work.
   */
	bool owner;
  /** Width of the injected stream. Not effective as yet. Set it as 0.
  */
	int injectStreamWidth;
  /** Height of the injected stream. Not effective as yet. Set it as 0.
  */
	int injectStreamHeight;
  /** URL address of the injected stream in the channel. Not effective as yet.
  */
	const char* injectStreamUrl;
  /** Push-stream URL address for the picture-in-picture layouts. The default value is NULL.
  */
	const char* publishUrl;
  /** The push-stream URL address of the original stream not requiring picture-blending. The default value is NULL.
  */
	const char* rawStreamUrl;
  /** Reserved field. The default value is NULL.
  */
	const char* extraInfo;


	PublisherConfiguration()
		: width(640)
		, height(360)
		, framerate(15)
		, bitrate(500)
		, defaultLayout(1)
		, lifecycle(RTMP_STREAM_LIFE_CYCLE_BIND2CHANNEL)
		, owner(true)
		, injectStreamWidth(0)
		, injectStreamHeight(0)
		, injectStreamUrl(NULL)
		, publishUrl(NULL)
		, rawStreamUrl(NULL)
		, extraInfo(NULL)
	{}

};

#if !defined(__ANDROID__)
/** Video display settings of the VideoCanvas class.
*/
struct VideoCanvas
{
  /** Video display window (view).
  */
    view_t view;
    /** Video display mode:  #RENDER_MODE_TYPE.
    */
    int renderMode;
    uid_t uid;
    void *priv; // private data (underlying video engine denotes it)

    VideoCanvas()
        : view(NULL)
        , renderMode(RENDER_MODE_HIDDEN)
        , uid(0)
        , priv(NULL)
    {}
    VideoCanvas(view_t v, int m, uid_t u)
        : view(v)
        , renderMode(m)
        , uid(u)
        , priv(NULL)
    {}
};
#else
struct VideoCanvas;
#endif

    /** Definition of IPacketObserver.
     */
class IPacketObserver
{
public:
/** Definition of Packet.
 */
	struct Packet
	{
        /** Buffer address of the sent or received data.
         */
		const unsigned char* buffer;
        /** Buffer size of the sent or received data.
         */
		unsigned int size;
	};
	/** The audio packet sent to the other users.

     @param packet See Packet.
     @return
     - true: The packet is sent out.
     - false: The packet is discarded.
     */
	virtual bool onSendAudioPacket(Packet& packet) = 0;
	/** The video packet to send to the other users.

     @param packet See Packet.
     @return
     - true: The packet is sent out.
     - false: The packet is discarded.
     */
	virtual bool onSendVideoPacket(Packet& packet) = 0;
	/** Called by the SDK when an audio packet is received from other users.

     @param packet See Packet.
     @return
     - true: The packet is processed.
     - false: The packet is discarded.
	 */
	virtual bool onReceiveAudioPacket(Packet& packet) = 0;
	/** Called by the SDK when a video packet is received from other users.

     @param packet See Packet.
     @return
     - true: The packet is processed.
     - false: The packet is discarded.
	 */
	virtual bool onReceiveVideoPacket(Packet& packet) = 0;
};


/** The SDK uses the IRtcEngineEventHandler interface class to send callback event notifications to the application. The application inherits the methods of this interface class to retrieve these event notifications.

 All methods in this interface class have default (empty) implementations. Therefore, the application can only inherit some required events. In the callback functions, avoid time-consuming tasks or calling blocking APIs, such as the SendMessage method, otherwise, the SDK may not work properly.
 */
class IRtcEngineEventHandler
{
public:
    virtual ~IRtcEngineEventHandler() {}

    /** A warning has occurred during SDK runtime.

     In most cases, the application can ignore the warning reported by the SDK because the SDK can usually fix the issue and resume running. For example, when losing connection with the server, the SDK may report #WARN_LOOKUP_CHANNEL_TIMEOUT and automatically try to reconnect.

     @param warn Warning code: #WARN_CODE_TYPE.
     @param msg Warning message.
     */
    virtual void onWarning(int warn, const char* msg) {
        (void)warn;
        (void)msg;
    }

    /** An error occurred during SDK runtime.

     In most cases, reporting an error means that the SDK cannot fix the issue and resume running. The SDK requires the application to take action or in the most basic case, informs the user about the issue.

     For example, the SDK reports an #ERR_START_CALL error when failing to initialize a call. The application informs the user that the call initialization failed and invokes the \ref IRtcEngine::leaveChannel "leaveChannel" method to leave the channel.

     @param err Error code: #ERROR_CODE_TYPE.
     @param msg Error message.
     */
    virtual void onError(int err, const char* msg) {
        (void)err;
        (void)msg;
    }

    /** The user has successfully joined the specified channel with an assigned channel ID and user ID.

     The channel ID assignment is based on the channel name specified in the \ref IRtcEngine::joinChannel "joinChannel" method. If the user ID is not specified when joinChannel is called, the server assigns one automatically.

     @param channel  Channel name.
     @param  uid User ID.
     @param  elapsed Time elapsed (ms) from the user calling \ref IRtcEngine::joinChannel "joinChannel" until this callback function is triggered.
     */
    virtual void onJoinChannelSuccess(const char* channel, uid_t uid, int elapsed) {
        (void)channel;
        (void)uid;
        (void)elapsed;
    }

    /** When the client loses connection with the server because of network problems, the SDK automatically attempts to reconnect and triggers this callback function upon reconnection.

     @param channel Channel name.
     @param uid User ID.
     @param elapsed Time elapsed (ms) from starting to reconnect until this event occurs.
     */
    virtual void onRejoinChannelSuccess(const char* channel, uid_t uid, int elapsed) {
        (void)channel;
        (void)uid;
        (void)elapsed;
    }

    /** The user has left the channel.

     When the application calls the \ref IRtcEngine::leaveChannel "leaveChannel" method, the SDK uses this callback function to notify the application that the user has successfully left the channel.

     With this callback function, the application retrieves information, such as the call duration and the statistics of the data.

     @param stats Statistics of the call: RtcStats.
     */
    virtual void onLeaveChannel(const RtcStats& stats) {
        (void)stats;
    }

    /** The user role in a live broadcast has switched. For example, from a host to an audience or vice versa.

     @param oldRole Role that the user switched from: #CLIENT_ROLE_TYPE.
     @param newRole Role that the user switched to: #CLIENT_ROLE_TYPE.
     */
    virtual void onClientRoleChanged(CLIENT_ROLE_TYPE oldRole, CLIENT_ROLE_TYPE newRole) {
    }

    /** A remote user or a host has joined the channel.

     - Communication mode: This callback function notifies the application that another user has joined the channel. If there are other users in the channel when that user joins, the SDK also reports to the application on the existing users who are already in the channel.
     - Live-broadcast mode: This callback function notifies the application that the host has joined the channel. If other hosts are already in the channel, the SDK also reports to the application on the existing hosts who are already in the channel. Agora recommends limiting the number of hosts to 17.

     @note In the live broadcast mode:
     - The host receives the callback when another host joins the channel.
     - The audience in the channel receives the callback when a new host joins the channel.
     - When a web application joins the channel, this callback function is triggered as long as the web application publishes streams.

     @param uid User ID.
     @param elapsed Time delay (ms) from the user calling \ref IRtcEngine::joinChannel "joinChannel" or \ref IRtcEngine::setClientRole "setClientRole" (BROADCASTER) until this callback function is triggered.
     */
    virtual void onUserJoined(uid_t uid, int elapsed) {
        (void)uid;
        (void)elapsed;
    }

    /** A user has left the channel or gone offline.

     The SDK reads the timeout data to determine if a user has left the channel (or has gone offline). If no data package is received from the user within 15 seconds, the SDK assumes the user is offline. A poor network connection may lead to false detections, so use signaling for reliable offline detection.

     @param uid User ID.
     @param reason Reason why the user has gone offline: #USER_OFFLINE_REASON_TYPE.
     */
    virtual void onUserOffline(uid_t uid, USER_OFFLINE_REASON_TYPE reason) {
        (void)uid;
        (void)reason;
    }

    /** The last mile network quality of the local user.

     This callback function is triggered once every two seconds after \ref IRtcEngine::enableLastmileTest "enableLastmileTest" is called.

     If the network test is enabled by calling enableLastmileTest and the user is not in a call, this callback is triggered irregularly to update the application on the network connection quality of the local user.

     @param quality Network quality: #QUALITY_TYPE.
     */
    virtual void onLastmileQuality(int quality) {
        (void)quality;
    }

    /** The connection between the SDK and the server has been interrupted.

    Once the connection is lost, the SDK attempts to reconnect until the application calls \ref IRtcEngine::leaveChannel "leaveChannel".
    */
    virtual void onConnectionInterrupted() {}

    /** The connection between the SDK and the server is lost.

     The onConnectionInterrupted callback function is triggered and the SDK attempts to reconnect automatically.

     If the reconnection fails within a certain period of time (10 seconds by default), the onConnectionLost callback function is triggered. The SDK attempts to reconnect until the application calls \ref IRtcEngine::leaveChannel "leaveChannel".
     */
    virtual void onConnectionLost() {}

    /** Your connection has been banned by the Agora Server.
     */
    virtual void onConnectionBanned() {}

    /** The API call was executed successfully.

     @param api The API executed by the SDK.
     @param err The error code that the SDK returns when the method call fails. If the API call fails, the SDK returns #ERROR_CODE_TYPE. If the SDK returns 0, then the SDK was called successfully.
     @param result The result of the API call.
     */
    virtual void onApiCallExecuted(int err, const char* api, const char* result) {
        (void)err;
        (void)api;
        (void)result;
    }

    /** The Token has expired.

     After a Token is specified by calling \ref IRtcEngine::joinChannel "joinChannel", if the SDK losses connection with the Agora server due to network issues, the Token may expire after a certain period of time and a new Token may be required to reconnect to the server.

     This callback function notifies the application to generate a new Token. Call \ref IRtcEngine::renewToken "renewToken" to renew the Token.

     In previous SDKs, this function was provided in the \ref IRtcEngineEventHandler::onError "onError" callback function, in the #ERR_TOKEN_EXPIRED and #ERR_INVALID_TOKEN errors. Starting from the Agora SDK v1.7.3, the old method is still valid, but it is recommended to use the onRequestToken callback function.
     */
    virtual void onRequestToken() {
    }

    /** The Token will expire in 30 seconds.

     If the Token specified when calling \ref IRtcEngine::joinChannel "joinChannel" expires, the user will become offline. This callback function is triggered 30 seconds before the Token expires to remind the application to renew the Token. Upon receiving this callback function, generate a new Token on the server and call \ref IRtcEngine::renewToken "renewToken" to pass the new Token on to the SDK.

     @param token The Token that will expire in 30 seconds.
     */
    virtual void onTokenPrivilegeWillExpire(const char* token) {
        (void)token;
    }

    /** The audio quality of the current call is reported once every two seconds.

     This callback function is enabled by default.

     @param uid User ID of the speaker.
     @param quality Audio quality of the user: #QUALITY_TYPE
     @param delay Time delay (ms).
     @param lost Audio packet loss rate (%).
     */
    virtual void onAudioQuality(uid_t uid, int quality, unsigned short delay, unsigned short lost) {
        (void)uid;
        (void)quality;
        (void)delay;
        (void)lost;
    }

    /** The statistics of the current call session is reported once every two seconds.

     @param stats RTC engine statistics: RtcStats.
     */
    virtual void onRtcStats(const RtcStats& stats) {
        (void)stats;
    }

    /** The network quality of each user in a communication or live broadcast channel is reported once every two seconds.

     The Agora SDK returns this callback function to report the the uplink and downlink network conditions of each user in the channel.

     @param uid User ID. The network quality of the user with this uid is reported. If uid is 0, it the local network quality is reported.
     @param txQuality Transmission quality of the user: #QUALITY_TYPE.
     @param rxQuality Receiving quality of the user: #QUALITY_TYPE.
     */
    virtual void onNetworkQuality(uid_t uid, int txQuality, int rxQuality) {
    (void)uid;
    (void)txQuality;
    (void)rxQuality;
    }

    /** The statistics of the uploading local video streams are reported once every two seconds.

     @param stats Statistics of the uploading local video streams: LocalVideoStats
     */
  virtual void onLocalVideoStats(const LocalVideoStats& stats) {
    (void)stats;
    }

    /** The statistics of the receiving remote video streams.

     The SDK updates the application with the statistics of receiving remote video streams of each user/host once every 2 seconds. If there are multiple remote users/hosts, this callback is triggered multiple times every 2 seconds.

     @param stats Statistics of the receiving remote video streams: RemoteVideoStats.
     */
  virtual void onRemoteVideoStats(const RemoteVideoStats& stats) {
    (void)stats;
    }

    /** Indicates who is talking and the speaker's volume.

     This callback function is disabled by default and can be enabled by the \ref RtcEngineParameters::enableAudioVolumeIndication "enableAudioVolumeIndication" method.

     In the returned speaker's array:

     - If the uid is 0 (the local user is the speaker), the returned volume is the totalVolume.
     - If the uid is not 0 and the volume is 0, the specified user did not speak.
     - If a uid is present in the previous speaker's array but not in the current speaker's array, the specified user did not speak.

     @param speakers An array thet contains the user ID and volume information for each speaker: AudioVolumeInfo.
     @param speakerNumber Total number of speakers.
     @param totalVolume Total volume after audio mixing. The value ranges between 0 (lowest volume) and 255 (highest volume).
     */
    virtual void onAudioVolumeIndication(const AudioVolumeInfo* speakers, unsigned int speakerNumber, int totalVolume) {
        (void)speakers;
        (void)speakerNumber;
        (void)totalVolume;
    }

    /** The user who is speaking in the channel.

    If the user has enabled the audio volume indication by calling \ref RtcEngineParameters::enableAudioVolumeIndication "enableAudioVolumeIndication", this callback function returns the uid of the active speaker whose voice is detected by the audio volume detection module of the SDK.

    @note
    - To receive this callback function, you need to call \ref RtcEngineParameters::enableAudioVolumeIndication "enableAudioVolumeIndication".
    - This callback function returns the user ID of the user whose voice volume is the highest during a period of time, instead of at an instant.

    @param uid User ID of the active speaker. A uid of 0 represents the local user.
    */
    virtual void onActiveSpeaker(uid_t uid) {
        (void)uid;
    }

    /** The video has stopped.

     The application can use this callback function to change the configuration of the view (for example, displaying other pictures in the view) after the video stops playing.
     */
    virtual void onVideoStopped() {}

    /** The first local video frame is rendered on the video window.

    @param width Width (pixels) of the video stream.
    @param height Height (pixels) of the video stream.
    @param elapsed Time elapsed (ms) from the local user calling \ref IRtcEngine::joinChannel "joinChannel" until this callback function is triggered.
    If \ref IRtcEngine::startPreview "startPreview" is called before joinChannel, then this is the time elapsed from startPreview until this callback is triggered.
    */
    virtual void onFirstLocalVideoFrame(int width, int height, int elapsed) {
        (void)width;
        (void)height;
        (void)elapsed;
    }

    /** The first remote video frame has been received and decoded.

    This callback function is triggered after the first frame of the remote video is received and successfully decoded. The application can configure the user view settings in this callback function.

    @param uid User ID of the remote user sending the video streams.
    @param width Width (pixels) of the video stream.
    @param height Height (pixels) of the video stream.
    @param elapsed Time elapsed (ms) from the remote user calling \ref IRtcEngine::joinChannel "joinChannel" until this callback function is triggered.
    */
    virtual void onFirstRemoteVideoDecoded(uid_t uid, int width, int height, int elapsed) {
        (void)uid;
        (void)width;
        (void)height;
        (void)elapsed;
    }

    /** The first remote video frame has been received and rendered.

    This callback function is triggered when the first frame of the remote video is displayed in the user’s video window. The application is able to retrieve the time elapsed value from a user joining the channel until the first video frame is displayed.

    @param uid User ID of the remote user sending the video stream.
    @param width Width (pixels) of the video frame.
    @param height Height (pixels) of the video stream.
    @param elapsed Time elapsed (ms) from the remote user calling \ref IRtcEngine::joinChannel "joinChannel" until this callback function is triggered.
    */
    virtual void onFirstRemoteVideoFrame(uid_t uid, int width, int height, int elapsed) {
        (void)uid;
        (void)width;
        (void)height;
        (void)elapsed;
    }

    /** A remote user's audio stream has muted or unmuted.

     @note This callback function returns invalid when the number of users in a channel exceeds 20.

     @param uid User ID of the remote user.
     @param muted Whether the remote user's audio stream has muted or unmuted:
     - true: Muted.
     - false: Unmuted.
     */
    virtual void onUserMuteAudio(uid_t uid, bool muted) {
        (void)uid;
        (void)muted;
    }

    /** A remote user's video stream has paused or resumed playing.

     @note This callback function returns invalid when the number of users in a channel exceeds 20.

     @param uid User ID of the remote user.
     @param muted Whether the remote user's video has paused or resumed playing:
     - true: Paused.
     - false: Resumed.
     */
    virtual void onUserMuteVideo(uid_t uid, bool muted) {
        (void)uid;
        (void)muted;
    }


    	/** A specified remote user has enabled/disabled the video function.

         Once the video function is disabled, the user can only use a voice call. The user can neither show/send any video nor receive or display any video from other users.

         @note This callback function returns invalid when the number of users in a channel exceeds 20.

         @param uid User ID of the remote user.
         @param enabled
         - true: The specified remote user has enabled the video function. The user can now enter a video session.
         - false: The specified remote user has disabled the video function. The user can now only enter a voice session, where the user can neither send or receive any video stream.
         */
    	virtual void onUserEnableVideo(uid_t uid, bool enabled) {
    		(void)uid;
    		(void)enabled;
    	}

    /** The audio device state has changed.

     This callback function notifies the application that the system’s audio device state has changed. For example, a headset is unplugged from the device.

     @param deviceId Device ID.
     @param deviceType Device type: #MEDIA_DEVICE_TYPE.
     @param deviceState Device state: #MEDIA_DEVICE_STATE_TYPE.
     */
    virtual void onAudioDeviceStateChanged(const char* deviceId, int deviceType, int deviceState) {
        (void)deviceId;
        (void)deviceType;
        (void)deviceState;
    }

    /** The volume of the playback, microphone, or application has changed.

     @param deviceType Device type: #MEDIA_DEVICE_TYPE.
     @param volume Volume. The value ranges between 0 and 255.
     @param muted
     - true: The audio device is muted.
     - false: The audio device is not muted.
     */
    virtual void onAudioDeviceVolumeChanged(MEDIA_DEVICE_TYPE deviceType, int volume, bool muted) {
        (void)deviceType;
        (void)volume;
        (void)muted;
    }

    /** The camera is turned on and ready to capture the video.

     If the camera fails to turn on, fix the error reported in the \ref IRtcEngineEventHandler::onError "onError" callback function.
     */
    virtual void onCameraReady() {}

    /** The camera focus area has changed.

     @param x x coordinate of the changed camera focus area.
     @param y y coordinate of the changed camera focus area.
     @param width Width of the changed camera focus area.
     @param height Height of the changed camera focus area.
     */
    virtual void onCameraFocusAreaChanged(int x, int y, int width, int height) {
        (void)x;
        (void)y;
        (void)width;
        (void)height;
    }

    /** The audio mixing file playback has finished.

     This callback function is triggered when the audio mixing file playback is finished after calling \ref RtcEngineParameters::startAudioMixing "startAudioMixing".

     If you failed to execute the startAudioMixing method, an error code returns in the \ref IRtcEngineEventHandler::onError "onError" callback function.

     */
    virtual void onAudioMixingFinished() {
    }

    /** Far-end rhythm begins.

     When a remote user calls \ref RtcEngineParameters::startAudioMixing "startAudioMixing" to play the background music, the SDK reports this callback function.
     */
    virtual void onRemoteAudioMixingBegin() {
    }
    /** Far-end rhythm ends.
     */
    virtual void onRemoteAudioMixingEnd() {
    }

    /** The local audio effect playback has finished.

     This callback function is triggered when the audio effect file playback is finished after calling \ref RtcEngineParameters::playEffect "playEffect".

     @param soundId ID of the audio effect. Each audio effect has a unique ID.
     */
    virtual void onAudioEffectFinished(int soundId) {
    }

    /** The video device state has changed.

     This callback function notifies the application that the system's video device state has changed.

     @note On a Windows device with an external camera for video capturing, the video disables once the external camera is unplugged.

     @param deviceId Device ID
     @param deviceType Device type: #MEDIA_DEVICE_TYPE.
     @param deviceState Device state: #MEDIA_DEVICE_STATE_TYPE.
     */
    virtual void onVideoDeviceStateChanged(const char* deviceId, int deviceType, int deviceState) {
        (void)deviceId;
        (void)deviceType;
        (void)deviceState;
    }

    /** The video size or rotation of a specified remote user has changed.

     @param uid User ID of the remote user or local user (0) whose video size or rotation has changed.
     @param width New width (pixels) of the video.
     @param height New height (pixels) of the video.
     @param rotation New rotation of the video [0 to 360).
     */
    virtual void onVideoSizeChanged(uid_t uid, int width, int height, int rotation) {
        (void)uid;
        (void)width;
        (void)height;
        (void)rotation;
    }
    /** The remote video state has changed.

     @param uid ID of the user whose video state has changed.
     @param state State of the remote video: Playing normally or frozen. See #REMOTE_VIDEO_STATE for details.
     */
    virtual void onRemoteVideoStateChanged(uid_t uid, REMOTE_VIDEO_STATE state) {
        (void)uid;
        (void)state;
    }

	/** A specified remote user has enabled/disabled the local video function.

     This callback function is only applicable to the scenario when the user only wants to watch the remote video without sending any video stream to the other user.

     @param uid User ID of the remote user.
     @param enabled
     - true: The specified remote user's local video is enabled. Other users in the channel can see the video of this user.
     - false: The specified remote user's local video is disabled. Other users in the channel can no longer receive the video stream from this user, while this user can still receive the video streams from other users.
     */
    virtual void onUserEnableLocalVideo(uid_t uid, bool enabled) {
        (void)uid;
        (void)enabled;
    }

//    virtual void onStreamError(int streamId, int code, int parameter, const char* message, size_t length) {}
    /** The local user has received the data stream from the remote user within five seconds.

    @param uid User ID of the remote user sending the message.
    @param streamId Stream ID.
    @param data Data received by the local user.
    @param length Length of the data in bytes.
    */
    virtual void onStreamMessage(uid_t uid, int streamId, const char* data, size_t length) {
        (void)uid;
        (void)streamId;
        (void)data;
        (void)length;
    }

	/** The local user has not received the data stream from the remote user within five seconds.

     @param uid User ID of the remote user sending the message.
     @param streamId Stream ID.
     @param code Error code: #ERROR_CODE_TYPE.
     @param missed Number of lost messages.
     @param cached Number of incoming cached messages when the data stream was interrupted.
     */
	virtual void onStreamMessageError(uid_t uid, int streamId, int code, int missed, int cached) {
        (void)uid;
        (void)streamId;
        (void)code;
        (void)missed;
        (void)cached;
    }

    /** The Media Engine has been successfully loaded.*/
    virtual void onMediaEngineLoadSuccess() {
    }
    /** The Media Engine has been successfully started.*/
    virtual void onMediaEngineStartCallSuccess() {
    }

    /** The first audio frame has been received by the local user.

    @param elapsed Time elapsed (ms) from the local user calling \ref IRtcEngine::joinChannel "joinChannel" until this callback function is triggered.
    */
    virtual void onFirstLocalAudioFrame(int elapsed) {
        (void)elapsed;
    }

    /** The first audio frame has been received by the specified remote user.

    @param uid User ID of the remote user.
    @param elapsed Time elapsed (ms) from the remote user calling \ref IRtcEngine::joinChannel "joinChannel" until this callback function is triggered.
    */
    virtual void onFirstRemoteAudioFrame(uid_t uid, int elapsed) {
        (void)uid;
        (void)elapsed;
    }

    /** The status of publishing a stream in CDN live.

     This callback function notifies the host if the stream has been successfully published.

     @param url HTTP/HTTPS URL address to which the publisher publishes the stream.
     @param error Error code: #ERROR_CODE_TYPE
     - #ERR_TIMEDOUT (10): The publishing has timed out.
     - #ERR_ALREADY_IN_USE (19): The chosen HTTP/HTTPS URL address is already in use for CDN live streaming.
     - #ERR_RESOURCE_LIMITED (22): The backend does not have enough resources for the CDN live streaming.
     - #ERR_ENCRYPTED_STREAM_NOT_ALLOWED_PUBLISH (130): You cannot publish an encrypted stream.
     */
    virtual void onStreamPublished(const char *url, int error) {
        (void)url;
        (void)error;
    }
    /** A stream was unpublished.

     This callback function notifies the host that the CDN live stream has been successfully unpublished.

     @param url HTTP/HTTPS URL address to which the publisher unpublishes the stream.
     */
    virtual void onStreamUnpublished(const char *url) {
        (void)url;
    }
/** The publisher's transcoding was updated. */
    virtual void onTranscodingUpdated() {
    }
   /** The status of the externally injected video stream.

    @param url URL address of the externally injected video stream.
    @param uid User ID.
    @param status Status of the externally injected video stream: #INJECT_STREAM_STATUS.
    */
    virtual void onStreamInjectedStatus(const char* url, uid_t uid, int status) {
        (void)url;
        (void)uid;
        (void)status;
    }

   /** The locally published media stream fell back to an audio-only stream due to poor network conditions or switched back to the video after the network conditions improved.

    If you call \ref RtcEngineParameters::setLocalPublishFallbackOption "setLocalPublishFallbackOption" and set option as #STREAM_FALLBACK_OPTION_AUDIO_ONLY, this callback function will be triggered when the locally published stream falls back to audio-only mode due to poor uplink conditions, or when the audio stream switches back to the video after the uplink network condition improves.

    @param isFallbackOrRecover
    - true: The locally published stream fell back to audio-only due to to poor network conditions.
    - false: The locally published stream switched back to the video after the network conditions improved.
    */
    virtual void onLocalPublishFallbackToAudioOnly(bool isFallbackOrRecover) {
        (void)isFallbackOrRecover;
    }

    /** The remotely subscribed media stream fell back to audio-only due to poor network conditions or switched back to the video after the network conditions improved.

     Once you enabled \ref RtcEngineParameters::setRemoteSubscribeFallbackOption "setRemoteSubscribeFallbackOption", this event will be triggered to receive audio only due to poor network conditions or switches back to the video after the network condition improves.

     @note Once the remotely subscribed stream is switched to the low stream due to poor network conditions, you can monitor the stream switch between a high and low stream in the RemoteVideoStats callback function.

     @param uid    Remote user ID
     @param  isFallbackOrRecover
     - true: The remotely subscribed stream fell back to audio-only due to poor network conditions.
     - false: The remotely subscribed stream switched back to the video stream after the network conditions improved.
     */
    virtual void onRemoteSubscribeFallbackToAudioOnly(uid_t uid, bool isFallbackOrRecover) {
        (void)uid;
        (void)isFallbackOrRecover;
    }

    /** Statistics of the remote audio transport.

     This callback function is triggered once every two seconds after a user has received the audio data packet sent from a remote user.

     @param uid  User ID of the remote user sending the audio data packet.
     @param delay Time delay (ms) from the remote user to the local client.
     @param lost Packet loss rate (%).
     @param rxKBitRate  Received audio bitrate (Kbps) of the packet from the remote user.
     */
    virtual void onRemoteAudioTransportStats(
        uid_t uid, unsigned short delay, unsigned short lost,
        unsigned short rxKBitRate) {
        (void)uid;
        (void)delay;
        (void)lost;
        (void)rxKBitRate;
    }

    /** Statistics of the remote video transport.

     This callback function is triggered once every two seconds once the user has received the video data packet sent from a remote user.

     @param uid User ID of the remote user whose video packet has been received.
     @param delay Time delay (ms) from the remote user to the local client.
     @param lost Packet loss rate (%).
     @param rxKBitRate Received video bitrate (Kbps) of the packet from the remote user.
     */
    virtual void onRemoteVideoTransportStats(
        uid_t uid, unsigned short delay, unsigned short lost,
        unsigned short rxKBitRate) {
        (void)uid;
        (void)delay;
        (void)lost;
        (void)rxKBitRate;
    }

    /** The state of the microphone has changed.

     @param enabled
     - true: The microphone is enabled.
     - false: The microphone is disabled.
    */
    virtual void onMicrophoneEnabled(bool enabled) {
        (void)enabled;
    }
};

/**
* Video device collection methods.

 The IVideoDeviceCollection interface class retrieves the video device related numbers or data.
*/
class IVideoDeviceCollection
{
public:
    /** Retrieves the total number of the indexed video devices in the system.

    @return Total number of the indexed video devices:
    */
    virtual int getCount() = 0;

    /** Retrieves a specified piece of information about an indexed video device.

     @param index An input parameter with a specified index. Must be less than the return value of \ref IVideoDeviceCollection::getCount "getCount".
     @param deviceName Device name.
     @param deviceId Device ID.
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int getDevice(int index, char deviceName[MAX_DEVICE_ID_LENGTH], char deviceId[MAX_DEVICE_ID_LENGTH]) = 0;

    /** Sets the device with the device ID.

     @param deviceId Device ID.
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setDevice(const char deviceId[MAX_DEVICE_ID_LENGTH]) = 0;

    /** Releases the resource.
    */
    virtual void release() = 0;
};

/** Video device management methods.

 The IVideoDeviceManager interface class tests the video device interfaces. Instantiate an AVideoDeviceManager class to retrieve an IVideoDeviceManager interface.
*/
class IVideoDeviceManager
{
public:

    /** Enumerates the video devices.

     This method returns an IVideoDeviceCollection object including all video devices in the system. With the IVideoDeviceCollection object, the application can enumerate the video devices. The application must call the \ref IVideoDeviceCollection::release "release" method to release the returned object after using it.

     @return
     - An IVideoDeviceCollection object including all video devices in the system: Success.
     - NULL: Failure.
     */
    virtual IVideoDeviceCollection* enumerateVideoDevices() = 0;

    /** Starts the video capture device test.

     This method tests whether the video-capture device works properly. Before calling this method, ensure you have already called \ref IRtcEngine::enableVideo "enableVideo", and the HWND window handle of the incoming parameter is valid.

     @param hwnd Input parameter. The window handle used to display the screen.
     
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int startDeviceTest(view_t hwnd) = 0;

    /** Stops the video-capture device test.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int stopDeviceTest() = 0;

    /** Sets a device with the device ID.

     @param deviceId Device ID of the video-capture device. Call \ref IVideoDeviceManager::enumerateVideoDevices "enumerateVideoDevices" to retrieve it.

     @note Plugging or unplugging the device does not change the device ID.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setDevice(const char deviceId[MAX_DEVICE_ID_LENGTH]) = 0;

    /** Retrieves the video-capture device that is in use.

     @param deviceId Output parameter. Device ID of the video-capture device.
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int getDevice(char deviceId[MAX_DEVICE_ID_LENGTH]) = 0;

    /** Releases the resource.
    */
    virtual void release() = 0;
};

/** Audio device collection methods.

The IAudioDeviceCollection interface class retrieves device-related information.
*/
class IAudioDeviceCollection
{
public:

    /** Retrieves the total number of audio playback or audio recording devices.

     @note You must first call \ref IAudioDeviceManager::enumeratePlaybackDevices "enumeratePlaybackDevices" or \ref IAudioDeviceManager::enumerateRecordingDevices "enumerateRecordingDevices" before calling this method, to return the number of the audio playback or audio recording devices.

     @return Number of the audio playback or audio recording devices.
     */
    virtual int getCount() = 0;

    /** Retrieves a specified piece of information about the audio device.

     @param index An input parameter specifying the inquired device information.
     @param deviceName An output parameter for the device name.
     @param deviceId An output parameter for the device ID.
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int getDevice(int index, char deviceName[MAX_DEVICE_ID_LENGTH], char deviceId[MAX_DEVICE_ID_LENGTH]) = 0;

    /** Specifies a device with the device ID.

     @param deviceId Device ID.
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setDevice(const char deviceId[MAX_DEVICE_ID_LENGTH]) = 0;

    /** Sets the volume of the application.

    @param volume Application volume. The value ranges between 0 (lowest volume) and 255 (highest volume).
    @return
    - 0: Success.
    - < 0: Failure.
    */
    virtual int setApplicationVolume(int volume) = 0;

    /** Retrieves the volume of the application.

     @param volume An input parameter specifying the application volume. The value ranges between 0 (lowest volume) and 255 (highest volume).

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int getApplicationVolume(int& volume) = 0;
    /** Mutes the application.

     @param mute Whether to mute/unmute the application.
     - true: Mute the application.
     - false: Unmute the application.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setApplicationMute(bool mute) = 0;
    /** Retrieves the mute state of the application.

     @param mute Whether the application is muted or not.
     - true: The application is muted.
     - false: The application is not muted.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int isApplicationMute(bool& mute) = 0;
    /**
    * Releases the resource.
    */
    virtual void release() = 0;
};
/** Audio device management methods.

 The IAudioDeviceManager interface class allows for audio device interface testing. Instantiate an AAudioDeviceManager class to retrieve the IAudioDeviceManager interface.
*/
class IAudioDeviceManager
{
public:

    /** Enumerates audio playback devices.

     This method returns an IAudioDeviceCollection object that includes all audio playback devices in the system. With the IAudioDeviceCollection object, the application can enumerate the audio playback devices.

     @note The application must call the \ref IAudioDeviceCollection::release "release" method to release the returned object after using it.

     @return
     - Returns an IAudioDeviceCollection object that includes all audio playback devices in the system: Success.
     - Returns NULL: Failure.
     */
    virtual IAudioDeviceCollection* enumeratePlaybackDevices() = 0;

    /** Enumerates the audio recording devices.

     This method returns an IAudioDeviceCollection object that includes all audio recording devices in the system. With the IAudioDeviceCollection object, the application can enumerate the audio recording devices.

     @note The application needs to call the \ref IAudioDeviceCollection::release "release" method to release the returned object after using it.

     @return
     - Returns an IAudioDeviceCollection object that includes all audio recording devices in the system: Success.
     - Returns NULL: Failure.
     */
    virtual IAudioDeviceCollection* enumerateRecordingDevices() = 0;

    /** Specifies an audio playback device associated with the device ID.

     @note Plugging or unplugging the audio device does not change the device ID.

     @param deviceId Device ID of the audio playback device retrieved by calling the \ref IAudioDeviceManager::enumeratePlaybackDevices "enumeratePlaybackDevices" method.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setPlaybackDevice(const char deviceId[MAX_DEVICE_ID_LENGTH]) = 0;

    /** Sets the audio recording device using the device ID.

     @param deviceId Device ID of the audio recording device that may be retrieved by calling the \ref IAudioDeviceManager::enumerateRecordingDevices "enumerateRecordingDevices" method.

     @note Plugging or unplugging the audio device does not change the device ID.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setRecordingDevice(const char deviceId[MAX_DEVICE_ID_LENGTH]) = 0;

    /** Starts the audio playback device test.

     This method tests if the playback device works properly. In the test, the SDK plays an audio file specified by the user. If the user can hear the audio, the playback device works properly.

     @param testAudioFilePath File path of the audio file for the test, which is in the UTF-8 absolute path:
     - Supported file format: wav, mp3, m4a, and aac
     - Supported file sampling rate: 8000, 16000, 32000, 44100, and 48000

     @return
     - 0: Success and you can hear the sound of the file you set.
     - < 0: Failure.
     */
    virtual int startPlaybackDeviceTest(const char* testAudioFilePath) = 0;

    /** Stops the audio playback device test.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int stopPlaybackDeviceTest() = 0;

    /** Sets the volume of the audio playback device.

     @param volume Volume of the audio playback device. The value ranges between 0 (lowest volume) and 255 (highest volume).
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setPlaybackDeviceVolume(int volume) = 0;

    /** Retrieves the volume of the audio playback device.

     @param volume Volume of the audio playback device. The value ranges between 0 (lowest volume) and 255 (highest volume).
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int getPlaybackDeviceVolume(int *volume) = 0;

    /** Sets the volume of the microphone.

     @param volume Volume of the microphone. The value ranges between 0 (lowest volume) and 255 (highest volume).
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setRecordingDeviceVolume(int volume) = 0;

    /** Retrieves the volume of the microphone.

     @param volume Volume of the microphone. The value ranges between 0 (lowest volume) and 255 (highest volume).
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int getRecordingDeviceVolume(int *volume) = 0;

    /** Mutes the audio playback device.

     @param mute
     - true: Mutes the device.
     - false: Unmutes the device.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setPlaybackDeviceMute(bool mute) = 0;
    /** Retrieves the mute state of the playback device.

     @param mute Whether the playback device is muted/unmuted.
     - true: The playback device is muted.
     - false: The playback device is unmuted.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int getPlaybackDeviceMute(bool *mute) = 0;
    /** Mutes/Unmutes the microphone.

     @param mute Whether to mute/unmute the microphone.
     - true: Mutes the microphone.
     - false: Unmutes the microphone.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setRecordingDeviceMute(bool mute) = 0;

    /** Retrieves the microphone’s mute status.

     @param mute Whether the microphone is muted/unmuted.
     - true: The microphone is muted.
     - false: The microphone is unmuted.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int getRecordingDeviceMute(bool *mute) = 0;

    /** Starts the microphone test.

     This method tests whether the microphone works properly. Once the test starts, the SDK uses the \ref IRtcEngineEventHandler::onAudioVolumeIndication "onAudioVolumeIndication" callback function to notify the application with the volume information.

     @param indicationInterval Interval period (ms) of the \ref IRtcEngineEventHandler::onAudioVolumeIndication "onAudioVolumeIndication" callback function cycle.
     
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int startRecordingDeviceTest(int indicationInterval) = 0;

    /** Stops the microphone test.

     This method stops the microphone test. To stop the test, call this method after calling the IAudioDeviceManager::startRecordingDeviceTest method.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int stopRecordingDeviceTest() = 0;

    /** Retrieves the audio playback device associated with the device ID.

     @param deviceId Device ID of the audio playback device.
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int getPlaybackDevice(char deviceId[MAX_DEVICE_ID_LENGTH]) = 0;

    /** Retrieves the audio playback device information associated with the device ID and name.

     @param deviceId Device ID of the audio playback device.
     @param deviceName Device name of the audio playback device.
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int getPlaybackDeviceInfo(char deviceId[MAX_DEVICE_ID_LENGTH], char deviceName[MAX_DEVICE_ID_LENGTH]) = 0;

    /** Retrieves the audio recording device associated with the device ID.

     @param deviceId Device ID of the audio recording device.
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int getRecordingDevice(char deviceId[MAX_DEVICE_ID_LENGTH]) = 0;

    /** Retrieves the audio recording device information associated with the device ID and name.

     @param deviceId Device ID of the recording audio device.
     @param deviceName Device name of the recording audio device.
     @return
     - 0: Success.
     - < 0: Failure.
     */
   virtual int getRecordingDeviceInfo(char deviceId[MAX_DEVICE_ID_LENGTH], char deviceName[MAX_DEVICE_ID_LENGTH]) = 0;

    /** Releases the resource.
    */
    virtual void release() = 0;
};

/** Definition of RTCEngineContext.
*/
struct RtcEngineContext
{
    IRtcEngineEventHandler* eventHandler;
    /** App ID issued to the developers by Agora. Apply for a new App ID from Agora if it is missing from your kit.
    */
    const char* appId;
    RtcEngineContext()
    :eventHandler(NULL)
    ,appId(NULL)
    {}
};

/** The RtcEngine class provides the main Agora SDK methods invoked by your application.

 IRtcEngine is the base interface class of the Agora SDK. Enable the Agora SDK's communication functionality through the creation of an IRtcEngine object, then call the methods of this object.
 */
class IRtcEngine
{

public:

    /** Initializes the Agora SDK service.

     Enter the issued Agora App ID to begin the initialization. After calling the createAgoraRtcEngine() method to create an IRtcEngine object, call this method to initialize the service prior to using any other methods. After initialization, the service is set to voice mode by default.

     @warning
     - Only users with the same App ID can call each other.
     - Each IRtcEngine instance can use only one App ID. If you need to change the App ID, call \ref IRtcEngine::release "release" to release the current instance first, and then call this method to create a new instance.

     @param context An input parameter for the RTC engine context: RtcEngineContext.
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int initialize(const RtcEngineContext& context) = 0;

    /** Releases the IRtcEngine object.

     @param sync

     - true: Synchronous call. This result returns after the IRtcEngine object resources are released. The application should not call this interface in the SDK generated callback function, otherwise, the SDK must wait for the callback function to return in order to recover the associated object resources which will result in a deadlock. The SDK automatically detects the deadlock and converts it into an asynchronous call, causing the test to take additional time.
     - false: Asynchronous call. The result returns immediately, even when the IRtcEngine object resources have not been released. The SDK will release all resources.
     
     @note Do not immediately uninstall the SDK's dynamic library after the call, or it may cause a crash due to the SDK clean-up thread not quitting.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual void release(bool sync=false) = 0;

    /** Sets the channel profile.

     The SDK needs to know the application scenario in order to set the appropriate channel profile to apply different optimization methods.

     @note
     - Users in the same channel must use the same channel profile.
     - To switch to another profile, call \ref IRtcEngine::release "release" to release the current engine and create a new engine using createAgoraRtcEngine() and \ref IRtcEngine::initialize "initialize" before calling this method to set the new channel profile.
     - This method must be called and configured before \ref IRtcEngine::joinChannel "joinChannel" because the channel profile cannot be configured when the channel is in use.
     - In the communication mode, the Agora SDK supports encoding only in raw data, not in texture.

     @param profile Channel profile: #CHANNEL_PROFILE_TYPE.
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setChannelProfile(CHANNEL_PROFILE_TYPE profile) = 0;

    /** Sets the role of the user, such as a host or an audience (default), before joining a channel.

     This method can be used to switch the user role after the user joins a channel.

     @param role Role of the client: #CLIENT_ROLE_TYPE.
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setClientRole(CLIENT_ROLE_TYPE role) = 0;

    /** Allows a user to join a channel.

     Users in the same channel can talk to each other, and; multiple users in the same channel can start a group chat. Users with different App IDs cannot call each other.

     Once in a call, the user must call the \ref IRtcEngine::leaveChannel "leaveChannel" method to exit the current call, prior to entering another channel.

     @note A channel does not accept duplicate uids, such as two users with the same uid. If you set uid as 0, the system will automatically assign a uid.
     @warning Ensure that the App ID you use for creating the Token is exactly the same one used by \ref IRtcEngine::initialize "initialize" to initialize the RTC engine, otherwise, the CDN live streaming may fail.
     
     @param token A Token generated by the app server. This parameter is optional if the user uses a static key or App ID. In this case, pass NULL as the parameter value. If the user uses a Channel Key, Agora issues an additional App Certificate to the application developer. Developers can then generate a user key with the algorithm and App Certificate provided by Agora for user authentication on the server. In most circumstances, a static App ID will suffice. For added security, use the Channel Key.
     @param channelId A string acting as the unique channel name for the AgoraRTC session. The string length must be less than 64 bytes. Supported character scopes are: a-z, A-Z, 0-9, space, !#$%&()+-:;&le;.,>? @[]^_{|}~”
     @param info (Optional) Additional information about the channel that developers may need to add. This parameter can be set to NULL or contain channel related information. Other users in the channel will not receive this message.
     @param uid (Optional) User ID. A 32-bit unsigned integer with a value ranging from 1 to 2<sup>32</sup>-1. The uid must be unique. If a uid is not assigned (or set to 0), the SDK assigns one and returns it in the \ref IRtcEngineEventHandler::onJoinChannelSuccess "onJoinChannelSuccess" callback function. Your app must record and maintain the returned value since the SDK does not maintain its value.

     @return
     - 0: Success.
     - < 0: Failure.
        - #ERR_INVALID_ARGUMENT(-2)
        - #ERR_NOT_READY(-3)
        - #ERR_REFUSED(-5)
     */
    virtual int joinChannel(const char* token, const char* channelId, const char* info, uid_t uid) = 0;

    /** Allows a user to leave a channel, such as hanging up or exiting a call.

     After joining a channel, the user must call the leaveChannel method to end the call before joining another one.

     This method returns 0 if the user has successfully left the channel and releases all resources related to the call.

     This method is called asynchronously, and the user has not actually left the channel when the call returns. Once the user leaves the channel, the SDK triggers the \ref IRtcEngineEventHandler::onLeaveChannel "onLeaveChannel" callback function.

     @note
     - If you call \ref IRtcEngine::release "release" immediately after leaveChannel, the leaveChannel process will be interrupted, and the SDK will not trigger the \ref IRtcEngineEventHandler::onLeaveChannel "onLeaveChannel" callback function.
     - If you call leaveChannel during a CDN live streaming, the SDK will trigger the \ref IRtcEngine::removePublishStreamUrl "removePublishStreamUrl" method.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int leaveChannel() = 0;

    /** Renews the Token.

     The Token expires after a certain period of time once the Token schema is enabled when:

     - The \ref IRtcEngineEventHandler::onTokenPrivilegeWillExpire "onTokenPrivilegeWillExpire" callback function is triggered, or
     - The \ref IRtcEngineEventHandler::onError "onError" callback function reports the #ERR_TOKEN_EXPIRED error, or
     - The \ref IRtcEngineEventHandler::onRequestToken "onRequestToken" callback function reports the #ERR_TOKEN_EXPIRED error.

     The app should retrieve a new Token and call this method to renew it. Failure to do so will result in the SDK disconnecting from the server.

     @param token Token to be renewed.
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int renewToken(const char* token) = 0;

    /** Retrieves the pointer of the device manager object.

     @param iid Interface ID of the interface
     @param inter Pointer for the DeviceManager object.
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int queryInterface(INTERFACE_ID_TYPE iid, void** inter) = 0;

    /** Starts an audio call test.

     This method launches an audio call test to determine whether the audio devices (for example, headset and speaker) and the network connection are working properly.

     To conduct the test:

     - The user speaks, and the recording is played back within 10 seconds.
     - If the user can hear the recording within 10 seconds, the audio devices and network connection are working properly.

     @note
     - After calling this method, always call \ref IRtcEngine::stopEchoTest "stopEchoTest" to end the test. Otherwise, the application cannot run the next echo test.
     - In the live broadcast mode, only the hosts can call this method. If the user has switched from a communication to live broadcast channel, the user must call \ref IRtcEngine::setClientRole "setClientRole" to change the user role from the audience (default) to the host before using this method.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int startEchoTest() = 0;

    /** Stops the audio call test.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int stopEchoTest() = 0;

    /** Enables the video mode.

     The application can call this method either before entering a channel or during a call. If the method is called before entering a channel, the service starts in the video mode. If the method is called during a call, the application switches from the audio to video mode.

     To disable the video mode, call the \ref IRtcEngine::disableVideo "disableVideo" method.

     @note
     - This method controls the underlying states of the Agora Engine and is still valid after the user leaves the channel.
     - This method resets the engine and takes some time to take effect. Agora recommends using the following API methods to control the video engine modules separately:
         - \ref RtcEngineParameters::enableLocalVideo "enableLocalVideo": Whether to enable the camera to create the local video stream.
         - \ref RtcEngineParameters::muteLocalVideoStream "muteLocalVideoStream": Whether to publish the local video stream.
         - \ref RtcEngineParameters::muteRemoteVideoStream "muteRemoteVideoStream": Whether to subscribe to and play the remote video stream.
         - \ref RtcEngineParameters::muteAllRemoteVideoStreams "muteAllRemoteVideoStreams": Whether to subscribe to and play all remote video streams.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int enableVideo() = 0;

    /** Disables the video mode.

     The application may call this method before entering a channel or during a call. If the method is called before entering a channel, the service starts in audio mode. If the method is called during a call, it switches from the video to audio mode. To enable the video mode, call the \ref IRtcEngine::enableVideo "enableVideo" method.

     @note
     - This method controls the underlying states of the Agora Engine and is still valid after the user leaves the channel.
     - This method resets the engine and takes some time to take effect. Agora recommends using the following API methods to control the video engine modules separately:
         - \ref RtcEngineParameters::enableLocalVideo "enableLocalVideo": Whether to enable the camera to create the local video stream.
         - \ref RtcEngineParameters::muteLocalVideoStream "muteLocalVideoStream": Whether to publish the local video stream.
         - \ref RtcEngineParameters::muteRemoteVideoStream "muteRemoteVideoStream": Whether to subscribe to and play the remote video stream.
         - \ref RtcEngineParameters::muteAllRemoteVideoStreams "muteAllRemoteVideoStreams": Whether to subscribe to and play all remote video streams.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int disableVideo() = 0;

    /** @deprecated
     Sets the video encoding profile.

     This method is deprecated as of v2.3. Use \ref IRtcEngine::setVideoEncoderConfiguration "setVideoEncoderConfiguration" instead.

     Each video encoding profile includes a set of parameters, such as the resolution, frame rate, and bitrate. If the camera device does not support the specified resolution, the SDK will automatically choose a suitable camera resolution, keeping the encoder resolution specified by setVideoProfile.

     @note
     - If you do not need to set the video encoding profile after joining the channel, Agora recommends calling this method before \ref IRtcEngine::enableVideo "enableVideo" to reduce the time to receive the first video frame.
     - Always set the video profile before calling the \ref IRtcEngine::joinChannel "joinChannel" or \ref IRtcEngine::startPreview "startPreview" method.

     @param profile Video profile: #VIDEO_PROFILE_TYPE
     @param swapWidthAndHeight Width and height of the output video, consistent with the set video profile. This parameter sets whether to swap the width and height of the stream:
     - true: Swap the width and height.
     - false: (Default) Do not swap the width and height.
     @note Since the landscape or portrait mode of the output video can be decided directly by the video profile, Agora recommends setting *swapWidthAndHeight* as the default.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setVideoProfile(VIDEO_PROFILE_TYPE profile, bool swapWidthAndHeight) = 0;

    /** Sets the video encoder configuration.

     Each configuration profile corresponds to a set of video parameters, including the resolution, frame rate, bitrate, and video orientation.

     The parameters specified in this method are the maximum values under ideal network conditions. If the video engine cannot render the video using the specified parameters due to poor network conditions, the parameters further down the list are considered until a successful configuration is found.

     @note If the user does not need to set the video encoding profile after joining the channel, Agora recommends calling this method before \ref IRtcEngine::enableVideo "enableVideo" to reduce the time to receive the first video frame.

     @param config Video encoder configuration: VideoEncoderConfiguration.
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setVideoEncoderConfiguration(const VideoEncoderConfiguration& config) = 0;

    /** Sets the local video view.

     This method configures the video display settings on the local machine.

     The application calls this method to bind each video window (view) of the local video streams and configures the video display settings. Call this method after initialization to configure the local video display settings before entering a channel. After leaving the channel, the binding is still valid, which means that the window will still display. To unbind the view, set the view value to NULL when calling setupLocalVideo.

     @param canvas Video canvas information: VideoCanvas
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setupLocalVideo(const VideoCanvas& canvas) = 0;

    /** Sets the remote video view.

     This method binds the remote user to the video display window (sets the view for the user of the specified uid).

     Typically the application specifies the uid of the remote video in the method call before the user joins a channel.

     If the remote uid is unknown to the application, set it later when the application receives the \ref IRtcEngineEventHandler::onUserJoined "onUserJoined" event.

     If the Video Recording function is enabled, the Video Recording Service joins the channel as a dummy client, causing other clients to also receive the onUserJoined event. Do not bind the dumb client to the application view because it does not send any video streams. If your application cannot recognize the dumb client, bind it with the view when the \ref IRtcEngineEventHandler::onFirstRemoteVideoDecoded "onFirstRemoteVideoDecoded" event is triggered.

     To unbind the user from the view, set the view to null. Once the user has left the channel, the SDK unbinds the remote user.

     @param canvas Video canvas information: VideoCanvas.
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setupRemoteVideo(const VideoCanvas& canvas) = 0;

    /** Starts the local video preview before joining the channel.

     Before using this method, you must:

     - Call \ref IRtcEngine::setupLocalVideo "setupLocalVideo" to set up the local preview window and configure the attributes.
     - Call \ref IRtcEngine::enableVideo "enableVideo" to enable video.

     @note Once startPreview is called to start the local video preview, if you leave the channel by calling \ref IRtcEngine::leaveChannel "leaveChannel", the local video preview remains until you call \ref IRtcEngine::stopPreview "stopPreview" to disable it.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int startPreview() = 0;

    /** Stops the local video preview and the video.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int stopPreview() = 0;

    /** Enables the audio mode, which is enabled by default.
     
     @note
     - This method enables the internal engine and works either within or outside the channel. This method is still valid after a user leaves the channel.
     - This method resets the engine and takes some time to take effect. Agora recommends using the following API methods to control the audio engine modules separately:
         - \ref IRtcEngine::enableLocalAudio "enableLocalAudio": Whether to enable the microphone to create the local audio stream.
         - \ref RtcEngineParameters::muteLocalAudioStream "muteLocalAudioStream": Whether to publish the local audio stream.
         - \ref RtcEngineParameters::muteRemoteAudioStream "muteRemoteAudioStream": Whether to subscribe to and play the remote audio stream.
         - \ref RtcEngineParameters::muteAllRemoteAudioStreams "muteAllRemoteAudioStreams": Whether to subscribe to and play all remote audio streams.


    @return
    - 0: Success.
    - < 0: Failure.
    */
    virtual int enableAudio() = 0;

    /** Disables/Re-enables the local audio function.

     When a user joins a channel, the audio function is enabled by default. This method disables or re-enables the local audio function, that is, to stop or restart local audio capturing.

     This method does not affect receiving or playing the remote audio streams.

    The \ref IRtcEngineEventHandler::onMicrophoneEnabled "onMicrophoneEnabled" callback function will be triggered once the local audio function is disabled or re-enabled.

     @note
     - Call this method after \ref IRtcEngine::joinChannel "joinChannel".
     - This method resets the engine and takes some time to take effect. Agora recommends using the following API methods to control the audio engine modules separately:
         - \ref IRtcEngine::enableLocalAudio "enableLocalAudio": Whether to enable the microphone to create the local audio stream.
         - \ref RtcEngineParameters::muteLocalAudioStream "muteLocalAudioStream": Whether to publish the local audio stream.
         - \ref RtcEngineParameters::muteRemoteAudioStream "muteRemoteAudioStream": Whether to subscribe to and play the remote audio stream.
         - \ref RtcEngineParameters::muteAllRemoteAudioStreams "muteAllRemoteAudioStreams": Whether to subscribe to and play all remote audio streams.

     @param enabled
     - true: Re-enable the local audio function, that is, to start the local audio capturing device (for example, the microphone).
     - false: Disable the local audio function, that is, to stop local audio capturing.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int enableLocalAudio(bool enabled) = 0;

    /** Disables the audio mode.

     @note
     - This method controls the underlying states of the Agora Engine and can be called either within or outside the channel. This method is still valid after a user leaves the channel.
     - This method resets the engine and takes some time to take effect. Agora recommends using \ref agora::rtc::IRtcEngine::enableLocalAudio "enableLocalAudio" and \ref agora::rtc::RtcEngineParameters::muteLocalAudioStream "muteLocalAudioStream" to capture, process, and send the local audio streams.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int disableAudio() = 0;

	/** Sets the audio parameters and application scenarios.

     @note
     - setAudioProfile must be called before \ref IRtcEngine::joinChannel "joinChannel".
     - In the communication mode, you can set the profile but not the scenario.
     - In the communication and live-broadcast modes, the bitrate may be different from your settings due to network self-adaptation.
     - In scenarios involving music education, Agora recommends setting profile as #AUDIO_PROFILE_MUSIC_HIGH_QUALITY (4) and scenario as #AUDIO_PROFILE_MUSIC_STANDARD_STEREO (3).

     @param  profile Sets the sampling rate, bitrate, encode mode, and the number of channels: #AUDIO_PROFILE_TYPE.
     @param  scenario Sets the audio application scenario: #AUDIO_SCENARIO_TYPE.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setAudioProfile(AUDIO_PROFILE_TYPE profile, AUDIO_SCENARIO_TYPE scenario) = 0;

#if defined(__APPLE__) || defined(_WIN32)
#if defined(__APPLE__)
  typedef unsigned int WindowIDType;
#elif defined(_WIN32)
  typedef HWND WindowIDType;
#endif
    
  /** Starts screen sharing.
   
   This method shares the whole screen, the specified window, or the specified region:
   
   - Share the whole screen: Set windowId as 0 and set rect as null.
   - Share the specified window: Set windowId not as 0, each window has a windowId which is not 0.
   - Share the specified region: Set windowId as 0 and set rect not as null. In this case, you can share the specified region, for example by dragging the mouse, the logic of which is implemented by yourselves.

   @note The specified region means a region on the whole screen. Currently, it does not support sharing a specified region in a specific window.
         captureFreq is the captured frame rate once the screen-sharing function is enabled, and the value (mandatory) ranges between 1 fps and 15 fps. No matter which function you have enabled, it returns 0 after successful execution, otherwise, it returns an error code.

   @param windowId Screen sharing area: WindowIDType
   @param captureFreq The captured frame rate. The value (mandatory) ranges between 1 fps and 15 fps.
   @param rect This parameter is valid when windowsId is set as 0, and when you set rect as null, then the whole screen is shared.
   @param bitrate The captured bitrate.

   @return
   - 0: Success.
   - < 0: Failure.
   */
  virtual int startScreenCapture(WindowIDType windowId, int captureFreq, const Rect *rect, int bitrate) = 0;

  /** Stop screen sharing.

   @return
   - 0: Success.
   - < 0: Failure.
   */
  virtual int stopScreenCapture() = 0;

  /** Updates the screen capture region.

   @param rect This parameter is valid when windowsId is set as 0, and when you set rect as null, then the whole screen is shared.

   @return
   - 0: Success.
   - < 0: Failure.
   */
  virtual int updateScreenCaptureRegion(const Rect *rect) = 0;
#endif

    /** Retrieves the current call ID.

     When a user joins a channel on a client, a callId is generated to identify the call from the client. Feedback methods, such as \ref IRtcEngine::rate "rate" and \ref IRtcEngine::complain "complain", must be called after the call ends, so feedback can be submitted to the SDK. These methods require the callId parameter.

     To use these feedback methods, use the getCallId method to retrieve callId during the call to be passed as an argument into the feedback methods after the call ends.

     @return callId The current call ID.
     */
    virtual int getCallId(agora::util::AString& callId) = 0;

    /** Allows the user to rate the call and is usually called after the call ends.

     @param callId Call ID retrieved from the \ref IRtcEngine::getCallId "getCallId" method.
     @param rating  The rating of the call between 1 (lowest score) to 10 (highest score).
     @param description (Optional) Description for the call. The string length must be less than 800 bytes.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int rate(const char* callId, int rating, const char* description) = 0;

    /** Allows a user to complain about the call quality.

    The complaint is usually called after the call ends.

    @param callId Call ID retrieved from the \ref IRtcEngine::getCallId "getCallId" method.
    @param description (Optional) Description for the call. Character length must be less than 800 bytes.

    @return
    - 0: Success.
    - < 0: Failure.

    */
    virtual int complain(const char* callId, const char* description) = 0;

    /** Retrieves the SDK version number.

     @param build An input/output parameter specifying the build number.
     @return The version of the current SDK in the string format. For example, 2.3.1.
     */
    virtual const char* getVersion(int* build) = 0;

    /**  Enables the network test.

     This method tests the quality of the user’s network connection and is disabled by default.

     Before users join a channel, call this method to check the network quality. This method consumes additional network traffic, which may affect the communication quality.

     Call \ref IRtcEngine::disableLastmileTest "disableLastmileTest" to disable the test immediately after receiving the \ref IRtcEngineEventHandler::onLastmileQuality "onLastmileQuality" callback function, and before the user joins the channel.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int enableLastmileTest() = 0;

    /** Disables the quality test for the network connection.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int disableLastmileTest() = 0;

    /** Retrieves the warning or error description.

     @return code #WARN_CODE_TYPE or #ERROR_CODE_TYPE returned in \ref IRtcEngineEventHandler::onWarning "onWarning" or \ref IRtcEngineEventHandler::onError "onError".
     */
    virtual const char* getErrorDescription(int code) = 0;

    /** Sets the encryption password to enable built-in encryption before joining a channel.

     All users in a channel must set the same encryption password. The encryption password is automatically cleared once a user has left the channel.

     If the encryption password is not specified or set to empty, the encryption functionality will be disabled.

     @note Do not use this method for CDN live streaming.

     @param secret Encryption password
     
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setEncryptionSecret(const char* secret) = 0;

    /** Sets the built-in encryption mode.

     The Agora SDK supports built-in encryption, which is set to AES-128-XTS mode by default. Call this method method to set the encryption mode to use other encryption modes.

     All users in the same channel must use the same encryption mode and password.

     Refer to the information related to the AES encryption algorithm on the differences between the encryption modes.

     @note Call \ref IRtcEngine::setEncryptionSecret "setEncryptionSecret" to enable the built-in encryption function before calling this method.

     @param encryptionMode Encryption mode:
     - "aes-128-xts": 128-bit AES encryption, XTS mode
     - "aes-128-ecb": 128-bit AES encryption, ECB mode
     - "aes-256-xts": 256-bit AES encryption, XTS mode
     - "": When encryptionMode is set to NULL, the encryption mode is set to "aes-128-xts" by default.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setEncryptionMode(const char* encryptionMode) = 0;

    /** Registers a packet observer.

     The Agora SDK allows your application to register a packet observer to receive events for voice or video packet transmission.

     @param observer Registered packet observer: IPacketObserver.
     
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int registerPacketObserver(IPacketObserver* observer) = 0;

    /** Creates a data stream.

     Each user can have up to five simultaneous data channels.

     @note Set both the reliable and ordered parameters to true or false. Do not set one as true and the other as false.

     @param streamId ID of the data stream.
     @param reliable
     - true: The recipients will receive data from the sender within 5 seconds. If the recipient does not receive the data within 5 seconds, the data channel will report an error to the application.
     - false: The recipients will not receive any data, and therefore it will not report any errors for missing data.
     @param ordered
     - true: The recipients will receive the data in the order that they were sent.
     - false: The recipients will not receive the data in the order that they were sent.

     @return
     - Returns the stream ID, if successful.
     - < 0: Failure.
     */
    virtual int createDataStream(int* streamId, bool reliable, bool ordered) = 0;

    /** Sends data stream messages to all users in a channel.

     The SDK has imposed the following restrictions on this method: Up to 30 packets can be sent per second in a channel with each packet having a maximum size of 1 kB. Each client can send up to 6 kB of data per second. Each user can have up to five data channels simultaneously.

     @note This method applies only to the communication mode or to the hosts in the live broadcast mode. If an audience in the live broadcast mode calls this method, the audience role may be changed to a host.

     @param  streamId  Stream ID returned by \ref IRtcEngine::createDataStream "createDataStream".
     @param data Data to send.
     @param length Length of the data to send.
     
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int sendStreamMessage(int streamId, const char* data, size_t length) = 0;

    /** Adds a stream URL to where the host publishes the stream. (CDN live only.)

     The host publishes the stream to the specified CDN live HTTP/HTTPS URL address. The corresponding callback function is: \ref IRtcEngineEventHandler::onStreamPublished "onStreamPublished".

     @note
     - Ensure that the user has joined the channel before calling this method.
     - This method only adds one stream URL address each time it is called.
     - The URL address should not contain special characters such as Chinese language characters.

     @param url HTTP/HTTPS URL address to which the host publishes the stream.
     @param  transcodingEnabled Whether transcoding is enabled or not:
     - true: Enable transcoding (transcoding refers to transcoding the video streams when publishing them to CDN live, often used for combining the video streams of multiple hosts in CDN live).
     - false: Disable transcoding.

     @return
     - 0: Success.
     - < 0: Failure.
          - #ERR_INVALID_ARGUMENT (2): The URL address is NULL or a string whose length is 0.
          - #ERR_NOT_INITIALIZED (7): You have not initialized the RTC Engine when publishing the stream.
     */
    virtual int addPublishStreamUrl(const char *url, bool transcodingEnabled) = 0;

    /** Removes an HTTP/HTTPS URL address of the CDN live streaming.

     @note
     - This method only removes one URL address each time it is called.
     - The URL address may not contain special characters such as Chinese language characters.

     @param url HTTP/HTTPS URL address to which the host publishes the stream.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int removePublishStreamUrl(const char *url) = 0;

    /** Sets the video layout and audio for CDN live. (CDN live only.)

     @param transcoding CDN live audio/video transcoding settings: LiveTranscoding.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setLiveTranscoding(const LiveTranscoding &transcoding) = 0;

    /** @deprecated

     Configures the CDN live streaming before joining a channel.

     This method is deprecated. Agora recommends using the following methods instead:

     - \ref IRtcEngine::addPublishStreamUrl "addPublishStreamUrl"
     - \ref IRtcEngine::removePublishStreamUrl "removePublishStreamUrl"
     - \ref IRtcEngine::setLiveTranscoding "setLiveTranscoding"

     @param config CDN live streaming settings: PublisherConfiguration.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int configPublisher(const PublisherConfiguration& config) = 0;

    /** @deprecated

     Sets the picture-in-picture layout for the CDN live broadcast.

     @note This method is deprecated and Agora recommends using the \ref IRtcEngine::setLiveTranscoding "setLiveTranscoding" method. This method sets the picture-in-picture layouts for live broadcasts. This method is only applicable when you want to push streams to the Agora server. When you push the stream to the server:

     1. Define a canvas, its width and height (video resolution), background color, and the total number of video streams you want to display.
     2. Define the position and size for each video stream on the canvas, and indicate whether the view is cropped or zoomed to fit.

     @note
     - Call this method after joining a channel.
     - The application should only allow one user to call this method in the same channel. If more than one user calls this method, the other users must call \ref IRtcEngine::clearVideoCompositingLayout "clearVideoCompositingLayout" to remove the settings.

     @param sei Video compositing layout: VideoCompositingLayout.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setVideoCompositingLayout(const VideoCompositingLayout& sei) = 0;

    /** @deprecated

     Removes the picture-in-picture layout settings created by \ref IRtcEngine::setVideoCompositingLayout "setVideoCompositingLayout".

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int clearVideoCompositingLayout() = 0;

    /** Adds a watermark to the local video stream.

     This method adds a PNG watermark to the local video stream for the recording device, channel audience, and CDN live audience to see and capture.

     To add the PNG file only to the CDN live publishing stream, see the \ref IRtcEngine::setLiveTranscoding "setLiveTranscoding" method.

     @param watermark Watermark image added to the local video stream: RtcImage

     @note
     - The URL descriptions are different for the local video streaming and CDN live streaming. In a local broadcast, url refers to the definite path of the added watermark image file in the local video; while in a CDN live broadcast, url refers to the HTTP/HTTPS URL address of the added watermark image in the CDN live broadcast.
     - The source file of the watermark image must be in the PNG file format. If the width and height of the PNG file differ from your settings in this method, the PNG file will be cropped to conform to your settings.
     - The Agora SDK supports adding only one watermark image onto a live stream. The newly added watermark image replaces the previous one.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int addVideoWatermark(const RtcImage& watermark) = 0;

    /** Removes the watermark image from the video stream added by \ref IRtcEngine::addVideoWatermark "addVideoWatermark".

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int clearVideoWatermarks() = 0;

    /** Adds a voice or video stream URL to a live broadcast.

     - The \ref IRtcEngineEventHandler::onStreamInjectedStatus "onStreamInjectedStatus" callback function returns the inject status.
     - When the stream URL is added successfully, it can be found in the channel with a uid of 666, and \ref IRtcEngineEventHandler::onUserJoined "onUserJoined" and \ref IRtcEngineEventHandler::onFirstRemoteVideoFrame "onFirstRemoteVideoFrame" will be triggered.

     @param url HTTP/HTTPS URL address to add to the ongoing live broadcast. Valid protocols are RTMP, HLS, and FLV.
     - Supported FLV audio codec type: AAC.
     - Supported FLV video codec type: H264(AVC).
     @param config InjectStreamConfig object which contains the configuration information for the added voice or video stream.
     
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int addInjectStreamUrl(const char* url, const InjectStreamConfig& config) = 0;

    /** Removes the voice or video stream URL address from a live broadcast.

     @note If successful, the \ref IRtcEngineEventHandler::onUserOffline "onUserOffline" will be triggered and a stream uid of 666 will be returned.

     @param url HTTP/HTTPS URL address of the added stream to remove.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int removeInjectStreamUrl(const char* url) = 0;
    virtual bool registerEventHandler(IRtcEngineEventHandler *eventHandler) = 0;
    virtual bool unregisterEventHandler(IRtcEngineEventHandler *eventHandler) = 0;
};


class IRtcEngineParameter
{
public:
    /**
    * Releases the resource.
    */
    virtual void release() = 0;

    /** Sets the bool value of a specified key in the JSON.

     @param key Key name
     @param value Value
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setBool(const char* key, bool value) = 0;

    /** Sets the int value of a specified key in the JSON.

     @param key Key name
     @param value Value
     
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setInt(const char* key, int value) = 0;

    /** Sets the unsigned int value of a specified key in the JSON.

     @param key Key name
     @param value Value
     
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setUInt(const char* key, unsigned int value) = 0;

    /** Sets the double value of a specified key in the JSON.

     @param key Key name
     @param value Value
     
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setNumber(const char* key, double value) = 0;

    /** Sets the string value of a specified key in the JSON.

     @param key Key name
     @param value Value
     
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setString(const char* key, const char* value) = 0;

    /** Sets the object value of a specified key in the JSON.

     @param key Key name
     @param value Value
     
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setObject(const char* key, const char* value) = 0;

    /** Retrieves the bool value of a specified key in the JSON.

     @param key Key name
     @param value Value
     
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int getBool(const char* key, bool& value) = 0;

    /** Retrieves the int value of the JSON.

     @param key Key name
     @param value Value
     
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int getInt(const char* key, int& value) = 0;

    /** Retrieves the unsigned int value of a specified key in the JSON.

     @param key Key name
     @param value Value
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int getUInt(const char* key, unsigned int& value) = 0;

    /** Retrieves the double value of a specified key in the JSON.

     @param key Key name
     @param value Value
     
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int getNumber(const char* key, double& value) = 0;

    /** Retrieves the string value of a specified key in the JSON.
     
     @param key Key name
     @param value Value
     
     @return
     - 0: Success.
     - < 0: Failure.
    */
    virtual int getString(const char* key, agora::util::AString& value) = 0;

    /** Retrieves a child object value of a specified key in the JSON.

     @param key Key name
     @param value Value
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int getObject(const char* key, agora::util::AString& value) = 0;

    /** Retrieves the array value of a specified key in the JSON.

     @param key Key name
     @param value Value
     @return

     - 0: Success.
     - < 0: Failure.
     */
    virtual int getArray(const char* key, agora::util::AString& value) = 0;

    /** Sets the parameters of the SDK or engine.

     @param parameters Parameters in a JSON string.
     
     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setParameters(const char* parameters) = 0;

    /** Sets the profile to control the RTC engine.

     @param profile Profile
     @param merge Whether to merge the profile data with the original value:
     - true: Merge with the original value.
     - false: Do not merge with the original value.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    virtual int setProfile(const char* profile, bool merge) = 0;

	virtual int convertPath(const char* filePath, agora::util::AString& value) = 0;
};

class AAudioDeviceManager : public agora::util::AutoPtr<IAudioDeviceManager>
{
public:
    AAudioDeviceManager(IRtcEngine* engine)
    {
		queryInterface(engine, AGORA_IID_AUDIO_DEVICE_MANAGER);
    }
};

class AVideoDeviceManager : public agora::util::AutoPtr<IVideoDeviceManager>
{
public:
    AVideoDeviceManager(IRtcEngine* engine)
    {
		queryInterface(engine, AGORA_IID_VIDEO_DEVICE_MANAGER);
    }
};

class AParameter : public agora::util::AutoPtr<IRtcEngineParameter>
{
public:
    AParameter(IRtcEngine& engine) { initialize(&engine); }
    AParameter(IRtcEngine* engine) { initialize(engine); }
    AParameter(IRtcEngineParameter* p) :agora::util::AutoPtr<IRtcEngineParameter>(p) {}
private:
    bool initialize(IRtcEngine* engine)
    {
        IRtcEngineParameter* p = NULL;
        if (engine && !engine->queryInterface(AGORA_IID_RTC_ENGINE_PARAMETER, (void**)&p))
            reset(p);
        return p != NULL;
    }
};
/** The RtcEngineParameters class is an auxiliary class setting parameters for the SDK.

*/
class RtcEngineParameters
{
public:
    RtcEngineParameters(IRtcEngine& engine)
        :m_parameter(&engine){}
    RtcEngineParameters(IRtcEngine* engine)
        :m_parameter(engine){}

    /** Disables the local video.

     This method disables the local video. Only applicable when the user wants to watch the remote video without sending any video stream to the other user.

     Call this method after \ref agora::rtc::IRtcEngine::enableVideo "enableVideo", otherwise, this method may not work properly.

     After enableVideo is called, the local video will be enabled by default. This method is used to disable the local video while the remote video remains unaffected.

     @note This method controls the underlying video engine states and is still active after a user leaves the channel.

     @param enabled Whether to disable the local video, including the capturer, renderer, and sender:
     - true: (Default) Enable the local video.
     - false: Disable the local video. Once the local video is disabled, the remote users can no longer receive the video stream of this user, while this user can still receive the video streams of the other remote users.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int enableLocalVideo(bool enabled) {
        return setParameters("{\"rtc.video.capture\":%s,\"che.video.local.capture\":%s,\"che.video.local.render\":%s,\"che.video.local.send\":%s}", enabled ? "true" : "false", enabled ? "true" : "false", enabled ? "true" : "false", enabled ? "true" : "false");
    }


    /** Stops sending the local video stream.

     @note When set to true, this method does not disable the camera, and therefore does not affect the retrieval of the local video streams. This method responds faster than \ref agora::rtc::RtcEngineParameters::enableLocalVideo "enableLocalVideo" which controls the sending of local video stream.

     @param mute
     - true: Stop sending the local video stream.
     - false: Send the local video stream.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int muteLocalVideoStream(bool mute) {
        return setParameters("{\"rtc.video.mute_me\":%s,\"che.video.local.send\":%s}", mute ? "true" : "false", mute ? "false" : "true");
    }

    /** Stops receiving all remote users’ video streams.

     @param  mute
     - true: Stop receiving all remote users' video streams.
     - false: (Default) Receive all remote users' video streams.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int muteAllRemoteVideoStreams(bool mute) {
        return m_parameter ? m_parameter->setBool("rtc.video.mute_peers", mute) : -ERR_NOT_INITIALIZED;
    }


    /** Stops receiving all remote users' video streams by default.

     @param mute
     - true: Stop receiving all remote users' video streams by default.
     - false: (Default) Receive all remote video streams by default.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int setDefaultMuteAllRemoteVideoStreams(bool mute) {
        return m_parameter ? m_parameter->setBool("rtc.video.set_default_mute_peers", mute) : -ERR_NOT_INITIALIZED;
    }

    /** Stops receiving a specified remote user’s video stream.

     @note If you called \ref agora::rtc::RtcEngineParameters::muteAllRemoteVideoStreams "muteAllRemoteVideoStreams" and set to true to stop receiving all remote video streams, ensure that muteAllRemoteVideoStreams is called and set to false before calling this method.

     @param uid User ID of the specified remote user.
     @param mute
     - true: Stop receiving a specified remote user’s video stream.
     - false: Resume receiving a specified remote user’s video stream.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int muteRemoteVideoStream(uid_t uid, bool mute) {
        return setObject("rtc.video.mute_peer", "{\"uid\":%u,\"mute\":%s}", uid, mute ? "true" : "false");
    }

    /** @deprecated Use \ref agora::rtc::IAudioDeviceManager::setPlaybackDeviceVolume "setPlaybackDeviceVolume" instead. Sets the playback device volume.

     @param volume Volume of the playing device. The value ranges between 0 and 255.
     
     @return
     - 0: Success.
     - < 0: Failure.
     */
    int setPlaybackDeviceVolume(int volume) {// [0,255]
        return m_parameter ? m_parameter->setInt("che.audio.output.volume", volume) : -ERR_NOT_INITIALIZED;
    }

    /** Starts an audio recording.

     The SDK allows recording during a call. Supported formats:

     - .wav: Large file size with high sound fidelity or
     - .aac: Small file size with low sound fidelity

     Ensure that the directory to save the recording file exists and is writable.
     This method is usually called after the \ref agora::rtc::IRtcEngine::joinChannel "joinChannel" method.
     The recording automatically stops when the \ref agora::rtc::IRtcEngine::leaveChannel "leaveChannel" method is called.

     @param filePath Full file path of the recording file. The string of the file name is in UTF-8.
     @param quality Audio recording quality: #AUDIO_RECORDING_QUALITY_TYPE
     
     @return
     - 0: Success.
     - < 0: Failure.
     */
    int startAudioRecording(const char* filePath, AUDIO_RECORDING_QUALITY_TYPE quality) {
        if (!m_parameter) return -ERR_NOT_INITIALIZED;
#if defined(_WIN32)
        util::AString path;
        if (!m_parameter->convertPath(filePath, path))
            filePath = path->c_str();
        else
            return -ERR_INVALID_ARGUMENT;
#endif
        return setObject("che.audio.start_recording", "{\"filePath\":\"%s\",\"quality\":%d}", filePath, quality);
    }

    /** Stops an audio recording on the client.

     You can call this method before calling \ref agora::rtc::IRtcEngine::leaveChannel "leaveChannel" else, the recording automatically stops when the \ref agora::rtc::IRtcEngine::leaveChannel "leaveChannel" method is called.

     @return
     - 0: Success
     - < 0: Failure.
     */
    int stopAudioRecording() {
        return m_parameter ? m_parameter->setBool("che.audio.stop_recording", true) : -ERR_NOT_INITIALIZED;
    }

    /** Starts the audio mixing.

     This method mixes the specified local audio file with the audio stream from the microphone; or, it replaces the microphone's audio stream with the specified local audio file. You can choose whether the other user can hear the local audio playback and specify the number of playback loops. This method also supports online music playback.

     When the audio mixing file playback stops after calling this method, the \ref agora::rtc::IRtcEngineEventHandler::onAudioMixingFinished "onAudioMixingFinished" callback function will be triggered.

     @note Call this method when you are in a channel, otherwise, it may cause issues.

     @param filePath Name and path of the local or online audio file to mix. Supported audio formats: mp3, aac, m4a, 3gp, and wav.
     @param loopback
     - true: Only the local user can hear the remix or the replaced audio stream.
     - false: Both users can hear the remix or the replaced audio stream.
     @param replace
     - true: The content of the local audio file replaces the audio stream from the microphone.
     - false: The local audio file is mixed with the audio stream from the microphone.
     @param cycle Number of playback loops:
     - Positive integer: Number of playback loops.
     - -1: Infinite playback loops.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int startAudioMixing(const char* filePath, bool loopback, bool replace, int cycle) {
        if (!m_parameter) return -ERR_NOT_INITIALIZED;
#if defined(_WIN32)
        util::AString path;
        if (!m_parameter->convertPath(filePath, path))
            filePath = path->c_str();
        else
            return -ERR_INVALID_ARGUMENT;
#endif
        return setObject("che.audio.start_file_as_playout", "{\"filePath\":\"%s\",\"loopback\":%s,\"replace\":%s,\"cycle\":%d}",
                         filePath,
                         loopback?"true":"false",
                         replace?"true":"false",
                         cycle);
    }

    /** Stops the audio mixing.

     Call this method when you are in a channel.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int stopAudioMixing() {
        return m_parameter ? m_parameter->setBool("che.audio.stop_file_as_playout", true) : -ERR_NOT_INITIALIZED;
    }

    /** Pauses audio mixing.

     Call this method when you are in a channel.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int pauseAudioMixing() {
        return m_parameter ? m_parameter->setBool("che.audio.pause_file_as_playout", true) : -ERR_NOT_INITIALIZED;
    }

    /** Resumes audio mixing.

     Call this method when you are in a channel.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int resumeAudioMixing() {
        return m_parameter ? m_parameter->setBool("che.audio.pause_file_as_playout", false) : -ERR_NOT_INITIALIZED;
    }

    /** Adjusts the volume during audio mixing.

     Call this method when you are in a channel.

     @param volume Volume. The value ranges between 0 and 100 (default).
     
     @return
     - 0: Success.
     - < 0: Failure.
     */
    int adjustAudioMixingVolume(int volume) {
        return m_parameter ? m_parameter->setInt("che.audio.set_file_as_playout_volume", volume) : -ERR_NOT_INITIALIZED;
    }

    /** Retrieves the duration (ms) of the audio mixing.

     Call this method when you are in a channel.

     @return
     - &ge; 0: The audio mixing duration, if this method is called successfully. 
     - < 0: Failure.
     */
    int getAudioMixingDuration() {
        int duration = 0;
        int r = m_parameter ? m_parameter->getInt("che.audio.get_mixing_file_length_ms", duration) : -ERR_NOT_INITIALIZED;
        if (r == 0)
            r = duration;
        return r;
    }

    /** Retrieves the playback position (ms) of the audio.

     Call this method when you are in a channel.

     @return
     - &ge; 0：The current playback position of the audio mixing, if successful. 
     - < 0: Failure.
     */
    int getAudioMixingCurrentPosition() {
        if (!m_parameter) return -ERR_NOT_INITIALIZED;
        int pos = 0;
        int r = m_parameter->getInt("che.audio.get_mixing_file_played_ms", pos);
        if (r == 0)
            r = pos;
        return r;
    }
    /** Sets the playback position of the audio mixing file to a different start position (default plays from the beginning).

     @param pos Integer. The time (ms) to start playing the audio mixing file.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int setAudioMixingPosition(int pos /*in ms*/) {
        return m_parameter ? m_parameter->setInt("che.audio.mixing.file.position", pos) : -ERR_NOT_INITIALIZED;
    }

    /** Retrieves the volume of the audio effects.

     The value ranges between 0.0 and 100.0.

     @return
     - The volume, if successful.
     - < 0: Failure.
     */
    int getEffectsVolume() {
        if (!m_parameter) return -ERR_NOT_INITIALIZED;
        int volume = 0;
        int r = m_parameter->getInt("che.audio.game_get_effects_volume", volume);
        if (r == 0)
            r = volume;
        return r;
    }

    /** Sets the volume of the audio effects.

     @param volume Volume of the audio effects. The value ranges between 0.0 and 100.0 (default).
     
     @return
     - 0: Success.
     - < 0: Failure.
     */
    int setEffectsVolume(int volume) {
        return m_parameter ? m_parameter->setInt("che.audio.game_set_effects_volume", volume) : -ERR_NOT_INITIALIZED;
    }

    /** Sets the volume of the specified audio effect.

     @param soundId ID of the audio effect. Each audio effect has a unique ID.
     @param volume Volume of the audio effect. The value ranges between 0.0 and 100.0 (default).
     
     @return
     - 0: Success.
     - < 0: Failure.
     */
    int setVolumeOfEffect(int soundId, int volume) {
        return setObject(
                         "che.audio.game_adjust_effect_volume",
                         "{\"soundId\":%d,\"gain\":%d}",
                         soundId, volume);
    }

    /** Plays the specified audio effect.

     When this method is successfully called, the Agora SDK returns the IRtcEngineEventHandler::onAudioEffectFinished callback function.

     @param soundId ID of the specified audio effect. Each audio effect has a unique ID.

     @note If the audio effect is preloaded into the memory through RtcEngineParameters::preloadEffect, ensure that the soundID value is set to the same value as in RtcEngineParameters::preloadEffect.

     @param filePath The absolute path of the audio effect file.
     @param loopCount Set the number of times the audio effect loops:
     - 0: Play the audio effect once.
     - 1: Play the audio effect twice.
     - -1: Play the audio effect in a loop indefinitely, until RtcEngineParameters::stopEffect or RtcEngineParameters::stopAllEffects is called.
     @param pitch Pitch of the audio effect. The value ranges between 0.5 and 2. The default value is 1 (no change to the pitch). The lower the value, the lower the pitch.
     @param pan Spatial position of the audio effect. The value ranges between -1.0 and 1.0:
     - 0.0: The audio effect displays ahead.
     - 1.0: The audio effect displays to the right.
     - -1.0: The audio effect displays to the left.
     @param gain  Volume of the audio effect. The value ranges between 0.0 and 100,0. The default value is 100.0. The lower the value, the lower the volume of the audio effect.
     @param publish Whether to publish the specified audio effect to the remote stream:
     - true: The audio effect, played locally, is published to the Agora Cloud and the remote users can hear it.
     - false: The audio effect, played locally, is not published to the Agora Cloud and the remote users cannot hear it.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int playEffect(int soundId, const char* filePath, int loopCount, double pitch, double pan, int gain, bool publish = false) {
#if defined(_WIN32)
        util::AString path;
        if (!m_parameter->convertPath(filePath, path))
            filePath = path->c_str();
        else if (!filePath)
            filePath = "";
#endif
        return setObject(
                         "che.audio.game_play_effect",
                         "{\"soundId\":%d,\"filePath\":\"%s\",\"loopCount\":%d, \"pitch\":%lf,\"pan\":%lf,\"gain\":%d, \"send2far\":%d}",
                         soundId, filePath, loopCount, pitch, pan, gain, publish);
    }

    /** Stops playing a specified audio effect.

     @param soundId ID of the audio effect. Each audio effect has a unique ID.
     
     @return
     - 0: Success.
     - < 0: Failure.
     */
    int stopEffect(int soundId) {
        return m_parameter ? m_parameter->setInt(
                                                 "che.audio.game_stop_effect", soundId) : -ERR_NOT_INITIALIZED;
    }

    /** Stops playing all audio effects.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int stopAllEffects() {
        return m_parameter ? m_parameter->setBool(
                                                  "che.audio.game_stop_all_effects", true) : -ERR_NOT_INITIALIZED;
    }

    /** Preloads a specified audio effect file to the memory.

     To ensure smooth communication, limit the size of the audio effect file. Agora recommends using this method to preload the audio effect before calling IRtcEngine::joinChannel.

     Supported audio formats: mp3, aac, m4a, 3gp, and wav.

     @param soundId ID of the audio effect. Each audio effect has a unique ID.
     @param filePath Absolute path of the audio effect file.
     
     @return
     - 0: Success.
     - < 0: Failure.
     */
    int preloadEffect(int soundId, char* filePath) {
        return setObject(
                         "che.audio.game_preload_effect",
                         "{\"soundId\":%d,\"filePath\":\"%s\"}",
                         soundId, filePath);
    }

    /** Releases a specified preloaded audio effect from the memory.

     @param soundId ID of the audio effect. Each audio effect has a unique ID.
     @return
     - 0: Success.
     - < 0: Failure.
     */
    int unloadEffect(int soundId) {
        return m_parameter ? m_parameter->setInt(
                                                 "che.audio.game_unload_effect", soundId) : -ERR_NOT_INITIALIZED;
    }

    /** Pauses a specified audio effect.

     @param soundId ID of the audio effect. Each audio effect has a unique ID.
     @return
     - 0: Success.
     - < 0: Failure.
     */
    int pauseEffect(int soundId) {
        return m_parameter ? m_parameter->setInt(
                                                 "che.audio.game_pause_effect", soundId) : -ERR_NOT_INITIALIZED;
    }

    /** Pauses all audio effects.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int pauseAllEffects() {
        return m_parameter ? m_parameter->setBool(
                                                  "che.audio.game_pause_all_effects", true) : -ERR_NOT_INITIALIZED;
    }

    /** Resumes playing a specified audio effect.

     @param soundId ID of the audio effect. Each audio effect has a unique ID.
     @return
     - 0: Success.
     - < 0: Failure.
     */
    int resumeEffect(int soundId) {
        return m_parameter ? m_parameter->setInt(
                                                 "che.audio.game_resume_effect", soundId) : -ERR_NOT_INITIALIZED;
    }

    /** Resumes playing all audio effects.
     @return
     - 0: Success.
     - < 0: Failure.
     */
    int resumeAllEffects() {
        return m_parameter ? m_parameter->setBool(
                                                  "che.audio.game_resume_all_effects", true) : -ERR_NOT_INITIALIZED;
    }

    /** Changes the voice pitch of the local speaker.

     @param pitch Voice frequency. The value ranges between 0.5 and 2.0. The lower the value, the lower the voice pitch. The default value is 1.0, meaning that the local voice pitch does not need to be changed.
     @return
     - 0: Success.
     - < 0: Failure.
     */
    int setLocalVoicePitch(double pitch) {
        return m_parameter ? m_parameter->setInt(
                                                 "che.audio.morph.pitch_shift",
                                                 static_cast<int>(pitch * 100)) : -ERR_NOT_INITIALIZED;
    }
    /** Sets the local voice equalization effect.

     @param bandFrequency Band frequency. The value ranges between 0 and 9, representing the respective 10-band center frequencies of the voice effects, including 31, 62, 125, 500, 1k, 2k, 4k, 8k, and 16k Hz. See #AUDIO_EQUALIZATION_BAND_FREQUENCY
     @param bandGain  Gain of each band in dB. The value ranges between -15 and 15.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int setLocalVoiceEqualization(AUDIO_EQUALIZATION_BAND_FREQUENCY bandFrequency, int bandGain) {
        return setObject(
                         "che.audio.morph.equalization",
                         "{\"index\":%d,\"gain\":%d}",
                         static_cast<int>(bandFrequency), bandGain);
    }
    /**  Sets the local voice reverberation.

     @param reverbKey The reverberation key: #AUDIO_REVERB_TYPE.
     @param value Value of the reverberation key.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int setLocalVoiceReverb(AUDIO_REVERB_TYPE reverbKey, int value) {
        return setObject(
                         "che.audio.morph.reverb",
                         "{\"key\":%d,\"value\":%d}",
                         static_cast<int>(reverbKey), value);
    }

    /** @deprecated Use IRtcEngine::disableAudio instead. Disables the audio function in the channel.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int pauseAudio() {
        return m_parameter ? m_parameter->setBool("che.pause.audio", true) : -ERR_NOT_INITIALIZED;
    }

    /** @deprecated Use IRtcEngine::enableAudio instead.

     Resumes the audio in the channel.
     @return
     - 0: Success.
     - < 0: Failure.
     */
    int resumeAudio() {
        return m_parameter ? m_parameter->setBool("che.pause.audio", false) : -ERR_NOT_INITIALIZED;
    }

    /** @deprecated Agora does not recommend using this method.

     Sets the high-quality audio preferences. Call this method and set all three modes before joining a channel.

     Do not call this method again after joining a channel.

     @param fullband Full-band codec (48-kHz sampling rate), not compatible with SDK versions earlier than v1.7.4:
     - true: Enable full-band codec.
     - false: Disable full-band codec.
     @param  stereo Stereo codec, not compatible with SDK versions earlier than v1.7.4:
     - true: Enable the stereo codec.
     - false: Disable the stereo codec.
     @param fullBitrate  High bitrate. Recommended with voice-only mode:
     - true: Enables high-bitrate mode.
     - false: Disables high-bitrate mode.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int setHighQualityAudioParameters(bool fullband, bool stereo, bool fullBitrate) {
        return setObject("che.audio.codec.hq", "{\"fullband\":%s,\"stereo\":%s,\"fullBitrate\":%s}", fullband ? "true" : "false", stereo ? "true" : "false", fullBitrate ? "true" : "false");
    }

    /** Adjusts the recording volume.

     @param volume Recording volume. The value ranges between 0 and 400:
     - 0: Mute.
     - 100: Original volume.
     - 400: (Maximum) Four times the original volume with signal clipping protection.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int adjustRecordingSignalVolume(int volume) {//[0, 400]: e.g. 50~0.5x 100~1x 400~4x
        if (volume < 0)
            volume = 0;
        else if (volume > 400)
            volume = 400;
        return m_parameter ? m_parameter->setInt("che.audio.record.signal.volume", volume) : -ERR_NOT_INITIALIZED;
    }

    /** Adjusts the playback volume.

     @param volume Playback volume. The value ranges between 0 and 400:
     - 0: Mute.
     - 100: Original volume.
     - 400: (Maximum) Four times the original volume with signal clipping protection.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int adjustPlaybackSignalVolume(int volume) {//[0, 400]
        if (volume < 0)
            volume = 0;
        else if (volume > 400)
            volume = 400;
        return m_parameter ? m_parameter->setInt("che.audio.playout.signal.volume", volume) : -ERR_NOT_INITIALIZED;
    }

    /** Mutes/Unmutes the recording signal.

     Call this method after calling \ref agora::rtc::RtcEngineParameters::startAudioMixing "startAudioMixing" to mute the recording signal from the speakerphone without muting the mixed audio.

     @param enabled
     - true: Mute the recording signal.
     - false: Unmute the recording signal.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int muteRecordingSignal(bool enabled) {
        return setParameters("{\"che.audio.record.signal.mute\":%s}", enabled ? "true" : "false");
    }

    /** Enables the SDK to regularly report to the application on which user is talking and the speaker's volume.

     Once the method is enabled, the SDK returns the volume indication at the set time interval in the IRtcEngineEventHandler::onAudioVolumeIndication callback function, regardless of whether anyone is speaking in the channel.

     @param interval Time interval between two consecutive volume indications:
     - &le; 0: Disables the volume indication.
     - > 0: Time interval (ms) between two consecutive volume indications. Agora recommends setting it to more than 200 ms. Do not set it lower than 10 ms, or the onAudioVolumeIndication callback function will not be triggered.
     @param smooth  Smoothing factor setting the sensitivity of the audio volume indicator. The value ranges between 0 and 10. The greater the value, the more sensitive the indicator. The recommended value is 3.
     
     @return
     - 0: Success.
     - < 0: Failure.
     */
    int enableAudioVolumeIndication(int interval, int smooth) { // in ms: <= 0: disable, > 0: enable, interval in ms
        if (interval < 0)
            interval = 0;
        return setObject("che.audio.volume_indication", "{\"interval\":%d,\"smooth\":%d}", interval, smooth);
    }

    /** Stops sending the local audio stream.

     @note When set to true, this method does not disable the microphone and thus does not affect any ongoing recording.

     @param mute Whether to stop sending the local audio stream:
     - true: Stops sending the local audio stream.
     - false: Send the local audio stream.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int muteLocalAudioStream(bool mute) {
        return setParameters("{\"rtc.audio.mute_me\":%s,\"che.audio.mute_me\":%s}", mute ? "true" : "false", mute ? "true" : "false");
    }
    // mute/unmute all peers. unmute will clear all muted peers specified mutePeer() interface

    /** Stops receiving a specified remote user’s audio stream.

     @note If you have called RtcEngineParameters::muteAllRemoteAudioStreams (true) to mute all remote audio streams, please call muteAllRemoteAudioStreams (false) before using this method. muteAllRemoteAudioStreams sets all the remote streams, while muteRemoteAudioStream sets a specified stream.

     @param uid User ID of the specified remote user.
     @param mute
     - true: Stop receiving a specified remote user’s audio stream.
     - false: Receive a specified remote user’s audio stream.

     @return
     - 0: Success.
     - < 0: Failure.

     */
    int muteRemoteAudioStream(uid_t uid, bool mute) {
        return setObject("rtc.audio.mute_peer", "{\"uid\":%u,\"mute\":%s}", uid, mute?"true":"false");
    }

    /** Stops receiving all remote users' audio streams.

     @param mute
     - true: Stop receiving all remote users' audio streams.
     - false: Receive all remote users' audio streams.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int muteAllRemoteAudioStreams(bool mute) {
        return m_parameter ? m_parameter->setBool("rtc.audio.mute_peers", mute) : -ERR_NOT_INITIALIZED;
    }

    /** Sets whether to stop receiving all remote users' audio streams by default.

     @param mute
     - true:  Stop receiving all remote users' audio streams by default.
     - false: (Default) Receive all remote users' audio streams by default.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int setDefaultMuteAllRemoteAudioStreams(bool mute) {
        return m_parameter ? m_parameter->setBool("rtc.audio.set_default_mute_peers", mute) : -ERR_NOT_INITIALIZED;
    }

    /** Sets the external audio source.

     @param enabled
     - true: Enable the external audio source.
     - false: Disable the external audio source.
     @param sampleRate    Sampling rate of the external audio source, which can set be as 8000, 16000, 32000, 44100, or 48000.
     @param channels     Number of the external audio source channels (two channels maximum).
     @return
     - 0: Success.
     - < 0: Failure.
     */
    int setExternalAudioSource(bool enabled, int sampleRate, int channels) {
        if (enabled)
            return setParameters("{\"che.audio.external_capture\":true,\"che.audio.external_capture.push\":true,\"che.audio.set_capture_raw_audio_format\":{\"sampleRate\":%d,\"channelCnt\":%d,\"mode\":%d}}", sampleRate, channels, RAW_AUDIO_FRAME_OP_MODE_TYPE::RAW_AUDIO_FRAME_OP_MODE_READ_WRITE);
        else
            return setParameters("{\"che.audio.external_capture\":false,\"che.audio.external_capture.push\":false}");
    }

    /** Specifies an SDK output log file.

     The log file records all log data for the SDK’s operation. Ensure that the directory for the log file exists and is writable.

     @note The default log file is located at: "C:\Users\<user_name>\AppData\Local\Agora\<process_name>".

     @param filePath File path for the log file. The string of the log file is in UTF-8.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int setLogFile(const char* filePath) {
        if (!m_parameter) return -ERR_NOT_INITIALIZED;
#if defined(_WIN32)
        util::AString path;
        if (!m_parameter->convertPath(filePath, path))
            filePath = path->c_str();
        else if (!filePath)
            filePath = "";
#endif
        return m_parameter->setString("rtc.log_file", filePath);
    }

    /** Sets the output log level of the SDK.

     You can use one or a combination of the filters. The log level follows the sequence of OFF, CRITICAL, ERROR, WARNING, INFO, and DEBUG. Choose a level to see the logs preceding that level.

     For example, if you set the log level to WARNING, you will see the logs within levels CRITICAL, ERROR and WARNING.

     @param filter Log filter level: #LOG_FILTER_TYPE

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int setLogFilter(unsigned int filter) {
        return m_parameter ? m_parameter->setUInt("rtc.log_filter", filter&LOG_FILTER_MASK) : -ERR_NOT_INITIALIZED;
    }

    /** Sets the local video display mode.

     This method may be invoked multiple times during a call to change the display mode.

     @param renderMode  Local video display mode: #RENDER_MODE_TYPE
     @return
     - 0: Success.
     - < 0: Failure.
     */
    int setLocalRenderMode(RENDER_MODE_TYPE renderMode) {
        return setRemoteRenderMode(0, renderMode);
    }

    /** Sets the video display mode of a specified user.

     This method can be invoked multiple times during a call to change the display mode.

     @param uid User ID of the remote user.
     @param renderMode  Video display mode: #RENDER_MODE_TYPE
     @return
     - 0: Success.
     - < 0: Failure.
     */
    int setRemoteRenderMode(uid_t uid, RENDER_MODE_TYPE renderMode) {
        return setObject("che.video.render_mode", "{\"uid\":%u,\"mode\":%d}", uid, renderMode);
    }

    /** Sets the stream mode to single- (default) or dual-stream mode. (Live broadcast only.)

     If dual-stream mode is enabled, the receiver can choose to receive the high stream (high-resolution high-bitrate video stream), or low stream (low-resolution low-bitrate video stream).

     @param enabled
     - true: Dual-stream mode.
     - false: Single-stream mode.
     */
    int enableDualStreamMode(bool enabled) {
        return setParameters("{\"rtc.dual_stream_mode\":%s,\"che.video.enableLowBitRateStream\":%d}", enabled ? "true" : "false", enabled ? 1 : 0);
    }

    /** Sets the remote user’s video stream type. Received by the local user when the remote user sends dual streams.

     This method allows the application to adjust the corresponding video-stream type based on the size of the video window to reduce the bandwidth and resources.

     - If the remote user enabled the dual-stream mode by calling RtcEngineParameters::enableDualStreamMode, the SDK will receive the high-video stream by default.
     - If the dual-stream mode is not enabled, the SDK will receive the high-video stream by default.

     The method result will be returned in the IRtcEngineEventHandler::onApiCallExecuted callback function. The Agora SDK receives the high-video stream by default to reduce the bandwidth. If needed, users may use this method to switch to the low-video stream.
     By default, the aspect ratio of the low-video stream is the same as the high-video stream. Once the resolution of the high-video stream is set, the system automatically sets the resolution, frame rate and bitrate for the low-video stream.

     @param uid User ID
     @param streamType   Video-stream type: #REMOTE_VIDEO_STREAM_TYPE
     @return
     - 0: Success.
     - < 0: Failure.
     */
    int setRemoteVideoStreamType(uid_t uid, REMOTE_VIDEO_STREAM_TYPE streamType) {
        return setParameters("{\"rtc.video.set_remote_video_stream\":{\"uid\":%u,\"stream\":%d}, \"che.video.setstream\":{\"uid\":%u,\"stream\":%d}}", uid, streamType, uid, streamType);
//        return setObject("rtc.video.set_remote_video_stream", "{\"uid\":%u,\"stream\":%d}", uid, streamType);
    }

    /** Sets the default video-stream type for the video received by the local user when the remote user sends dual streams.

     - If the dual-stream mode is enabled by calling \ref agora::rtc::RtcEngineParameters::enableDualStreamMode "enableDualStreamMode", the user will receive the high-video stream by default. This method allows the application to adjust the corresponding video-stream type according to the size of the video window, reducing the bandwidth and resources.
     - If the dual-stream mode is not enabled, the user will receive the high-video stream by default.

     The result after calling this method will be returned by \ref agora::rtc::IRtcEngineEventHandler::onApiCallExecuted "onApiCallExecuted". The Agora SDK receives the high-video stream by default, to reduce the bandwidth. If needed, users can switch to the low-video stream through this method.

     @param streamType Video-stream size: #REMOTE_VIDEO_STREAM_TYPE

     @return
     - 0: Success.
     - < 0: Failure.
    */
    int setRemoteDefaultVideoStreamType(REMOTE_VIDEO_STREAM_TYPE streamType) {
        return m_parameter ? m_parameter->setInt("rtc.video.set_remote_default_video_stream_type", streamType) : -ERR_NOT_INITIALIZED;
    }

    /** Sets the audio recording format for the \ref agora::media::IAudioFrameObserver::onRecordAudioFrame "onRecordAudioFrame" callback function.

     @param sampleRate Sampling rate of the data returned by onRecordAudioFrame, which can set be as 8000, 16000, 32000, 44100, or 48000.
     @param channel Number of channels for the data returned by onRecordAudioFrame, which can be set as 1 or 2:
     - 1: Mono
     - 2: Dual-track
     @param mode Use mode of the onRecordAudioFrame callback function: #RAW_AUDIO_FRAME_OP_MODE_TYPE.
     @param samplesPerCall Sample points of the data returned in onRecordAudioFrame. It is usually set as 1024 for stream pushing.
     
     samplesPerCall = (int)(sampleRate &times; sampleInterval), where sampleInterval &ge; 0.01 in seconds.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int setRecordingAudioFrameParameters(int sampleRate, int channel, RAW_AUDIO_FRAME_OP_MODE_TYPE mode, int samplesPerCall) {
        return setObject("che.audio.set_capture_raw_audio_format", "{\"sampleRate\":%d,\"channelCnt\":%d,\"mode\":%d,\"samplesPerCall\":%d}", sampleRate, channel, mode, samplesPerCall);
    }
    /** Sets the audio playback format for the \ref agora::media::IAudioFrameObserver::onPlaybackAudioFrame "onPlaybackAudioFrame" callback function.

     @param sampleRate Sampling rate of the data returned by onPlaybackAudioFrame, which can set be as 8000, 16000, 32000, 44100, or 48000.
     @param channel Number of channels for the data returned by onPlaybackAudioFrame, which can be set as 1 or 2:
     - 1: Mono
     - 2: Dual-track
     @param mode Use mode of the onPlaybackAudioFrame callback function: #RAW_AUDIO_FRAME_OP_MODE_TYPE
     @param samplesPerCall Sample points of the data returned in onPlaybackAudioFrame. It is usually set as 1024 for stream pushing.

     samplesPerCall = (int)(sampleRate &times; sampleInterval), where sampleInterval &ge; 0.01 in seconds.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int setPlaybackAudioFrameParameters(int sampleRate, int channel, RAW_AUDIO_FRAME_OP_MODE_TYPE mode, int samplesPerCall) {
        return setObject("che.audio.set_render_raw_audio_format", "{\"sampleRate\":%d,\"channelCnt\":%d,\"mode\":%d,\"samplesPerCall\":%d}", sampleRate, channel, mode, samplesPerCall);
    }
    /** Sets the mixed audio format for the \ref agora::media::IAudioFrameObserver::onMixedAudioFrame "onMixedAudioFrame" callback function.

     @param sampleRate Sampling rate of the callback data returned by onMixedAudioFrame, which can set be as 8000, 16000, 32000, 44100, or 48000.
     @param samplesPerCall Sample points of the data returned by onMixedAudioFrame. It is usually set as 1024 for stream pushing.

     samplesPerCall = (int)(sampleRate &times; sampleInterval), where sampleInterval &ge; 0.01 in seconds.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int setMixedAudioFrameParameters(int sampleRate, int samplesPerCall) {
        return setObject("che.audio.set_mixed_raw_audio_format", "{\"sampleRate\":%d,\"samplesPerCall\":%d}", sampleRate, samplesPerCall);
    }

    /** Enables interoperability with the Agora Web SDK.

     @param enabled
     - true: Enables interoperability with the Agora Web SDK.
     - false: Disables interoperability with the Agora Web SDK.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int enableWebSdkInteroperability(bool enabled) {//enable interoperability with zero-plugin web sdk
        return setParameters("{\"rtc.video.web_h264_interop_enable\":%s,\"che.video.web_h264_interop_enable\":%s}", enabled ? "true" : "false", enabled ? "true" : "false");
    }

    //only for live broadcast
    /** Sets the preferences for the high-quality video (live broadcast only).

     @param preferFrameRateOverImageQuality Video quality preference:
     - true: Frame rate preference over image quality.
     - false: (Default) Image quality preference over frame rate.

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int setVideoQualityParameters(bool preferFrameRateOverImageQuality) {
        return setParameters("{\"rtc.video.prefer_frame_rate\":%s,\"che.video.prefer_frame_rate\":%s}", preferFrameRateOverImageQuality ? "true" : "false", preferFrameRateOverImageQuality ? "true" : "false");
    }

    /** Sets the local video mirror mode.

     Use this method before IRtcEngine::startPreview, or the mirror mode will not take effect until you re-enable startPreview.

     @param mirrorMode Local video mirror mode: #VIDEO_MIRROR_MODE_TYPE
     @return
     - 0: Success.
     - < 0: Failure.
     */
    int setLocalVideoMirrorMode(VIDEO_MIRROR_MODE_TYPE mirrorMode) {
        if (!m_parameter) return -ERR_NOT_INITIALIZED;
        const char *value;
        switch (mirrorMode) {
            case VIDEO_MIRROR_MODE_AUTO:
                value = "default";
                break;
            case VIDEO_MIRROR_MODE_ENABLED:
                value = "forceMirror";
                break;
            case VIDEO_MIRROR_MODE_DISABLED:
                value = "disableMirror";
                break;
            default:
                return -ERR_INVALID_ARGUMENT;
        }
        return m_parameter->setString("che.video.localViewMirrorSetting", value);
    }

    /** Sets the fallback option for the locally published stream based on the network conditions.

     The default setting for *option* is #STREAM_FALLBACK_OPTION_DISABLED.

     If *option* is set to #STREAM_FALLBACK_OPTION_AUDIO_ONLY, the SDK will:

     - Disable the upstream video when the network cannot support both video and audio.
     - Re-enable the video when the network condition improves.

     When the locally published stream falls back to audio-only or when the audio stream switches back to the video, the IRtcEngineEventHandler::onLocalPublishFallbackToAudioOnly callback function will be triggered.

     @note Agora does not recommend using this method for CDN live streaming, because the remote CDN live user will have a noticeable lag when the locally publish stream falls back to audio-only.

     @param  option Fallback options: #STREAM_FALLBACK_OPTIONS.
     @return
     - 0: Success.
     - < 0: Failure.
     */
    int setLocalPublishFallbackOption(STREAM_FALLBACK_OPTIONS option) {
        return m_parameter ? m_parameter->setInt("rtc.local_publish_fallback_option", option) : -ERR_NOT_INITIALIZED;
    }

    /** Sets the fallback option for the remotely subscribed stream based on the network conditions.

     The default setting for *option* is #STREAM_FALLBACK_OPTION_VIDEO_STREAM_LOW.

     If *option* is set to #STREAM_FALLBACK_OPTION_AUDIO_ONLY, the SDK will automatically switch the video from a high-stream to a low-stream, or turn off the video when the downlink network condition cannot support both audio and video to guarantee the quality of the audio. The SDK keeps track of the network quality and restores the video stream when network conditions improve.

     Once the locally published stream falls back to audio only or the audio stream switches back to the video stream, the \ref agora::rtc::IRtcEngineEventHandler::onRemoteSubscribeFallbackToAudioOnly "onRemoteSubscribeFallbackToAudioOnly" callback function will be triggered.

     @param  option  Fallback options for the remotely subscribed stream: #STREAM_FALLBACK_OPTIONS
     @return
     - 0: Success.
     - < 0: Failure.
     */
    int setRemoteSubscribeFallbackOption(STREAM_FALLBACK_OPTIONS option) {
        return m_parameter ? m_parameter->setInt("rtc.remote_subscribe_fallback_option", option) : -ERR_NOT_INITIALIZED;
    }

    /** Enables loopback recording.

     @param enabled

     - true: Enables loopback recording.
     - false: Disables loopback recording.

     @param deviceName Device name of the microphone.
     @return
     - 0: Success.
     - < 0: Failure.
     */
    int enableLoopbackRecording(bool enabled, const char* deviceName = NULL) {
        if (!deviceName) {
            return setParameters("{\"che.audio.loopback.recording\":%s}", enabled ? "true" : "false");
        }
        else {
            return setParameters("{\"che.audio.loopback.deviceName\":\"%s\",\"che.audio.loopback.recording\":%s}", deviceName, enabled ? "true" : "false");
        }
    }

    /** Sets the volume of the in-ear monitor.

     @param volume Volume of the in-ear monitor. The value ranges between 0 and 100 (default).

     @return
     - 0: Success.
     - < 0: Failure.
     */
    int setInEarMonitoringVolume(int volume) {
        return m_parameter ? m_parameter->setInt("che.audio.headset.monitoring.parameter", volume) : -ERR_NOT_INITIALIZED;
    }

protected:
    AParameter& parameter() {
        return m_parameter;
    }
    int setParameters(const char* format, ...) {
        char buf[512];
        va_list args;
        va_start(args, format);
        vsnprintf(buf, sizeof(buf)-1, format, args);
        va_end(args);
        return m_parameter ? m_parameter->setParameters(buf) : -ERR_NOT_INITIALIZED;
    }
    int setObject(const char* key, const char* format, ...) {
        char buf[512];
        va_list args;
        va_start(args, format);
        vsnprintf(buf, sizeof(buf)-1, format, args);
        va_end(args);
        return m_parameter ? m_parameter->setObject(key, buf) : -ERR_NOT_INITIALIZED;
    }
    int stopAllRemoteVideo() {
        return m_parameter ? m_parameter->setBool("che.video.peer.stop_render", true) : -ERR_NOT_INITIALIZED;
    }
private:
    AParameter m_parameter;
};

} //namespace rtc
} // namespace agora

/** Retrieves the SDK version number.

 @param build Build number of Agora the SDK.
 @return String of the SDK version.
 */
#define getAgoraRtcEngineVersion getAgoraSdkVersion

////////////////////////////////////////////////////////
/** \addtogroup createAgoraRtcEngine
 @{
 */
////////////////////////////////////////////////////////

/** Creates the RTC engine object and returns the pointer.

 @return Pointer of the RTC engine object.
 */
AGORA_API agora::rtc::IRtcEngine* AGORA_CALL createAgoraRtcEngine();

////////////////////////////////////////////////////////
/** @} */
////////////////////////////////////////////////////////

#define getAgoraRtcEngineErrorDescription getAgoraSdkErrorDescription
#define setAgoraRtcEngineExternalSymbolLoader setAgoraSdkExternalSymbolLoader

#endif
