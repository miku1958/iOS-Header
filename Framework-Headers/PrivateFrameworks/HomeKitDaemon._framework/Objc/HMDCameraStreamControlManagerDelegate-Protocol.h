//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraSessionID, NSDictionary, NSError, NSNumber;
@protocol HMDCameraStreamControlManagerProtocol;

@protocol HMDCameraStreamControlManagerDelegate <NSObject>
- (void)streamControlManager:(id<HMDCameraStreamControlManagerProtocol>)arg1 didFail:(NSError *)arg2;
- (void)streamControlManagerDidNegotiateStream:(id<HMDCameraStreamControlManagerProtocol>)arg1 selectedParameters:(NSDictionary *)arg2;
- (void)streamControlManagerDidReceiveFirstFrame:(id<HMDCameraStreamControlManagerProtocol>)arg1 audioStreamSetting:(unsigned long long)arg2 aspectRatio:(NSNumber *)arg3;
- (void)streamControlManagerDidReconfigureStream:(id<HMDCameraStreamControlManagerProtocol>)arg1;
- (void)streamControlManagerDidSetupRemoteConnection:(id<HMDCameraStreamControlManagerProtocol>)arg1;
- (void)streamControlManagerDidStartStream:(id<HMDCameraStreamControlManagerProtocol>)arg1 slotIdentifier:(NSNumber *)arg2;
- (void)streamControlManagerDidStopStreamForSessionID:(HMDCameraSessionID *)arg1 error:(NSError *)arg2;
@end

