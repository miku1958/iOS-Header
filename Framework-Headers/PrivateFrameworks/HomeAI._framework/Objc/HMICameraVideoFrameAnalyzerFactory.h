//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/HMFTimerDelegate-Protocol.h>

@class HMFTimer, HMFUnfairLock, NSString;
@protocol HMICameraVideoFrameAnalyzer;

@interface HMICameraVideoFrameAnalyzerFactory : HMFObject <HMFTimerDelegate, HMFLogging>
{
    HMFUnfairLock *_lock;
    id<HMICameraVideoFrameAnalyzer> _frameAnalyzer;
    HMFTimer *_watchdogTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) id<HMICameraVideoFrameAnalyzer> frameAnalyzer; // @synthesize frameAnalyzer=_frameAnalyzer;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property (readonly) Class superclass;
@property (readonly) HMFTimer *watchdogTimer; // @synthesize watchdogTimer=_watchdogTimer;

+ (id)eventConfidenceThresholdsHigh;
+ (id)eventConfidenceThresholdsMedium;
+ (id)logCategory;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)analyze:(id)arg1 targetEventTypes:(long long)arg2 enableFaceClassification:(BOOL)arg3 sessionIdentifier:(id)arg4 homeUUID:(id)arg5 error:(id *)arg6;
- (BOOL)ensureFrameAnalyzerWithError:(id *)arg1;
- (double)eventConfidenceFaceThresholdFromTrial;
- (id)eventConfidenceThresholdsHighFromTrial;
- (id)eventConfidenceThresholdsMediumFromTrial;
- (id)getConfidenceThresholdPreferenceForKey:(id)arg1 defaultConfidenceThreshold:(double)arg2;
- (void)handleMotionDetection:(id)arg1 sessionPTS:(CDStruct_1b6d18a9)arg2 frameDimensions:(struct CGSize)arg3 sessionIdentifier:(id)arg4;
- (id)init;
- (double)modelTimeoutPreference;
- (void)preAnalyze:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)warmStartModel;

@end

