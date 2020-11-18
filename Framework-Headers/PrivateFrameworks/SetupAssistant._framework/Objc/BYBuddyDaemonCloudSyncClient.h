//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SetupAssistant/BYClientDaemonCloudSyncProtocol-Protocol.h>
#import <SetupAssistant/BYDaemonCloudSyncProtocol-Protocol.h>

@class NSString, NSXPCConnection;
@protocol BYClientDaemonCloudSyncProtocol;

@interface BYBuddyDaemonCloudSyncClient : NSObject <BYDaemonCloudSyncProtocol, BYClientDaemonCloudSyncProtocol>
{
    id<BYClientDaemonCloudSyncProtocol> _delegate;
    NSXPCConnection *_connection;
}

@property (strong) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<BYClientDaemonCloudSyncProtocol> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterface;
- (void).cxx_destruct;
- (void)connectToDaemon;
- (id)init;
- (void)needsToSync:(CDUnknownBlockType)arg1;
- (void)startSync;
- (void)syncCompletedWithErrors:(id)arg1;
- (void)syncProgress:(double)arg1;

@end

