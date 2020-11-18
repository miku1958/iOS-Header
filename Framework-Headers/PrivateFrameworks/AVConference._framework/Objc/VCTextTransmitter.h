//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCTextSender-Protocol.h>

@class NSLock, NSMutableArray, NSString, VCAudioRedBuilder;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VCTextTransmitter : NSObject <VCTextSender>
{
    struct _VCTextTransmitterConfiguration _config;
    double _startTime;
    VCAudioRedBuilder *_redBuilder;
    int _redPayloadType;
    int _currentPayloadType;
    BOOL _isIdle;
    NSLock *_textFramesSendQueueLock;
    NSMutableArray *_textFramesSendQueue;
    NSObject<OS_dispatch_source> *_heartbeat;
    double _idleDuration;
    unsigned int _emptyFramesSent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (unsigned int)getCharTimestampForSystemTime:(double)arg1;
- (void)heartbeat;
- (id)initWithConfiguration:(struct _VCTextTransmitterConfiguration *)arg1;
- (void)sendCharacter:(unsigned short)arg1;
- (void)sendTextFrameWithRedundancy:(id)arg1 marker:(int)arg2;
- (BOOL)start;
- (BOOL)startHeartbeat;
- (void)stop;
- (void)stopHeartbeat;

@end

