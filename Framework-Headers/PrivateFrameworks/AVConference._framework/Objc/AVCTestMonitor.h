//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVConferenceXPCClient;
@protocol OS_dispatch_queue;

@interface AVCTestMonitor : NSObject
{
    id _delegate;
    NSObject<OS_dispatch_queue> *_delegateNotificationQueue;
    AVConferenceXPCClient *_connection;
}

- (void)dealloc;
- (id)delegate;
- (id)delegateNotificationQueue;
- (void)deregisterBlocksForNotifications;
- (void)forceNetworkCellular:(BOOL)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)registerBlocksForNotifications;
- (void)requestReport;
- (void)setCannedReplayPath:(id)arg1;
- (void)setEmulatedNetworkConfigurationPath:(id)arg1;
- (void)setEmulatedRxPLR:(double)arg1;
- (void)setEnableLoopbackInterface:(BOOL)arg1;
- (void)setEnableOneToOneMode:(BOOL)arg1;
- (void)setForcedCapBitrate:(int)arg1;
- (void)setForcedTargetBitrate:(int)arg1;
- (void)setupNotificationQueue:(id)arg1;
- (void)updateAudioInjectConfig:(id)arg1;

@end

