//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCore/AVAssetWriterHelper.h>

#import <AVFCore/AVAssetWriterFigAssetWriterNotificationHandlerDelegate-Protocol.h>

@class AVAssetWriterFigAssetWriterNotificationHandler, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetWriterWritingHelper : AVAssetWriterHelper <AVAssetWriterFigAssetWriterNotificationHandlerDelegate>
{
    struct OpaqueFigAssetWriter *_figAssetWriter;
    NSObject<OS_dispatch_queue> *_figAssetWriterAccessQueue;
    BOOL _startSessionCalled;
    AVAssetWriterFigAssetWriterNotificationHandler *_notificationHandler;
    void *_callbackContextToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)finalStepWorkaroundOperationWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1;
+ (id)finishWritingDelegateOperationWithAssetWriter:(id)arg1 andFigAssetWriter:(struct OpaqueFigAssetWriter *)arg2 andDelegate:(id)arg3;
+ (id)prepareInputsOperationsWithInputs:(id)arg1;
- (id)_makeFinishWritingOperationsWithCustomFigAssetWriterFinishOperation:(id)arg1;
- (struct OpaqueFigAssetWriter *)_retainedFigAssetWriter;
- (id)_transitionToFinishWritingHelperWithFinishWritingOperations:(id)arg1;
- (void)cancelWriting;
- (BOOL)checkAVAssetWriterInputConfigurationToOutputSegmentDataForOutputFileTypeProfile:(id)arg1 preferredOutputSegmentInterval:(CDStruct_1b6d18a9)arg2 returningDebugDescription:(id *)arg3;
- (BOOL)checkConfigurationToOutputSegmentDataReturningDebugDescription:(id *)arg1;
- (void)dealloc;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)endSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (id)figTrackReferences;
- (void)finishWriting;
- (void)finishWritingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)flush;
- (void)flushSegment;
- (id)initWithConfigurationState:(id)arg1;
- (id)initWithConfigurationState:(id)arg1 error:(id *)arg2;
- (void)startSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (long long)status;

@end

