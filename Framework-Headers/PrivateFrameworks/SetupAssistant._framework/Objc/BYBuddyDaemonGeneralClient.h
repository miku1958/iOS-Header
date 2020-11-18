//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSXPCConnection;

@interface BYBuddyDaemonGeneralClient : NSObject
{
    NSLock *_connectionLock;
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (id)_daemonConnection;
- (id)backupMetadata;
- (void)cancelDataMigratorDeferredExit;
- (void)deferDataMigratorExit;
- (void)ensureShortLivedTokenUpgrade;
- (void)ensureSilentLoginUpgrade;
- (id)init;
- (void)observeFinishSetupTriggers;
- (void)performSilentICDPUpgrade;
- (BOOL)setupAssistantNeedsToRun;

@end
