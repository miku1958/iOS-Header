//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray, SBFMobileKeyBagState;
@protocol OS_dispatch_queue;

@interface SBFMobileKeyBag : NSObject
{
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_observerStateChangedCallbackBlocks;
    NSHashTable *_queue_observers;
    BOOL _queue_hasPasscodeSet;
    BOOL _queue_hasUnlockedSinceBoot;
    int _stateChangedNotifyToken;
    int _firstUnlockNotification;
}

@property (readonly, copy, nonatomic) SBFMobileKeyBagState *extendedState;
@property (readonly, nonatomic) BOOL hasBeenUnlockedSinceBoot;
@property (readonly, nonatomic) BOOL hasPasscodeSet;
@property (readonly, copy, nonatomic) SBFMobileKeyBagState *state;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_queue_createStashBag:(id)arg1;
- (void)_queue_firstUnlockOccurred;
- (void)_queue_handleKeybagStatusChanged;
- (id)_queue_lockStateExtended:(BOOL)arg1;
- (void)_queue_setHasPasscodeIfNecessary:(id)arg1;
- (void)addObserver:(id)arg1;
- (BOOL)beginRecovery:(id)arg1 error:(id *)arg2;
- (void)createStashBag:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createStashBag:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (void)dealloc;
- (id)init;
- (void)lockSkippingGracePeriod:(BOOL)arg1;
- (void)removeObserver:(id)arg1;
- (BOOL)unlockWithPasscode:(id)arg1 error:(id *)arg2;
- (void)waitForUnlockWithTimeout:(float)arg1;

@end

