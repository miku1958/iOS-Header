//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface BYSetupStateNotifier : NSObject
{
    BOOL _shouldRelaunchSetup;
    int _stateNotificationToken;
    int _shouldRemainAliveNotificationToken;
    int _exclusiveNotificationToken;
    unsigned long long _state;
    NSMutableArray *_generalStateNotificationBlocks;
    NSMutableDictionary *_specificStateNotificationBlocks;
    NSMutableArray *_exclusiveNotificationBlocks;
    NSMutableArray *_relaunchStateNotificationBlocks;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

@property (strong, nonatomic) NSMutableArray *exclusiveNotificationBlocks; // @synthesize exclusiveNotificationBlocks=_exclusiveNotificationBlocks;
@property (nonatomic) int exclusiveNotificationToken; // @synthesize exclusiveNotificationToken=_exclusiveNotificationToken;
@property (strong, nonatomic) NSMutableArray *generalStateNotificationBlocks; // @synthesize generalStateNotificationBlocks=_generalStateNotificationBlocks;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property (strong, nonatomic) NSMutableArray *relaunchStateNotificationBlocks; // @synthesize relaunchStateNotificationBlocks=_relaunchStateNotificationBlocks;
@property (nonatomic) BOOL shouldRelaunchSetup; // @synthesize shouldRelaunchSetup=_shouldRelaunchSetup;
@property (nonatomic) int shouldRemainAliveNotificationToken; // @synthesize shouldRemainAliveNotificationToken=_shouldRemainAliveNotificationToken;
@property (strong, nonatomic) NSMutableDictionary *specificStateNotificationBlocks; // @synthesize specificStateNotificationBlocks=_specificStateNotificationBlocks;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;
@property (nonatomic) int stateNotificationToken; // @synthesize stateNotificationToken=_stateNotificationToken;

+ (id)sharedNotifier;
- (void).cxx_destruct;
- (void)_beginObservingState;
- (void)_endObservingState;
- (void)_noLongerExclusiveNotificationFired;
- (void)_shouldRemainAliveNotificationFired;
- (void)_stateChangedTo:(unsigned long long)arg1;
- (void)addObserverWhenSetupIsNoLongerExclusiveWithNotificationBlock:(CDUnknownBlockType)arg1;
- (void)addRelaunchStateChangeObserver:(CDUnknownBlockType)arg1;
- (void)addStateChangeObserver:(CDUnknownBlockType)arg1;
- (void)addStateCompletionObserver:(CDUnknownBlockType)arg1 forState:(unsigned long long)arg2;
- (unsigned long long)currentState;
- (void)dealloc;
- (id)init;
- (void)notifySetupShouldRemainAlive;
- (void)notifyStateChangedTo:(unsigned long long)arg1;

@end

