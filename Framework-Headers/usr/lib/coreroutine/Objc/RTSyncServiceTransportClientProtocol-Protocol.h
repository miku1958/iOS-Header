//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/NSObject-Protocol.h>

@class NSArray, NSError, NSString, RTSyncMessage;
@protocol RTSyncServiceTransportProtocol;

@protocol RTSyncServiceTransportClientProtocol <NSObject>
- (void)transport:(id<RTSyncServiceTransportProtocol>)arg1 deviceSetDidChange:(NSArray *)arg2;
- (void)transport:(id<RTSyncServiceTransportProtocol>)arg1 didDeliverMessageWithIdentifier:(NSString *)arg2;
- (void)transport:(id<RTSyncServiceTransportProtocol>)arg1 didReceiveMessage:(RTSyncMessage *)arg2;
- (void)transport:(id<RTSyncServiceTransportProtocol>)arg1 didSendMessageWithIdentifier:(NSString *)arg2 error:(NSError *)arg3;
- (void)transport:(id<RTSyncServiceTransportProtocol>)arg1 linkStateDidChange:(long long)arg2;
@end
