//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/TUCall.h>

#import <TelephonyUtilities/AVCRemoteVideoClientDelegate-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class AVCRemoteVideoClient, NSData, NSDictionary, NSMutableDictionary, NSString, NSUUID, TUCallDisplayContext, TUCallProvider, TUHandle;
@protocol TUCallServicesProxyCallActions;

@interface TUProxyCall : TUCall <AVCRemoteVideoClientDelegate, NSSecureCoding>
{
    BOOL _hostedOnCurrentDevice;
    BOOL _outgoing;
    BOOL _voicemail;
    BOOL _isVideo;
    BOOL _thirdPartyVideo;
    BOOL _isSendingAudio;
    BOOL _isSendingVideo;
    BOOL _mediaStalled;
    BOOL _videoDegraded;
    BOOL _videoPaused;
    BOOL _blocked;
    BOOL _emergencyCall;
    BOOL _usingBaseband;
    BOOL _needsManualInCallSounds;
    BOOL _uplinkMuted;
    BOOL _downlinkMuted;
    int _callStatus;
    int _callIdentifier;
    int _ttyType;
    int _callRelaySupport;
    NSString *_callUUID;
    double _startTime;
    TUHandle *_handle;
    TUCallProvider *_backingProvider;
    TUCallProvider *_displayProvider;
    NSString *_callerNameFromNetwork;
    long long _cameraType;
    long long _remoteCameraOrientation;
    NSString *_audioCategory;
    NSString *_audioMode;
    NSDictionary *_endedReasonUserInfo;
    NSString *_endedReasonString;
    NSString *_endedErrorString;
    NSData *_localFrequency;
    NSData *_remoteFrequency;
    long long _videoStreamToken;
    long long _remoteScreenOrientation;
    NSUUID *_callGroupUUID;
    NSDictionary *_providerContext;
    TUCallDisplayContext *_displayContext;
    NSString *_contactIdentifier;
    id<TUCallServicesProxyCallActions> _proxyCallActionsDelegate;
    AVCRemoteVideoClient *_remoteVideo;
    NSMutableDictionary *_remoteVideoModeToLayer;
    struct CGSize _remoteAspectRatio;
    struct CGSize _remoteScreenPortraitAspectRatio;
    struct CGSize _remoteScreenLandscapeAspectRatio;
    struct CGRect _remoteVideoContentRect;
}

@property (copy, nonatomic) NSString *audioCategory; // @synthesize audioCategory=_audioCategory;
@property (copy, nonatomic) NSString *audioMode; // @synthesize audioMode=_audioMode;
@property (strong, nonatomic) TUCallProvider *backingProvider; // @synthesize backingProvider=_backingProvider;
@property (nonatomic, getter=isBlocked) BOOL blocked; // @synthesize blocked=_blocked;
@property (copy, nonatomic) NSUUID *callGroupUUID; // @synthesize callGroupUUID=_callGroupUUID;
@property (nonatomic) int callIdentifier; // @synthesize callIdentifier=_callIdentifier;
@property (nonatomic) int callRelaySupport; // @synthesize callRelaySupport=_callRelaySupport;
@property (nonatomic) int callStatus; // @synthesize callStatus=_callStatus;
@property (copy, nonatomic) NSString *callUUID; // @synthesize callUUID=_callUUID;
@property (copy, nonatomic) NSString *callerNameFromNetwork; // @synthesize callerNameFromNetwork=_callerNameFromNetwork;
@property (nonatomic) long long cameraType; // @synthesize cameraType=_cameraType;
@property (copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) TUCallDisplayContext *displayContext; // @synthesize displayContext=_displayContext;
@property (strong, nonatomic) TUCallProvider *displayProvider; // @synthesize displayProvider=_displayProvider;
@property (nonatomic, getter=isEmergencyCall) BOOL emergencyCall; // @synthesize emergencyCall=_emergencyCall;
@property (copy, nonatomic) NSString *endedErrorString; // @synthesize endedErrorString=_endedErrorString;
@property (copy, nonatomic) NSString *endedReasonString; // @synthesize endedReasonString=_endedReasonString;
@property (copy, nonatomic) NSDictionary *endedReasonUserInfo; // @synthesize endedReasonUserInfo=_endedReasonUserInfo;
@property (strong, nonatomic) TUHandle *handle; // @synthesize handle=_handle;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHostedOnCurrentDevice) BOOL hostedOnCurrentDevice; // @synthesize hostedOnCurrentDevice=_hostedOnCurrentDevice;
@property (nonatomic) BOOL isSendingAudio; // @synthesize isSendingAudio=_isSendingAudio;
@property (nonatomic) BOOL isVideo; // @synthesize isVideo=_isVideo;
@property (strong, nonatomic) NSData *localFrequency; // @synthesize localFrequency=_localFrequency;
@property (nonatomic, getter=isMediaStalled) BOOL mediaStalled; // @synthesize mediaStalled=_mediaStalled;
@property (nonatomic) BOOL needsManualInCallSounds; // @synthesize needsManualInCallSounds=_needsManualInCallSounds;
@property (nonatomic, getter=isOutgoing) BOOL outgoing; // @synthesize outgoing=_outgoing;
@property (strong, nonatomic) NSDictionary *providerContext; // @synthesize providerContext=_providerContext;
@property (weak, nonatomic) id<TUCallServicesProxyCallActions> proxyCallActionsDelegate; // @synthesize proxyCallActionsDelegate=_proxyCallActionsDelegate;
@property (nonatomic) struct CGSize remoteAspectRatio; // @synthesize remoteAspectRatio=_remoteAspectRatio;
@property (nonatomic) long long remoteCameraOrientation; // @synthesize remoteCameraOrientation=_remoteCameraOrientation;
@property (strong, nonatomic) NSData *remoteFrequency; // @synthesize remoteFrequency=_remoteFrequency;
@property (nonatomic) struct CGSize remoteScreenLandscapeAspectRatio; // @synthesize remoteScreenLandscapeAspectRatio=_remoteScreenLandscapeAspectRatio;
@property (nonatomic) long long remoteScreenOrientation; // @synthesize remoteScreenOrientation=_remoteScreenOrientation;
@property (nonatomic) struct CGSize remoteScreenPortraitAspectRatio; // @synthesize remoteScreenPortraitAspectRatio=_remoteScreenPortraitAspectRatio;
@property (strong, nonatomic) AVCRemoteVideoClient *remoteVideo; // @synthesize remoteVideo=_remoteVideo;
@property (nonatomic) struct CGRect remoteVideoContentRect; // @synthesize remoteVideoContentRect=_remoteVideoContentRect;
@property (strong, nonatomic) NSMutableDictionary *remoteVideoModeToLayer; // @synthesize remoteVideoModeToLayer=_remoteVideoModeToLayer;
@property (nonatomic) double startTime; // @synthesize startTime=_startTime;
@property (readonly) Class superclass;
@property (nonatomic) int ttyType; // @synthesize ttyType=_ttyType;
@property (nonatomic, getter=isUsingBaseband) BOOL usingBaseband; // @synthesize usingBaseband=_usingBaseband;
@property (nonatomic, getter=isVideoDegraded) BOOL videoDegraded; // @synthesize videoDegraded=_videoDegraded;
@property (nonatomic, getter=isVideoPaused) BOOL videoPaused; // @synthesize videoPaused=_videoPaused;
@property (nonatomic) long long videoStreamToken; // @synthesize videoStreamToken=_videoStreamToken;
@property (nonatomic, getter=isVoicemail) BOOL voicemail; // @synthesize voicemail=_voicemail;

