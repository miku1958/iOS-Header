//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICNanoPairedDeviceStatusObserver-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface ICDeviceSetupStatusMonitor : NSObject <ICNanoPairedDeviceStatusObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_pendingBuddyCompleteBlocks;
    NSMutableArray *_pendingSetupCompleteBlocks;
    BOOL _setupAssistantRunning;
    int _setupAssistantFinishedNotifyToken;
    int _setupAssistantLaunchedNotifyToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDeviceSetupComplete) BOOL deviceSetupComplete;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isSetupAssistantRunning) BOOL setupAssistantRunning;
@property (readonly) Class superclass;

+ (id)sharedMonitor;
- (void).cxx_destruct;
- (id)_init;
- (void)_runAllPendingBlocksOfType:(long long)arg1;
- (void)dealloc;
- (void)nanoPairedDeviceStatusMonitor:(id)arg1 didChangeClientSyncState:(unsigned long long)arg2;
- (void)performBlockAfterBuddySetup:(CDUnknownBlockType)arg1;
- (void)performBlockAfterDeviceSetup:(CDUnknownBlockType)arg1;

@end

