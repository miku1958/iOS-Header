//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;

@interface RCDebugAudioGenerator : NSObject
{
    NSURL *_outputURL;
    double _duration;
    double _intervalBetweenPeaks;
    CDUnknownBlockType _generateCompletionHandler;
    NSDictionary *_outputSettings;
    CDUnknownBlockType _curveFunction;
}

@property (readonly, nonatomic) CDUnknownBlockType curveFunction; // @synthesize curveFunction=_curveFunction;
@property (readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly, nonatomic) CDUnknownBlockType generateCompletionHandler; // @synthesize generateCompletionHandler=_generateCompletionHandler;
@property (readonly, nonatomic) double intervalBetweenPeaks; // @synthesize intervalBetweenPeaks=_intervalBetweenPeaks;
@property (readonly, nonatomic) NSDictionary *outputSettings; // @synthesize outputSettings=_outputSettings;
@property (readonly, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;

+ (CDUnknownBlockType)_defaultCurveFunction;
+ (id)_defaultOutputSettings;
- (void).cxx_destruct;
- (id)_generateLPCMAudioSamplesWithDuration:(double)arg1 curveFunction:(CDUnknownBlockType)arg2 samplesPerSecond:(double)arg3 intervalBetweenPeaks:(double)arg4;
- (void)_onBackgroundQueueGenerateAudio;
- (void)_onMainQueueGenerateFailedWithError:(id)arg1;
- (void)_onMainQueueGenerateFinished;
- (id)initWithOutputURL:(id)arg1 duration:(double)arg2 intervalBetweenPeaks:(double)arg3;
- (BOOL)startWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
