//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSCloudHistoryPushAgent-Protocol.h>

@class NSString, NSXPCConnection;

@interface WBSCloudHistoryPushAgentProxy : NSObject <WBSCloudHistoryPushAgent>
{
    NSXPCConnection *_agentConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)acknowledgePendingPushNotifications;
- (void)clearAcknowledgedPushNotifications;
- (void)dealloc;
- (void)getPushNotifications:(CDUnknownBlockType)arg1;
- (id)init;
- (void)queryMemoryFootprint:(CDUnknownBlockType)arg1;
- (id)queryMemoryFootprintWithError:(id *)arg1;

@end

