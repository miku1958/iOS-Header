//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVConferenceXPCClient, NSSet;
@protocol AVCAudioPowerSpectrumMeterDelegate, OS_dispatch_queue;

@interface AVCAudioPowerSpectrumMeter : NSObject
{
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id _delegate;
    double _audioSpectrumRefreshRate;
    unsigned short _audioSpectrumBinCount;
    unsigned int _sessionToken;
    NSSet *_whiteListedXPCObjects;
}

@property (readonly, nonatomic) id<AVCAudioPowerSpectrumMeterDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (readonly, nonatomic) unsigned int sessionToken; // @synthesize sessionToken=_sessionToken;

- (void)dealloc;
- (void)deregisterBlocksForService;
- (id)initWithConfig:(struct _AVCAudioPowerSpectrumMeterConfig)arg1 delegate:(id)arg2 queue:(id)arg3;
- (void)registerBlocksForNotifications;
- (void)registerPowerSpectrumForStreamToken:(long long)arg1;
- (void)unregisterPowerSpectrumForStreamToken:(long long)arg1;

@end

