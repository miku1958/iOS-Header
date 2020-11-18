//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVConference/VCVideoCaptureClient-Protocol.h>

@class VCMediaStreamStats, VCVideoRule;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface VCVideoStreamTransmitter : NSObject <VCVideoCaptureClient>
{
    struct tagHANDLE *_videoRTP;
    struct OpaqueVTCompressionSession *_compressionSession;
    NSObject<OS_dispatch_queue> *_transmitterQueue;
    struct tagVCRealTimeThread _encoderThread;
    BOOL _terminateEncoderThread;
    NSObject<OS_dispatch_semaphore> *_bufferQueueSemaphore;
    struct opaqueCMSampleBuffer *_savedSampleBuffer;
    struct opaqueCMBufferQueue *_bufferQueue;
    char *_buffer;
    unsigned long long _bufferSize;
    int _packetBufferSize;
    char *_packetBuffer;
    int _maxPacketCount;
    int *_packetSizes;
    int *_packetFlags;
    unsigned int _timestamp;
    CDStruct_1b6d18a9 _latestSampleBufferTimestamp;
    unsigned long long _lastKeyFrameSampleBufferSize;
    double _lastKeyFrameSentTime;
    int _iSMBCount;
    VCVideoRule *_videoRule;
    unsigned int _encodingWidth;
    unsigned int _encodingHeight;
    unsigned int _captureWidth;
    unsigned int _captureHeight;
    unsigned int _targetFramerate;
    unsigned int _txMaxBitrate;
    unsigned int _txMinBitrate;
    unsigned int _temporaryMaximumBitrate;
    unsigned int _keyFrameIntervalDuration;
    unsigned short _recommendedMTU;
    long long _videoCodecType;
    unsigned int _dwRefreshFrameCounter;
    struct _opaque_pthread_mutex_t _xMBs;
    int _shouldGenerateKeyFrame;
    VCMediaStreamStats *_stats;
    double _reportingIntervalStartTime;
    double _reportingLastUpdateTime;
    unsigned char _lastCameraStatusBits;
    BOOL _enableCVO;
    unsigned long long _cvoExtensionID;
    struct tagVCMemoryPool *_frameReferenceMemoryPool;
    struct opaqueRTCReporting *_reportingAgent;
}

@property CDStruct_1b6d18a9 lastFrameTime; // @synthesize lastFrameTime=_latestSampleBufferTimestamp;
@property double lastKeyFrameSentTime; // @synthesize lastKeyFrameSentTime=_lastKeyFrameSentTime;
@property unsigned int lastRTPTimestamp; // @synthesize lastRTPTimestamp=_timestamp;

- (void)avConferencePreviewError:(id)arg1;
- (id)clientCaptureRule;
- (void)dealloc;
- (void)encodeVideoFrame:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2 cameraStatusBits:(unsigned char)arg3;
- (struct __CFDictionary *)forceKeyFrameProperties;
- (void)gatherRealtimeStats:(struct __CFDictionary *)arg1;
- (struct CGSize)getBestCaptureSizeForEncodingSize:(struct CGSize)arg1;
- (void)initVideoCompressionWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 bitrate:(unsigned int)arg3 keyFrameIntervalDuration:(unsigned int)arg4;
- (id)initWithResolution:(long long)arg1 framerate:(unsigned long long)arg2 codecType:(long long)arg3 maxBitrate:(unsigned long long)arg4 minBitrate:(unsigned long long)arg5 keyFrameInterval:(unsigned long long)arg6 enableCVO:(BOOL)arg7 cvoExtensionID:(unsigned long long)arg8 recommendedMTU:(unsigned long long)arg9 rtpHandle:(struct tagHANDLE *)arg10 reportingAgent:(struct opaqueRTCReporting *)arg11;
- (BOOL)isKeyFrame:(struct opaqueCMSampleBuffer *)arg1;
- (void)limitCompressionSessionDataRate:(unsigned int)arg1;
- (BOOL)onCaptureFrame:(struct __CVBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4;
- (BOOL)prependSPSPPS:(unsigned long long *)arg1 dataPointer:(char *)arg2;
- (void)reportingVideoStreamEvent:(unsigned short)arg1;
- (void)requestKeyFrameGeneration;
- (void)sendFrame:(struct opaqueCMSampleBuffer *)arg1 cameraStatusBits:(unsigned char)arg2;
- (unsigned int)setTemporaryMaximumBitrate:(unsigned int)arg1;
- (struct CGSize)sizeForVideoResolution:(long long)arg1;
- (void)startVideo;
- (void)stopVideo;
- (int)transmitEncodedVideoFrame:(char *)arg1 size:(unsigned long long)arg2 timestamp:(unsigned int)arg3 hostTime:(double)arg4 cameraStatusBits:(unsigned char)arg5;
- (int)transmitVideoPackets:(const char *)arg1 packetSizes:(int *)arg2 startPacket:(int)arg3 packetCount:(int)arg4 lastGroup:(int)arg5 timestamp:(unsigned int)arg6 hostTime:(double)arg7 cameraStatusBits:(unsigned char)arg8 bytesSent:(int *)arg9;

@end
