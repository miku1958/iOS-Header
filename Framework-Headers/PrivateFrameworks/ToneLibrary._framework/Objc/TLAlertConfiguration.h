//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ToneLibrary/NSCopying-Protocol.h>
#import <ToneLibrary/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, NSURL;

@interface TLAlertConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isFrozen;
    BOOL _hasCustomRepeatingFlag;
    BOOL _hasCustomAudioVolume;
    BOOL _forPreview;
    BOOL _shouldRepeat;
    BOOL _shouldIgnoreRingerSwitch;
    BOOL _shouldForcePlayingAtUserSelectedAudioVolume;
    float _audioVolume;
    double _audioPlaybackInitiationDelay;
    double _audioVolumeRampingDuration;
    long long _type;
    NSString *_topic;
    NSString *_toneIdentifier;
    NSString *_vibrationIdentifier;
    NSURL *_externalToneFileURL;
    unsigned long long _externalToneMediaLibraryItemIdentifier;
    NSDictionary *_externalVibrationPattern;
    NSURL *_externalVibrationPatternFileURL;
    NSString *_audioCategory;
    double _maximumDuration;
}

@property (nonatomic, setter=_setAudioPlaybackInitiationDelay:) double _audioPlaybackInitiationDelay; // @synthesize _audioPlaybackInitiationDelay;
@property (nonatomic, setter=_setAudioVolumeRampingDuration:) double _audioVolumeRampingDuration; // @synthesize _audioVolumeRampingDuration;
@property (readonly, nonatomic) BOOL _hasCustomAudioVolume; // @synthesize _hasCustomAudioVolume;
@property (copy, nonatomic) NSString *audioCategory; // @synthesize audioCategory=_audioCategory;
@property (nonatomic) float audioVolume; // @synthesize audioVolume=_audioVolume;
@property (copy, nonatomic) NSURL *externalToneFileURL; // @synthesize externalToneFileURL=_externalToneFileURL;
@property (nonatomic) unsigned long long externalToneMediaLibraryItemIdentifier; // @synthesize externalToneMediaLibraryItemIdentifier=_externalToneMediaLibraryItemIdentifier;
@property (copy, nonatomic) NSDictionary *externalVibrationPattern; // @synthesize externalVibrationPattern=_externalVibrationPattern;
@property (copy, nonatomic) NSURL *externalVibrationPatternFileURL; // @synthesize externalVibrationPatternFileURL=_externalVibrationPatternFileURL;
@property (nonatomic, getter=isForPreview) BOOL forPreview; // @synthesize forPreview=_forPreview;
@property (nonatomic) double maximumDuration; // @synthesize maximumDuration=_maximumDuration;
@property (nonatomic) BOOL shouldForcePlayingAtUserSelectedAudioVolume; // @synthesize shouldForcePlayingAtUserSelectedAudioVolume=_shouldForcePlayingAtUserSelectedAudioVolume;
@property (nonatomic) BOOL shouldIgnoreRingerSwitch; // @synthesize shouldIgnoreRingerSwitch=_shouldIgnoreRingerSwitch;
@property (nonatomic) BOOL shouldRepeat; // @synthesize shouldRepeat=_shouldRepeat;
@property (copy, nonatomic) NSString *toneIdentifier; // @synthesize toneIdentifier=_toneIdentifier;
@property (copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;
@property (copy, nonatomic) NSString *vibrationIdentifier; // @synthesize vibrationIdentifier=_vibrationIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_freeze;
- (void)_throwForFrozenInstance;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (BOOL)isEqual:(id)arg1;

@end

