//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCMediaStreamSyncSourceDelegate-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCMediaStreamSynchronizer : NSObject <VCMediaStreamSyncSourceDelegate>
{
    struct tagVCMediaStreamSyncTime _source;
    struct tagVCMediaStreamSyncTime _destination;
    unsigned int _destinationPlayoutSampleRTPTimestamp;
    int _destinationRTPTimestampWraps;
    double _sourcePlayoutSampleSystemTime;
    unsigned int _sourcePlayoutSampleRTPTimestamp;
    int _sourceRTPTimestampWraps;
    int _sourceState;
    NSObject<OS_dispatch_queue> *_mediaStreamSynchronizerQueue;
    struct tagHANDLE *_videoPlayerHandle;
    CDUnknownBlockType _destinationHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)differenceBetweenRtpTimestamp:(unsigned int)arg1 rtpTimestamp:(unsigned int)arg2;
- (CDStruct_1b6d18a9)calculatePlayoutTimeWithRTPTimestamp:(unsigned int)arg1;
- (void)callDestinationAlarmHandlerWithTimestamp:(unsigned int)arg1 isClosing:(BOOL)arg2;
- (void)dealloc;
- (id)initWithSourceSampleRate:(unsigned int)arg1 destinationSampleRate:(unsigned int)arg2;
- (void)scheduleDestinationPlaybackWithRTPTimestamp:(unsigned int)arg1;
- (void)setDestinationAlarmHandler:(CDUnknownBlockType)arg1;
- (double)sourceTimeForDestinationRTPTimestamp:(unsigned int)arg1;
- (void)updateDestinationNTPTime:(double)arg1 withRTPTimeStamp:(unsigned int)arg2;
- (void)updateSourceNTPTime:(double)arg1 withRTPTimeStamp:(unsigned int)arg2;
- (void)updateSourcePlayoutSampleRTPTimestamp:(unsigned int)arg1 systemTime:(double)arg2 uuid:(id)arg3;
- (void)updateSourceState:(int)arg1;

@end
