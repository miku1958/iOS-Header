//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNTimeConverting-Protocol.h>

@class AVAudioFormat, NSArray, NSMutableArray, NSString, SNAudioProcessorCache, SNUltronResultsLogger;

__attribute__((visibility("hidden")))
@interface SNForwardPassAudioStreamAnalyzer : NSObject <SNTimeConverting>
{
    SNAudioProcessorCache *_processorCache;
    struct list<SoundAnalysis::ProcessingContext, std::__1::allocator<SoundAnalysis::ProcessingContext>> _processingContexts;
    struct ProcessingTree _processingTree;
    AVAudioFormat *_currentFormat;
    NSArray *_requests;
    NSMutableArray *_analyzerInfos;
    SNUltronResultsLogger *_resultsLogger;
    BOOL _shouldRebuildProcessingTree;
}

@property (readonly, nonatomic) double clientSampleRate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)addRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 resultsHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (BOOL)addRequest:(id)arg1 withObserver:(id)arg2 error:(id *)arg3;
- (void)analyzeAudioBuffer:(id)arg1 atAudioFramePosition:(long long)arg2;
- (void)analyzeAudioBufferList:(struct AudioBufferList *)arg1 withAudioFrameCount:(unsigned int)arg2 atAudioFramePosition:(long long)arg3;
- (id)analyzerInfoForRequest:(id)arg1;
- (long long)clientSampleTimeFromSampleTime:(long long)arg1 fromBox:(struct Box *)arg2;
- (void)completeAnalysis;
- (CDUnknownBlockType)completionHandlerWithClientCompletionHandler:(CDUnknownBlockType)arg1 forRequest:(id)arg2;
- (BOOL)configureAnalysisTreeWithFormat:(id)arg1;
- (BOOL)configureAnalyzer:(id)arg1 withFormat:(id)arg2;
- (id)createAnalyzerInfoForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 resultsHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (void)dealloc;
- (id)detailedDescription;
- (void)handleAnalyzeAudioBufferError;
- (id)initWithFormat:(id)arg1;
- (void)removeAllRequests;
- (void)removeAnalyzerInfoForRequest:(id)arg1;
- (void)removeRequest:(id)arg1;
- (CDUnknownBlockType)resultsHandlerWithClientResultsHandler:(CDUnknownBlockType)arg1 forRequest:(id)arg2;
- (void)sendErrorToAllRequests:(id)arg1;
- (BOOL)startRecordingToDirectory:(id)arg1 requestDescription:(id)arg2 error:(id *)arg3;
- (void)stopRecording;
- (void)updateProcessingTreeFormat:(id)arg1;
- (BOOL)updateTreeProcessingContexts;
- (void)writeDSPGraphDotFilesToDirectory:(id)arg1;

@end
