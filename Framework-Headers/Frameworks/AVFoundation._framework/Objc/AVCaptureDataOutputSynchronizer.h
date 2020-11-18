//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVCaptureAudioDataOutputSampleBufferDelegate-Protocol.h>
#import <AVFoundation/AVCaptureDepthDataOutputDelegate-Protocol.h>
#import <AVFoundation/AVCaptureMetadataOutputObjectsDelegate-Protocol.h>
#import <AVFoundation/AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h>

@class AVCaptureDataOutputSynchronizerInternal, NSArray, NSString;
@protocol AVCaptureDataOutputSynchronizerDelegate, OS_dispatch_queue;

@interface AVCaptureDataOutputSynchronizer : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate, AVCaptureDepthDataOutputDelegate>
{
    AVCaptureDataOutputSynchronizerInternal *_internal;
}

@property (readonly, strong) NSArray *dataOutputs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<AVCaptureDataOutputSynchronizerDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
- (void)_adjustSynchronizedDataTimestamps;
- (BOOL)_allSlaveSynchronizedDataOutputsContainTimestampEqualToOrGreaterThanMasterTimestamp:(CDStruct_1b6d18a9)arg1;
- (void)_appendSynchronizedData:(id)arg1 forCaptureOutput:(id)arg2;
- (void)_assignTimestampAdjustmentQueueToDataOutputStorageWithCommonProvenance;
- (int)_computedMasterSynchronizedDataQueueMaxDepthForDataOutputs:(id)arg1;
- (void)_createTimestampHistoryQueuesForMetadataOutputStoragesWithNoTimestampAdjustmentQueues;
- (void)_dispatchRipenedSynchronizedData;
- (void)_dispatchSynchronizedDataWithTimestamp:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)_earliestSlaveSynchronizedDataQueueTimestamp;
- (void)_overrideDataOutputDelegatesForDelegateCallbackQueue:(id)arg1;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)dealloc;
- (void)depthDataOutput:(id)arg1 didDropDepthData:(id)arg2 timestamp:(CDStruct_1b6d18a9)arg3 connection:(id)arg4 reason:(long long)arg5;
- (void)depthDataOutput:(id)arg1 didOutputDepthData:(id)arg2 timestamp:(CDStruct_1b6d18a9)arg3 connection:(id)arg4;
- (id)initWithDataOutputs:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;

@end

