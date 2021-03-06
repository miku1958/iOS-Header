//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/CXCopying-Protocol.h>
#import <CallKit/NSCopying-Protocol.h>
#import <CallKit/NSSecureCoding-Protocol.h>

@class CXHandle, CXHandoffContext, NSDictionary, NSSet, NSString, NSUUID;

@interface CXCallUpdate : NSObject <CXCopying, NSSecureCoding, NSCopying>
{
    BOOL _emergency;
    BOOL _usingBaseband;
    BOOL _blocked;
    BOOL _mayRequireBreakBeforeMake;
    BOOL _hasVideo;
    BOOL _requiresInCallSounds;
    BOOL _supportsHolding;
    BOOL _supportsGrouping;
    BOOL _supportsUngrouping;
    BOOL _supportsDTMF;
    BOOL _supportsUnambiguousMultiPartyState;
    BOOL _supportsAddCall;
    BOOL _supportsSendingToVoicemail;
    BOOL _prefersExclusiveAccessToCellularNetwork;
    BOOL _supportsTTYWithVoice;
    BOOL _remoteUplinkMuted;
    BOOL _shouldSuppressInCallUI;
    BOOL _requiresAuthentication;
    BOOL _mutuallyExclusiveCall;
    struct os_unfair_lock_s _accessorLock;
    CXHandle *_remoteHandle;
    NSString *_localizedCallerName;
    long long _ttyType;
    NSString *_audioCategory;
    NSString *_audioMode;
    long long _audioInterruptionProvider;
    long long _audioInterruptionOperationMode;
    long long _verificationStatus;
    long long _priority;
    long long _inCallSoundRegion;
    long long _videoStreamToken;
    NSString *_crossDeviceIdentifier;
    NSString *_ISOCountryCode;
    NSUUID *_localSenderIdentityUUID;
    NSUUID *_localSenderIdentityAccountUUID;
    NSSet *_remoteParticipantHandles;
    NSSet *_activeRemoteParticipantHandles;
    CXHandoffContext *_handoffContext;
    NSDictionary *_context;
    unsigned long long _originatingUIType;
    long long _junkConfidence;
    long long _identificationCategory;
    struct CXCallUpdateHasSet _hasSet;
    NSUUID *_UUID;
}

