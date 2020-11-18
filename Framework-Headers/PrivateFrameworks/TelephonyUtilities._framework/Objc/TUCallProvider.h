//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSSet, NSString, NSURL, TUSandboxExtendedURL;

@interface TUCallProvider : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _supportsAudioOnly;
    BOOL _supportsAudioAndVideo;
    BOOL _supportsEmergency;
    BOOL _supportsVoicemail;
    unsigned int _audioSessionID;
    NSString *_identifier;
    NSString *_localizedName;
    NSSet *_supportedHandleTypes;
    NSURL *_bundleURL;
    NSString *_bundleIdentifier;
    NSArray *_emergencyLabeledHandles;
    NSString *_URLScheme;
    NSArray *_handoffIdentifiers;
    TUSandboxExtendedURL *_sandboxExtendedRingtoneSoundURL;
    NSURL *_originalRingtoneSoundURL;
    NSData *_iconTemplateImageData;
    unsigned long long _maximumCallGroups;
    unsigned long long _maximumCallsPerCallGroup;
}

@property (copy, nonatomic) NSString *URLScheme; // @synthesize URLScheme=_URLScheme;
@property (nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property (copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (copy, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property (copy, nonatomic) NSArray *emergencyLabeledHandles; // @synthesize emergencyLabeledHandles=_emergencyLabeledHandles;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic, getter=isFaceTimeProvider) BOOL faceTimeProvider;
@property (copy, nonatomic) NSArray *handoffIdentifiers; // @synthesize handoffIdentifiers=_handoffIdentifiers;
@property (copy, nonatomic) NSData *iconTemplateImageData; // @synthesize iconTemplateImageData=_iconTemplateImageData;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property (nonatomic) unsigned long long maximumCallGroups; // @synthesize maximumCallGroups=_maximumCallGroups;
@property (nonatomic) unsigned long long maximumCallsPerCallGroup; // @synthesize maximumCallsPerCallGroup=_maximumCallsPerCallGroup;
@property (strong, nonatomic) NSURL *originalRingtoneSoundURL; // @synthesize originalRingtoneSoundURL=_originalRingtoneSoundURL;
@property (strong, nonatomic) NSURL *ringtoneSoundURL;
@property (strong, nonatomic) TUSandboxExtendedURL *sandboxExtendedRingtoneSoundURL; // @synthesize sandboxExtendedRingtoneSoundURL=_sandboxExtendedRingtoneSoundURL;
@property (copy, nonatomic) NSSet *supportedHandleTypes; // @synthesize supportedHandleTypes=_supportedHandleTypes;
@property (nonatomic) BOOL supportsAudioAndVideo; // @synthesize supportsAudioAndVideo=_supportsAudioAndVideo;
@property (nonatomic) BOOL supportsAudioOnly; // @synthesize supportsAudioOnly=_supportsAudioOnly;
@property (nonatomic) BOOL supportsEmergency; // @synthesize supportsEmergency=_supportsEmergency;
@property (nonatomic) BOOL supportsVoicemail; // @synthesize supportsVoicemail=_supportsVoicemail;
@property (readonly, nonatomic, getter=isTelephonyProvider) BOOL telephonyProvider;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)bundle;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)displayAppBundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasRestrictionsInRetailEnvironment;
- (unsigned long long)hash;
- (id)inCallUIBundleIdentifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCallProvider:(id)arg1;
- (BOOL)isSystemProvider;
- (BOOL)prefersShowingInCallUI;
- (BOOL)supportsHandleType:(long long)arg1;
- (BOOL)supportsShowingInCallUI;

@end

