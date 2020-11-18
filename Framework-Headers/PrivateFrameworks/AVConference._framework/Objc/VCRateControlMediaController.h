//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCStatisticsCollector, SenderLargeFrameInfo;

__attribute__((visibility("hidden")))
@interface VCRateControlMediaController : NSObject
{
    id _mediaControllerDelegate;
    AVCStatisticsCollector *_statisticsCollector;
    struct tagHANDLE *_hMediaQueue;
    unsigned int _videoSendingBitrate;
    unsigned int _audioSendingBitrate;
    unsigned int _minTargetBitrate;
    unsigned int _targetBitrate;
    BOOL _isVideoStoppedByVCRateControl;
    BOOL _isVideoStoppedByBaseband;
    BOOL _isVideoPausedByUser;
    BOOL _isAudioOnly;
    BOOL _isBasebandFlushing;
    BOOL _isAudioStall;
    BOOL _isInThrottlingMode;
    unsigned char _videoPayloadType;
    unsigned short _videoTransactionID;
    unsigned int _videoRefreshFrameTimestamp;
    unsigned int _videoRefreshFramePacketCount;
    double _lastVideoKeyFrameTime;
    SenderLargeFrameInfo *_senderLargeFrameInfo;
    unsigned int _probingLargeFrameSize;
    unsigned int _probingLargeFrameSizeCap;
    unsigned int _probingSequencePacketSize;
    unsigned int _probingSequencePacketCount;
    BOOL _shouldDisableLargeFrameRequestsWhenInitialRampUp;
    BOOL _isRateLimitedMaxTimeExceeded;
    BOOL _isSenderProbingEnabled;
    int _basebandFlushCount;
    double _lastBasebandFlushAudioTime;
    double _lastBasebandFlushVideoTime;
    unsigned short _videoFlushTransactionID;
    unsigned int _audioStallBitrate;
    unsigned int _basebandAverageBitrate;
    unsigned int _basebandTotalQueueDepth;
    unsigned int _basebandFlushableQueueDepth;
    double _basebandExpectedQueuingDelay;
    double _basebandNBDCD;
    double _lastBasebandHighNBDCDTime;
    BOOL _isBasebandQueuingDelayHigh;
    void *_logBasebandDump;
    unsigned int _afrcRemoteEstimatedBandwidth;
}

@property (nonatomic) unsigned int afrcRemoteEstimatedBandwidth; // @synthesize afrcRemoteEstimatedBandwidth=_afrcRemoteEstimatedBandwidth;
@property (nonatomic) unsigned int audioSendingBitrate; // @synthesize audioSendingBitrate=_audioSendingBitrate;
@property (readonly, nonatomic) int basebandFlushCount; // @synthesize basebandFlushCount=_basebandFlushCount;
@property (nonatomic) BOOL isAudioOnly; // @synthesize isAudioOnly=_isAudioOnly;
@property (readonly, nonatomic) BOOL isInThrottlingMode; // @synthesize isInThrottlingMode=_isInThrottlingMode;
@property (nonatomic) BOOL isRateLimitedMaxTimeExceeded; // @synthesize isRateLimitedMaxTimeExceeded=_isRateLimitedMaxTimeExceeded;
@property (nonatomic) BOOL isSenderProbingEnabled; // @synthesize isSenderProbingEnabled=_isSenderProbingEnabled;
@property (readonly, nonatomic) BOOL isVideoStopped;
@property (readonly, nonatomic) BOOL isVideoStoppedByVCRateControl; // @synthesize isVideoStoppedByVCRateControl=_isVideoStoppedByVCRateControl;
@property (nonatomic) unsigned int minTargetBitrate; // @synthesize minTargetBitrate=_minTargetBitrate;
@property (readonly, nonatomic) unsigned int probingLargeFrameSize; // @synthesize probingLargeFrameSize=_probingLargeFrameSize;
@property (readonly, nonatomic) unsigned int probingSequencePacketCount; // @synthesize probingSequencePacketCount=_probingSequencePacketCount;
@property (readonly, nonatomic) unsigned int probingSequencePacketSize; // @synthesize probingSequencePacketSize=_probingSequencePacketSize;
@property (nonatomic) BOOL shouldDisableLargeFrameRequestsWhenInitialRampUp; // @synthesize shouldDisableLargeFrameRequestsWhenInitialRampUp=_shouldDisableLargeFrameRequestsWhenInitialRampUp;
@property (strong, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
@property (nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
@property (nonatomic) unsigned int videoSendingBitrate; // @synthesize videoSendingBitrate=_videoSendingBitrate;

- (void)computePacketLossWithTimestamp:(unsigned short)arg1 totalRemoteReceivedPackets:(unsigned int)arg2 packetBurstLoss:(unsigned int)arg3 packetLossRate:(double *)arg4 mostBurstLoss:(unsigned int *)arg5;
- (void)dealloc;
- (void)decreaseFlushCount:(int)arg1;
- (BOOL)didMediaGetFlushedWithPayloadType:(unsigned char)arg1 transactionID:(unsigned short)arg2 packetDropped:(unsigned short)arg3 sequenceNumberArray:(unsigned short *)arg4;
- (void)enableBasebandLogDump:(void *)arg1;
- (void)getMediaQueueInVideoBitrate:(double *)arg1 outVideoBitrate:(double *)arg2 inAudioBitrate:(double *)arg3 outAudioBitrate:(double *)arg4;
- (void)getMediaQueueRateChangeCounter:(unsigned int *)arg1 rateChangeTime:(double *)arg2;
- (void)increaseBasebandFlushCountInternallyWithSuggestion:(struct VCRateControlMediaSuggestion *)arg1;
- (BOOL)increaseFlushCountForVideoRefresh:(int)arg1 transactionID:(unsigned short)arg2;
- (id)initWithMediaQueue:(struct tagHANDLE *)arg1 delegate:(id)arg2;
- (BOOL)isProbingLargeFrameRequiredAtTime:(double)arg1;
- (void)pauseVideoByUser:(BOOL)arg1;
- (void)printLargeFrameStatsAtTime:(double)arg1 timeSinceLastProbingSequence:(double)arg2 frameSize:(unsigned int)arg3 wastedBytes:(unsigned int)arg4 isFrameRequested:(BOOL)arg5;
- (void)recordVideoRefreshFrameWithTimestamp:(unsigned int)arg1 payloadType:(unsigned char)arg2 packetCount:(unsigned int)arg3 isKeyFrame:(BOOL)arg4;
- (void)resumeVideoByVCRateControl;
- (void)scheduleProbingSequenceAtTime:(double)arg1;
- (void)scheduleProbingSequenceWithFrameSize:(unsigned int)arg1 paddingBytes:(unsigned int)arg2 isProbingSequenceScheduled:(BOOL *)arg3;
- (void)stopVideoByVCRateControl;
- (void)updateBasebandSuggestionWithStatistics:(CDStruct_5cb394a5)arg1;
- (void)updateLargeFrameSizeWithBandwidth:(unsigned int)arg1;
- (void)updateProbingLargeFrameSizeCap;

@end