@property (copy, nonatomic) NSString *ISOCountryCode; // @synthesize ISOCountryCode=_ISOCountryCode;
@property (strong, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property (readonly, nonatomic) struct os_unfair_lock_s accessorLock; // @synthesize accessorLock=_accessorLock;
@property (copy, nonatomic) NSSet *activeRemoteParticipantHandles; // @synthesize activeRemoteParticipantHandles=_activeRemoteParticipantHandles;
@property (copy, nonatomic) NSString *audioCategory; // @synthesize audioCategory=_audioCategory;
@property (nonatomic) long long audioInterruptionOperationMode; // @synthesize audioInterruptionOperationMode=_audioInterruptionOperationMode;
@property (nonatomic) long long audioInterruptionProvider; // @synthesize audioInterruptionProvider=_audioInterruptionProvider;
@property (copy, nonatomic) NSString *audioMode; // @synthesize audioMode=_audioMode;
@property (nonatomic, getter=isBlocked) BOOL blocked; // @synthesize blocked=_blocked;
@property (copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property (copy, nonatomic) NSString *crossDeviceIdentifier; // @synthesize crossDeviceIdentifier=_crossDeviceIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEmergency) BOOL emergency; // @synthesize emergency=_emergency;
@property (strong, nonatomic) CXHandoffContext *handoffContext; // @synthesize handoffContext=_handoffContext;
@property (nonatomic) struct CXCallUpdateHasSet hasSet; // @synthesize hasSet=_hasSet;
@property (nonatomic) BOOL hasVideo; // @synthesize hasVideo=_hasVideo;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long identificationCategory; // @synthesize identificationCategory=_identificationCategory;
@property (nonatomic) long long inCallSoundRegion; // @synthesize inCallSoundRegion=_inCallSoundRegion;
@property (nonatomic) long long junkConfidence; // @synthesize junkConfidence=_junkConfidence;
@property (copy, nonatomic) NSUUID *localSenderIdentityAccountUUID; // @synthesize localSenderIdentityAccountUUID=_localSenderIdentityAccountUUID;
@property (copy, nonatomic) NSUUID *localSenderIdentityUUID; // @synthesize localSenderIdentityUUID=_localSenderIdentityUUID;
@property (copy, nonatomic) NSString *localizedCallerName; // @synthesize localizedCallerName=_localizedCallerName;
@property (nonatomic) BOOL mayRequireBreakBeforeMake; // @synthesize mayRequireBreakBeforeMake=_mayRequireBreakBeforeMake;
@property (nonatomic, getter=isMutuallyExclusiveCall) BOOL mutuallyExclusiveCall; // @synthesize mutuallyExclusiveCall=_mutuallyExclusiveCall;
@property (nonatomic) unsigned long long originatingUIType; // @synthesize originatingUIType=_originatingUIType;
@property (nonatomic) BOOL prefersExclusiveAccessToCellularNetwork; // @synthesize prefersExclusiveAccessToCellularNetwork=_prefersExclusiveAccessToCellularNetwork;
@property (nonatomic) long long priority; // @synthesize priority=_priority;
@property (copy, nonatomic) CXHandle *remoteHandle; // @synthesize remoteHandle=_remoteHandle;
@property (copy, nonatomic) NSSet *remoteParticipantHandles; // @synthesize remoteParticipantHandles=_remoteParticipantHandles;
@property (nonatomic, getter=isRemoteUplinkMuted) BOOL remoteUplinkMuted; // @synthesize remoteUplinkMuted=_remoteUplinkMuted;
@property (nonatomic) BOOL requiresAuthentication; // @synthesize requiresAuthentication=_requiresAuthentication;
@property (nonatomic) BOOL requiresInCallSounds; // @synthesize requiresInCallSounds=_requiresInCallSounds;
@property (nonatomic) BOOL shouldSuppressInCallUI; // @synthesize shouldSuppressInCallUI=_shouldSuppressInCallUI;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsAddCall; // @synthesize supportsAddCall=_supportsAddCall;
@property (nonatomic) BOOL supportsDTMF; // @synthesize supportsDTMF=_supportsDTMF;
@property (nonatomic) BOOL supportsGrouping; // @synthesize supportsGrouping=_supportsGrouping;
@property (nonatomic) BOOL supportsHolding; // @synthesize supportsHolding=_supportsHolding;
@property (nonatomic) BOOL supportsSendingToVoicemail; // @synthesize supportsSendingToVoicemail=_supportsSendingToVoicemail;
@property (nonatomic) BOOL supportsTTYWithVoice; // @synthesize supportsTTYWithVoice=_supportsTTYWithVoice;
@property (nonatomic) BOOL supportsUnambiguousMultiPartyState; // @synthesize supportsUnambiguousMultiPartyState=_supportsUnambiguousMultiPartyState;
@property (nonatomic) BOOL supportsUngrouping; // @synthesize supportsUngrouping=_supportsUngrouping;
@property (nonatomic, setter=setTTYType:) long long ttyType; // @synthesize ttyType=_ttyType;
@property (nonatomic, getter=isUsingBaseband) BOOL usingBaseband; // @synthesize usingBaseband=_usingBaseband;
@property (nonatomic) long long verificationStatus; // @synthesize verificationStatus=_verificationStatus;
@property (nonatomic) long long videoStreamToken; // @synthesize videoStreamToken=_videoStreamToken;

+ (id)callUpdateWithDefaultValuesSet;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)blocked;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)emergency;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)mutuallyExclusiveCall;
- (BOOL)remoteUplinkMuted;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateWithUpdate:(id)arg1;
- (BOOL)usingBaseband;

@end

