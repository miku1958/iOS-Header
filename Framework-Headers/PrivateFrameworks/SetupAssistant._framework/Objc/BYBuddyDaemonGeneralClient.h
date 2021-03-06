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

+ (CDUnknownBlockType)factory;
- (void).cxx_destruct;
- (id)_daemonConnection;
- (id)backupMetadata;
- (void)cancelDataMigratorDeferredExit;
- (void)cancelInternalSkipInfo;
- (void)deferDataMigratorExit;
- (void)ensureShortLivedTokenUpgrade;
- (void)ensureSilentLoginUpgrade;
- (void)getInternalSkipInfo:(CDUnknownBlockType)arg1;
- (id)init;
- (void)observeFinishSetupTriggers;
- (void)performSilentICDPUpgrade;
- (void)setInternalShouldSkipFlows:(BOOL)arg1 skipExceptions:(id)arg2;
- (BOOL)setupAssistantNeedsToRun;

@end

