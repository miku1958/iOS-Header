//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNSystemAudioAnalyzerProtocol-Protocol.h>

@class AVAudioFormat, NSMutableArray, SNAudioRecordingQueue, SNAudioStreamAnalyzer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SNSystemAudioAnalyzerLocal : NSObject <SNSystemAudioAnalyzerProtocol>
{
    AVAudioFormat *_recordFormat;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SNAudioRecordingQueue *_recordingQueue;
    SNAudioStreamAnalyzer *_streamAnalyzer;
    long long _recordingState;
    BOOL _clientStartedAnalysis;
    NSMutableArray *_requests;
}

- (void).cxx_destruct;
- (BOOL)_addRequest:(id)arg1 withObserver:(id)arg2 error:(id *)arg3;
- (void)_removeAllRequests;
- (void)_removeRequest:(id)arg1;
- (BOOL)addRequest:(id)arg1 withObserver:(id)arg2 error:(id *)arg3;
- (void)handleAVAudioSessionInterruption:(id)arg1;
- (void)handleAVAudioSessionMediaServicesLost:(id)arg1;
- (void)handleAVAudioSessionMediaServicesReset:(id)arg1;
- (void)handleAVAudioSessionRouteChange:(id)arg1;
- (void)handleAudioStreamInterrupted;
- (id)init;
- (void)removeAllRequests;
- (void)removeRequest:(id)arg1;
- (void)sendErrorToAllRequests:(id)arg1;
- (void)start;
- (void)startAudio;
- (void)stop;
- (void)stopAudio;

@end
