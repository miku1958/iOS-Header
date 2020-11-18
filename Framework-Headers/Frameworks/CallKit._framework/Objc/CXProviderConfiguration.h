//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/CXCopying-Protocol.h>
#import <CallKit/NSCopying-Protocol.h>
#import <CallKit/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSSet, NSString, NSURL;

@interface CXProviderConfiguration : NSObject <NSSecureCoding, CXCopying, NSCopying>
{
    BOOL _supportsVideo;
    BOOL _supportsAudioOnly;
    BOOL _supportsEmergency;
    BOOL _supportsVoicemail;
    unsigned int _audioSessionID;
    NSString *_localizedName;
    NSData *_iconTemplateImageData;
    unsigned long long _maximumCallGroups;
    unsigned long long _maximumCallsPerCallGroup;
    NSSet *_supportedHandleTypes;
    NSArray *_emergencyNumbers;
    NSArray *_handoffIdentifiers;
    NSURL *_ringtoneSoundURL;
}

@property (nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *emergencyNumbers; // @synthesize emergencyNumbers=_emergencyNumbers;
@property (copy, nonatomic) NSArray *handoffIdentifiers; // @synthesize handoffIdentifiers=_handoffIdentifiers;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSData *iconTemplateImageData; // @synthesize iconTemplateImageData=_iconTemplateImageData;
@property (copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property (nonatomic) unsigned long long maximumCallGroups; // @synthesize maximumCallGroups=_maximumCallGroups;
@property (nonatomic) unsigned long long maximumCallsPerCallGroup; // @synthesize maximumCallsPerCallGroup=_maximumCallsPerCallGroup;
@property (strong, nonatomic) NSString *ringtoneSound;
@property (copy, nonatomic) NSURL *ringtoneSoundURL; // @synthesize ringtoneSoundURL=_ringtoneSoundURL;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSSet *supportedHandleTypes; // @synthesize supportedHandleTypes=_supportedHandleTypes;
@property (nonatomic) BOOL supportsAudioOnly; // @synthesize supportsAudioOnly=_supportsAudioOnly;
@property (nonatomic) BOOL supportsEmergency; // @synthesize supportsEmergency=_supportsEmergency;
@property (nonatomic) BOOL supportsVideo; // @synthesize supportsVideo=_supportsVideo;
@property (nonatomic) BOOL supportsVoicemail; // @synthesize supportsVoicemail=_supportsVoicemail;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedName:(id)arg1;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;

@end

