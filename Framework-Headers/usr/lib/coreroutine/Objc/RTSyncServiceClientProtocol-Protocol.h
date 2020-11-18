//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/NSObject-Protocol.h>

@class NSArray, RTSyncMessage, RTSyncService;

@protocol RTSyncServiceClientProtocol <NSObject>
- (void)syncService:(RTSyncService *)arg1 didReceiveMessage:(RTSyncMessage *)arg2;

@optional
- (void)syncService:(RTSyncService *)arg1 connectionStateDidChange:(long long)arg2;
- (void)syncService:(RTSyncService *)arg1 deviceSetDidChange:(NSArray *)arg2;
@end
