//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceMemos/AVCaptureAudioDataOutputSampleBufferDelegate-Protocol.h>

@class AVAssetWriter, AVCaptureAudioDataOutput, AVCaptureSession, NSDate, NSMutableArray, NSString, NSURL, NSUUID;
@protocol OS_dispatch_queue, RCCaptureOutputWriterDelegate;

@interface RCCaptureOutputWriter : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate>
{
    BOOL _waitingForAVCaptureSessionDidStart;
    BOOL _handledAVCaptureSessionTerminatedAbnormally;
    BOOL _handledAVCaptureSessionFailedToStart;
    BOOL _isProcessingSamples;
    long long _AVCaptureSessionStartupState;
    unsigned long long _sampleBuffersWritten;
    NSMutableArray *_delegateBlocks;
    struct {
        long long value;
        int timescale;
        unsigned int flags;
        long long epoch;
    } _sampleBuffersWrittenDuration;
    BOOL _finalizedAssetEncounteredError;
    double _storeDemoTimeLimit;
    unsigned long long _maxRecordedFileSize;
    AVCaptureSession *_AVCaptureSession;
    long long _writerState;
    id<RCCaptureOutputWriterDelegate> _captureOutputDelegate;
    NSURL *_finalizedAssetURL;
    double _finalizedAssetDuration;
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_recordingSessionID;
    NSURL *_activeOutputFileURL;
    NSDate *_recordingCreationDate;
    AVAssetWriter *_assetWriter;
    NSObject<OS_dispatch_queue> *_sampleBufferQueue;
    AVCaptureAudioDataOutput *_sampleBufferDataOutput;
}

@property (readonly, nonatomic) AVCaptureSession *AVCaptureSession; // @synthesize AVCaptureSession=_AVCaptureSession;
@property (strong, nonatomic) NSURL *activeOutputFileURL; // @synthesize activeOutputFileURL=_activeOutputFileURL;
@property (strong, nonatomic) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property (readonly, nonatomic) double assetWritingCheckpointInterval;
@property (weak, nonatomic) id<RCCaptureOutputWriterDelegate> captureOutputDelegate; // @synthesize captureOutputDelegate=_captureOutputDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double finalizedAssetDuration; // @synthesize finalizedAssetDuration=_finalizedAssetDuration;
@property (readonly, nonatomic) BOOL finalizedAssetEncounteredError; // @synthesize finalizedAssetEncounteredError=_finalizedAssetEncounteredError;
@property (readonly, nonatomic) NSURL *finalizedAssetURL; // @synthesize finalizedAssetURL=_finalizedAssetURL;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maxRecordedFileSize; // @synthesize maxRecordedFileSize=_maxRecordedFileSize;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NSDate *recordingCreationDate; // @synthesize recordingCreationDate=_recordingCreationDate;
@property (copy, nonatomic) NSUUID *recordingSessionID; // @synthesize recordingSessionID=_recordingSessionID;
@property (strong, nonatomic) AVCaptureAudioDataOutput *sampleBufferDataOutput; // @synthesize sampleBufferDataOutput=_sampleBufferDataOutput;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferQueue; // @synthesize sampleBufferQueue=_sampleBufferQueue;
@property (nonatomic) double storeDemoTimeLimit; // @synthesize storeDemoTimeLimit=_storeDemoTimeLimit;
@property (readonly) Class superclass;
@property (nonatomic) long long writerState; // @synthesize writerState=_writerState;

- (void).cxx_destruct;
- (void)_checkIfRecordingSessionEverStarted:(id)arg1;
- (void)_clearSampleDataOutput;
- (void)_finalizeAssetWriting;
- (BOOL)_handleEncounteredFatalAssetWriterError;
- (BOOL)_handleNotificationAsSessionStartFailure;
- (void)_interruptionDidBegin:(id)arg1;
- (void)_prepareCaptureSessionOutputsIfNecessary;
- (void)_registerForCatpureSessionNotifications;
- (void)_scheduleMainThreadDelegateBlock:(CDUnknownBlockType)arg1;
- (void)_sessionDidStartRunning:(id)arg1;
- (void)_sessionDidStopRunning:(id)arg1;
- (void)_sessionErrored:(id)arg1;
- (void)_setWriterState:(long long)arg1;
- (BOOL)_setupAssetWriter:(id *)arg1 sampleBufferRef:(struct opaqueCMSampleBuffer *)arg2;
- (void)_unregisterForCatpureSessionNotifications;
- (long long)_writerState;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)dealloc;
- (void)endWriting;
- (void)enforceMaxRecordingDuration;
- (id)initWithAVCaptureSession:(id)arg1;
- (void)pauseWriting;
- (void)resumeWriting;
- (BOOL)startCaptureSession;
- (void)startMaximumRecordingDurationTimer;
- (BOOL)startWritingToOutputFileURL:(id)arg1 creationDate:(id)arg2 beginPaused:(BOOL)arg3 captureOutputDelegate:(id)arg4;
- (void)stopCaptureSession;

@end
