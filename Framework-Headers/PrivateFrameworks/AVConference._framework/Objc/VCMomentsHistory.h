//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVConference/VCMomentsHistoryBufferDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, VCMomentsHistoryBuffer, VideoAttributes;
@protocol OS_dispatch_queue, VCMovieWriterProtocol;

__attribute__((visibility("hidden")))
@interface VCMomentsHistory : NSObject <VCMomentsHistoryBufferDelegate>
{
    NSMutableDictionary *_writers;
    NSObject<VCMovieWriterProtocol> *_writer;
    NSString *_masterTransactionID;
    NSMutableArray *_pendingRequests;
    NSObject<OS_dispatch_queue> *_momentsQueue;
    VCMomentsHistoryBuffer *_frameBuffer;
    VCMomentsHistoryBuffer *_localAudioBuffer;
    VCMomentsHistoryBuffer *_remoteAudioBuffer;
    NSMutableDictionary *_completionHandlers;
    VideoAttributes *_remoteScreenAttributes;
    struct __CVPixelBufferPool *_bufferPool;
    struct __CVPixelBufferPool *_copyPool;
    struct OpaqueVTPixelTransferSession *_transferSession;
    struct OpaqueVTPixelTransferSession *_copyTransferSession;
    int _captureHeight;
    int _captureWidth;
    BOOL _resize;
    BOOL _isFirstFrame;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) VideoAttributes *remoteScreenAttributes; // @synthesize remoteScreenAttributes=_remoteScreenAttributes;
@property (readonly) Class superclass;

- (void)addLocalAudioSample:(struct opaqueVCAudioBufferList *)arg1 timestamp:(unsigned int)arg2;
- (void)addLocalVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 cameraStatusBits:(unsigned char)arg2 timestamp:(unsigned int)arg3;
- (void)addRemoteAudioSample:(struct opaqueVCAudioBufferList *)arg1 timestamp:(unsigned int)arg2;
- (void)appendSampleWithWriter:(id)arg1 buffer:(id)arg2 sample:(struct opaqueCMSampleBuffer *)arg3;
- (struct CGSize)calculateVisibleAreaWithVisibleRect:(struct CGRect)arg1 cameraStatusBit:(unsigned char)arg2;
- (void)cancelRequestWithTransactionID:(id)arg1;
- (void)cleanupActiveRequests;
- (void)cleanupTransferSession;
- (struct __CVBuffer *)copyBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)dealloc;
- (void)endVideoRecording:(id)arg1 timestamp:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)finishWritingWithWriter:(id)arg1 transactionID:(id)arg2;
- (void)flushHistoryBuffers;
- (id)getFilePathWithTransactionID:(id)arg1 type:(unsigned char)arg2;
- (void)getLivePhotoWithTransactionID:(id)arg1 timestamp:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getPhotoWithTransactionID:(id)arg1 Timestamp:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handlePendingRequests;
- (void)handleSinglePendingRequestWithTransactionID:(id)arg1 sourceURL:(id)arg2;
- (void)historyBuffer:(id)arg1 didDequeueSample:(struct opaqueCMSampleBuffer *)arg2 timestamp:(unsigned int)arg3;
- (id)init;
- (void)registerDirectoryWithFilePath:(id)arg1;
- (int)rewriteMovieMetadataWithURL:(id)arg1 transactionID:(id)arg2;
- (void)setCompeletionHandler:(CDUnknownBlockType)arg1 forTransactionID:(id)arg2;
- (void)setupResizingSessionsWithVisibleRect:(struct CGRect)arg1 cameraStatusBit:(unsigned char)arg2;
- (CDStruct_1b6d18a9)setupStillImageWithTimestamp:(unsigned int)arg1 transactionID:(id)arg2 visibleRect:(struct CGRect *)arg3 cameraStatusBit:(char *)arg4;
- (void)setupWriterWithTransactionID:(id)arg1 filePath:(id)arg2 stillImageTime:(CDStruct_1b6d18a9)arg3 visibleRect:(struct CGRect)arg4 cameraStatusBit:(unsigned char)arg5;
- (void)startVideoRecording:(id)arg1 timestamp:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateAudioBuffer:(id)arg1 WithSample:(struct opaqueCMSampleBuffer *)arg2 timestamp:(unsigned int)arg3;
- (void)updateCaptureSizesWithFirstFrame:(struct opaqueCMSampleBuffer *)arg1;
- (void)updateRemoteScreenAttributes:(id)arg1;
- (void)updateVideoBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2 cameraStatusBits:(unsigned char)arg3 timestamp:(unsigned int)arg4;
- (BOOL)writeToFileWithTimestamp:(unsigned int)arg1 transactionID:(id)arg2 URL:(id *)arg3;
- (BOOL)writeToLivePhotoToFileWithFrame:(struct __CVBuffer *)arg1 transactionID:(id)arg2 URL:(id *)arg3 cameraStatusBits:(unsigned char)arg4;

@end

