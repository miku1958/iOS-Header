//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNFuture, CNUnfairLock, NSMutableDictionary, NSOperationQueue;

@interface CNDeviceFirstUnlock : NSObject
{
    CNUnfairLock *_handlersLock;
    NSMutableDictionary *_unlockHandlers;
    NSOperationQueue *_workQueue;
    CNFuture *_firstUnlockFuture;
}

@property (strong, nonatomic) CNFuture *firstUnlockFuture; // @synthesize firstUnlockFuture=_firstUnlockFuture;
@property (strong, nonatomic) CNUnfairLock *handlersLock; // @synthesize handlersLock=_handlersLock;
@property (readonly, nonatomic) BOOL isUnlockedSinceBoot;
@property (strong, nonatomic) NSMutableDictionary *unlockHandlers; // @synthesize unlockHandlers=_unlockHandlers;
@property (strong, nonatomic) NSOperationQueue *workQueue; // @synthesize workQueue=_workQueue;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addUnlockHandlerWithIdentifier:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)countOfUnlockHandlers;
- (void)dealloc;
- (id)init;
- (void)removeUnlockHandlerWithIdentifier:(id)arg1;
- (void)waitForAllOperationsToFinish;
- (void)withHandlersLock_addHandlerWithIdentifier:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)withHandlersLock_cancelExistingOperationWithIdentifier:(id)arg1;
- (void)withHandlersLock_registerForDeviceFirstUnlock;

@end
