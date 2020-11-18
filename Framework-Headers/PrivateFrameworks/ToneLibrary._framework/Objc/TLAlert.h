//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSTimer;

@interface TLAlert : NSObject
{
    BOOL _shouldOverrideMasterSwitches;
    BOOL _repeatedlyPlaying;
    int _type;
    NSString *_accountIdentifier;
    NSString *_toneIdentifier;
    NSString *_vibrationIdentifier;
    long long _instanceIndex;
    NSArray *_alertCompletions;
    NSTimer *_completionFallbackTimer;
}

@property (copy, nonatomic, setter=_setAlertCompletions:) NSArray *_alertCompletions; // @synthesize _alertCompletions;
@property (strong, nonatomic, setter=_setCompletionFallbackTimer:) NSTimer *_completionFallbackTimer; // @synthesize _completionFallbackTimer;
@property (nonatomic, setter=_setInstanceIndex:) long long _instanceIndex; // @synthesize _instanceIndex;
@property (nonatomic, getter=_isRepeatedlyPlaying, setter=_setRepeatedlyPlaying:) BOOL _repeatedlyPlaying; // @synthesize _repeatedlyPlaying;
@property (nonatomic, setter=_setShouldOverrideMasterSwitches:) BOOL _shouldOverrideMasterSwitches; // @synthesize _shouldOverrideMasterSwitches;
@property (copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property (copy, nonatomic) NSString *toneIdentifier; // @synthesize toneIdentifier=_toneIdentifier;
@property (nonatomic) int type; // @synthesize type=_type;
@property (copy, nonatomic) NSString *vibrationIdentifier; // @synthesize vibrationIdentifier=_vibrationIdentifier;

+ (void)_playToneAndVibrationForType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 shouldOverrideMasterSwitches:(BOOL)arg4;
+ (void)_setWatchPrefersSalientToneAndVibration:(BOOL)arg1;
+ (BOOL)_watchPrefersSalientToneAndVibration;
+ (void)playToneAndVibrationForType:(int)arg1;
+ (void)playToneAndVibrationForType:(int)arg1 accountIdentifier:(id)arg2;
+ (void)playToneAndVibrationForType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3;
- (id)_initWithType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 shouldOverrideMasterSwitches:(BOOL)arg4;
- (void)_setAccountIdentifier:(id)arg1;
- (void)_setToneIdentifier:(id)arg1;
- (void)_setType:(int)arg1;
- (void)_setVibrationIdentifier:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithType:(int)arg1;
- (id)initWithType:(int)arg1 accountIdentifier:(id)arg2;
- (id)initWithType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3;
- (BOOL)playWithCompletionHandler:(CDUnknownBlockType)arg1 targetQueue:(id)arg2;
- (void)startPlayingRepeatedly;
- (void)stop;
- (void)stopPlayingRepeatedlyWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2 targetQueue:(id)arg3;
- (void)stopWithFadeOutDuration:(double)arg1;

@end
