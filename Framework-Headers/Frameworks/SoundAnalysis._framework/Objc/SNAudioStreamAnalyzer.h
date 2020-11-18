//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioFormat, NSMutableArray, NSMutableDictionary, SNForwardPassAudioStreamAnalyzer;
@protocol OS_dispatch_queue;

@interface SNAudioStreamAnalyzer : NSObject
{
    NSMutableArray *_requests;
    AVAudioFormat *_currentFormat;
    NSObject<OS_dispatch_queue> *_analyzerQueue;
    SNForwardPassAudioStreamAnalyzer *_firstPassAnalyzer;
    NSMutableDictionary *_secondPassAnalyzers;
    struct unique_ptr<AudioRingBuffer, std::__1::default_delete<AudioRingBuffer>> _ringBuffer;
    struct unique_ptr<CABufferList, std::__1::default_delete<CABufferList>> _ringBufferWriteBufferList;
}

+ (void)deleteWAVAndTextFilesCreatedBeforeLastWeekInDirectory:(id)arg1;
+ (id)secondPassRecordingPath;
+ (BOOL)shouldRecordSecondPass;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_addRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 resultsHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (BOOL)_addSinglePassRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 resultsHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (BOOL)_addTwoPassRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 resultsHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (void)_analyzeAudioBuffer:(id)arg1 atAudioFramePosition:(long long)arg2;
- (void)_removeRequest:(id)arg1;
- (void)_removeSinglePassRequest:(id)arg1;
- (void)_removeTwoPassRequest:(id)arg1;
- (BOOL)addRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 resultsHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (BOOL)addRequest:(id)arg1 withObserver:(id)arg2 error:(id *)arg3;
- (void)analyzeAudioBuffer:(id)arg1 atAudioFramePosition:(long long)arg2;
- (void)completeAnalysis;
- (id)detailedDescription;
- (void)handleBeginSecondPassForRequest:(id)arg1 secondPassController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 resultsHandler:(CDUnknownBlockType)arg4;
- (void)handleEndSecondPassForRequest:(id)arg1;
- (id)initWithFormat:(id)arg1;
- (void)removeAllRequests;
- (void)removeRequest:(id)arg1;
- (void)removeRequestAsync:(id)arg1;
- (void)sendErrorToAllRequests:(id)arg1;
- (void)writeDSPGraphDotFilesToDirectory:(id)arg1;

@end
