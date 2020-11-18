//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSHashTable, NSLocale, NSMutableArray, NSMutableDictionary, NSNumber;
@protocol OS_os_activity;

@interface AXTapticTimeManager : NSObject
{
    NSMutableArray *_enqueuedSounds;
    NSMutableArray *_enqueuedSoundDelays;
    NSHashTable *_observers;
    unsigned int _ssIDHapticFast[24];
    unsigned int _ssIDHapticSlow[24];
    unsigned int _ssIDHapticMorse[10];
    NSMutableDictionary *_soundToPatterns;
    NSMutableDictionary *_hapticsDescriptions;
    BOOL _is24Hour;
    NSNumber *_cachedSpeed;
    long long _currentSsid;
    NSObject<OS_os_activity> *_activity;
    struct os_activity_scope_state_s _scopeState;
    BOOL _isCurrentlyOutputting;
    unsigned int _assertionID;
    CDUnknownBlockType _testingQueueCallback;
    NSLocale *_localeOverride;
    NSDate *_dateOverride;
}

@property (nonatomic) unsigned int assertionID; // @synthesize assertionID=_assertionID;
@property (strong, nonatomic) NSDate *dateOverride; // @synthesize dateOverride=_dateOverride;
@property (readonly, nonatomic) BOOL isCurrentlyOutputting; // @synthesize isCurrentlyOutputting=_isCurrentlyOutputting;
@property (strong, nonatomic) NSLocale *localeOverride; // @synthesize localeOverride=_localeOverride;
@property (copy, nonatomic) CDUnknownBlockType testingQueueCallback; // @synthesize testingQueueCallback=_testingQueueCallback;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_atomToLegacyVibePattern:(id)arg1;
- (void)_cleanupHapticsDict;
- (void)_clearQueue;
- (id)_convertSoundToStringName:(unsigned int)arg1;
- (id)_dateComponentsForClockTime;
- (void)_dequeueSound;
- (void)_enqueueHours:(unsigned long long)arg1 encoding:(long long)arg2;
- (void)_enqueueMinutes:(unsigned long long)arg1 encoding:(long long)arg2;
- (void)_handleTestingQueueCallback;
- (void)_informObserversDidOutputSSID:(long long)arg1;
- (void)_informObserversDidStart;
- (void)_informObserversDidStop;
- (void)_informObserversWillOutputSSID:(long long)arg1 hapticsDescriptions:(id)arg2;
- (BOOL)_is24HourTime;
- (void)_localeDidChange:(id)arg1;
- (long long)_numberOfTapHoursForClockTimeWithEncoding:(long long)arg1;
- (long long)_numberOfTapMinutesForClockTime;
- (long long)_numberOfTapsForHourNumber:(long long)arg1 withEncoding:(long long)arg2;
- (void)_outputWithEnqueueBlock:(CDUnknownBlockType)arg1;
- (BOOL)_preStartCheck;
- (BOOL)_startPowerAssertion;
- (void)_stopPowerAssertion;
- (void)_updateHapticPatternsIfNecessary:(BOOL)arg1;
- (void)_updateIs24HourTime;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)outputHours:(long long)arg1;
- (void)outputHoursAndMinutes:(long long)arg1;
- (void)outputMinutes:(long long)arg1;
- (void)removeObserver:(id)arg1;
- (void)stopCurrentOutput;

@end
