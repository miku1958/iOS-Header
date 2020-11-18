//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/CXCopying-Protocol.h>
#import <CallKit/NSCopying-Protocol.h>
#import <CallKit/NSSecureCoding-Protocol.h>

@class CXHandle, CXHandoffContext, NSDictionary, NSString, NSUUID;

@interface CXCallUpdate : NSObject <NSSecureCoding, CXCopying, NSCopying>
{
    BOOL _supportsHolding;
    BOOL _supportsGrouping;
    BOOL _supportsUngrouping;
    BOOL _supportsDTMF;
    BOOL _hasVideo;
    BOOL _emergency;
    BOOL _usingBaseband;
    BOOL _blocked;
    BOOL _mayRequireBreakBeforeMake;
    BOOL _requiresInCallSounds;
    BOOL _supportsUnambiguousMultiPartyState;
    BOOL _supportsAddCall;
    BOOL _supportsSendingToVoicemail;
    struct CXCallUpdateHasSet _hasSet;
    CXHandle *_remoteHandle;
    NSString *_localizedCallerName;
    NSUUID *_UUID;
    long long _ttyType;
    long long _inCallSoundRegion;
    NSString *_audioCategory;
    NSString *_audioMode;
    long long _audioInterruptionProvider;
    long long _audioInterruptionOperationMode;
    NSString *_crossDeviceIdentifier;
    CXHandoffContext *_handoffContext;
    NSDictionary *_context;
    long long _videoStreamToken;
}

@property (strong, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property (copy, nonatomic) NSString *audioCategory; // @synthesize audioCategory=_audioCategory;
@property (nonatomic) long long audioInterruptionOperationMode; // @synthesize audioInterruptionOperationMode=_audioInterruptionOperationMode;
@property (nonatomic) long long audioInterruptionProvider; // @synthesize audioInterruptionProvider=_audioInterruptionProvider;
@property (copy, nonatomic) NSString *audioMode; // @synthesize audioMode=_audioMode;
@property (nonatomic, getter=isBlocked) BOOL blocked; // @synthesize blocked=_blocked;
@property (copy, nonatomic) NSString *callerNameFromNetwork;
@property (copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property (copy, nonatomic) NSString *crossDeviceIdentifier; // @synthesize crossDeviceIdentifier=_crossDeviceIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEmergency) BOOL emergency; // @synthesize emergency=_emergency;
@property (strong, nonatomic) CXHandoffContext *handoffContext; // @synthesize handoffContext=_handoffContext;
@property (nonatomic) struct CXCallUpdateHasSet hasSet; // @synthesize hasSet=_hasSet;
@property (nonatomic) BOOL hasVideo; // @synthesize hasVideo=_hasVideo;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long inCallSoundRegion; // @synthesize inCallSoundRegion=_inCallSoundRegion;
@property (copy, nonatomic) NSString *localizedCallerName; // @synthesize localizedCallerName=_localizedCallerName;
@property (nonatomic) BOOL mayRequireBreakBeforeMake; // @synthesize mayRequireBreakBeforeMake=_mayRequireBreakBeforeMake;
@property (copy, nonatomic) CXHandle *remoteHandle; // @synthesize remoteHandle=_remoteHandle;
@property (nonatomic) BOOL requiresInCallSounds; // @synthesize requiresInCallSounds=_requiresInCallSounds;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsAddCall; // @synthesize supportsAddCall=_supportsAddCall;
@property (nonatomic) BOOL supportsDTMF; // @synthesize supportsDTMF=_supportsDTMF;
@property (nonatomic) BOOL supportsGrouping; // @synthesize supportsGrouping=_supportsGrouping;
@property (nonatomic) BOOL supportsHolding; // @synthesize supportsHolding=_supportsHolding;
@property (nonatomic) BOOL supportsSendingToVoicemail; // @synthesize supportsSendingToVoicemail=_supportsSendingToVoicemail;
@property (nonatomic) BOOL supportsUnambiguousMultiPartyState; // @synthesize supportsUnambiguousMultiPartyState=_supportsUnambiguousMultiPartyState;
@property (nonatomic) BOOL supportsUngrouping; // @synthesize supportsUngrouping=_supportsUngrouping;
@property (nonatomic, setter=setTTYType:) long long ttyType; // @synthesize ttyType=_ttyType;
@property (nonatomic, getter=isUsingBaseband) BOOL usingBaseband; // @synthesize usingBaseband=_usingBaseband;
@property (nonatomic) long long videoStreamToken; // @synthesize videoStreamToken=_videoStreamToken;

+ (id)callUpdateWithDefaultValuesSet;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateWithUpdate:(id)arg1;

@end