+ (id)proxyCallWithCall:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (long long)_cameraTypeForVideoAttributeCamera:(int)arg1;
- (void)_createRemoteVideoIfNecessary;
- (long long)_orientationForVideoAttributesOrientation:(int)arg1;
- (void)_synchronizeRemoteVideoLayers;
- (void)_updateVideoStreamToken:(long long)arg1;
- (void)answerWithRequest:(id)arg1;
- (int)avcRemoteVideoModeForMode:(long long)arg1;
- (void)disconnectWithReason:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueProxyIdentifier:(id)arg1 endpointOnCurrentDevice:(BOOL)arg2;
- (BOOL)isDownlinkMuted;
- (BOOL)isSendingVideo;
- (BOOL)isThirdPartyVideo;
- (BOOL)isUplinkMuted;
- (struct CGSize)localAspectRatioForOrientation:(long long)arg1;
- (void)playDTMFToneForKey:(unsigned char)arg1;
- (struct CGSize)remoteScreenAspectRatio;
- (void)remoteVideoClient:(id)arg1 remoteMediaDidStall:(BOOL)arg2;
- (void)remoteVideoClient:(id)arg1 remoteScreenAttributesDidChange:(id)arg2;
- (void)remoteVideoClient:(id)arg1 remoteVideoAttributesDidChange:(id)arg2;
- (void)remoteVideoClient:(id)arg1 remoteVideoDidPause:(BOOL)arg2;
- (void)remoteVideoClient:(id)arg1 videoDidDegrade:(BOOL)arg2;
- (void)sendHardPauseDigits;
- (void)setCallDisconnectedDueToComponentCrash;
- (void)setDisconnectedReason:(int)arg1;
- (void)setDownlinkMuted:(BOOL)arg1;
- (void)setEndpointOnCurrentDevice:(BOOL)arg1;
- (void)setIsSendingVideo:(BOOL)arg1;
- (void)setRemoteVideoLayer:(id)arg1 forMode:(long long)arg2;
- (void)setRemoteVideoPresentationSize:(struct CGSize)arg1;
- (void)setRemoteVideoPresentationState:(int)arg1;
- (void)setShouldSuppressRingtone:(BOOL)arg1;
- (void)setTransitionStatus:(int)arg1;
- (void)setUplinkMuted:(BOOL)arg1;
- (void)setWantsHoldMusic:(BOOL)arg1;
- (void)updateProxyCallWithDaemon;
- (void)updateWithCall:(id)arg1;

@end
