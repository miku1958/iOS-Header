//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SleepDaemon/HDSPEnvironmentAware-Protocol.h>

@class HDSPEnvironment, NSMutableDictionary, NSString;
@protocol HKSPSyncAnchor;

__attribute__((visibility("hidden")))
@interface HDSPSleepMessageStore : NSObject <HDSPEnvironmentAware>
{
    struct os_unfair_lock_s _syncLock;
    HDSPEnvironment *_environment;
    NSMutableDictionary *_recentMessages;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // @synthesize environment=_environment;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMutableDictionary *recentMessages; // @synthesize recentMessages=_recentMessages;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<HKSPSyncAnchor> syncAnchor;
@property (readonly, nonatomic) struct os_unfair_lock_s syncLock; // @synthesize syncLock=_syncLock;

- (void).cxx_destruct;
- (void)_lock_addSleepMessage:(id)arg1;
- (id)_locked_syncAnchor;
- (id)_locked_updateSyncAnchor;
- (void)_restoreMessages;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (id)addSleepEventDueMessageWithEvent:(id)arg1;
- (id)addSleepMessageOfType:(unsigned long long)arg1;
- (id)initWithEnvironment:(id)arg1;
- (id)pendingMessagesForSyncAnchor:(id)arg1;

@end

