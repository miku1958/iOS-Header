//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTDictionarySerializable-Protocol.h>
#import <MobileTimer/NAEquatable-Protocol.h>
#import <MobileTimer/NSCopying-Protocol.h>
#import <MobileTimer/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface MTSound : NSObject <MTDictionarySerializable, NAEquatable, NSCopying, NSSecureCoding>
{
    unsigned long long _soundType;
    NSString *_toneIdentifier;
    NSNumber *_mediaItemIdentifier;
    NSString *_vibrationIdentifier;
    NSNumber *_soundVolume;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSNumber *mediaItemIdentifier; // @synthesize mediaItemIdentifier=_mediaItemIdentifier;
@property (readonly, nonatomic) unsigned long long soundType; // @synthesize soundType=_soundType;
@property (readonly, nonatomic) NSNumber *soundVolume; // @synthesize soundVolume=_soundVolume;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *toneIdentifier; // @synthesize toneIdentifier=_toneIdentifier;
@property (readonly, nonatomic) NSString *vibrationIdentifier; // @synthesize vibrationIdentifier=_vibrationIdentifier;

+ (long long)_alertTypeForCategory:(unsigned long long)arg1;
+ (id)_loadDefaultAlarmSound;
+ (id)_loadDefaultTimerSound;
+ (void)_saveDefaultAlarmSound:(id)arg1;
+ (void)_saveDefaultTimerSound:(id)arg1;
+ (id)defaultSoundForCategory:(unsigned long long)arg1;
+ (id)descriptionForCategory:(unsigned long long)arg1;
+ (void)setDefaultSound:(id)arg1 forCategory:(unsigned long long)arg2;
+ (id)songSoundWithIdentifier:(id)arg1 vibrationIdentifier:(id)arg2 volume:(id)arg3;
+ (BOOL)supportsSecureCoding;
+ (id)toneSoundWithIdentifier:(id)arg1 vibrationIdentifer:(id)arg2 volume:(id)arg3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaItemIdentifier:(id)arg1 vibrationIdentifier:(id)arg2 volume:(id)arg3;
- (id)initWithSound:(id)arg1 usingVolume:(id)arg2;
- (id)initWithToneIdentifier:(id)arg1 vibrationIdentifer:(id)arg2 volume:(id)arg3;
- (BOOL)interruptAudio;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSound:(id)arg1;
- (BOOL)isSilent;
- (id)previewWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)soundByUpdatingVibrationIdentifier:(id)arg1;
- (id)soundByUpdatingVolume:(id)arg1;
- (id)unSound;
- (id)unSoundForCategory:(unsigned long long)arg1;
- (void)updatePreview:(id)arg1;

@end

