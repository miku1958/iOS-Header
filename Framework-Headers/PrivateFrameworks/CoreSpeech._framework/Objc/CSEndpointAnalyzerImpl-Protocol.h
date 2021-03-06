//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSEndpointAnalyzer-Protocol.h>

@class CSAudioChunk, CSServerEndpointFeatures, NSDictionary, NSString;
@protocol CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImplDelegate;

@protocol CSEndpointAnalyzerImpl <CSEndpointAnalyzer>

@property (nonatomic) unsigned long long activeChannel;
@property (readonly, nonatomic) BOOL canProcessCurrentRequest;
@property (weak, nonatomic) id<CSEndpointAnalyzerDelegate> delegate;
@property (readonly, nonatomic) double elapsedTimeWithNoSpeech;
@property (readonly, nonatomic) NSString *endpointerModelVersion;
@property (weak, nonatomic) id<CSEndpointAnalyzerImplDelegate> implDelegate;

- (void)processAudioSamplesAsynchronously:(CSAudioChunk *)arg1;
- (void)recordingStoppedForReason:(long long)arg1;
- (void)resetForNewRequestWithSampleRate:(unsigned long long)arg1 recordContext:(NSDictionary *)arg2 recordSettings:(NSDictionary *)arg3;
- (void)stopEndpointer;
- (double)trailingSilenceDurationAtEndpoint;

@optional
- (void)handleVoiceTriggerWithActivationInfo:(NSDictionary *)arg1;
- (void)logFeaturesWithEvent:(NSString *)arg1 locale:(NSString *)arg2;
- (void)processServerEndpointFeatures:(CSServerEndpointFeatures *)arg1;
- (void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(void (^)(BOOL, NSArray *))arg2;
- (void)updateEndpointerDelayedTrigger:(BOOL)arg1;
- (void)updateEndpointerThreshold:(float)arg1;
@end

