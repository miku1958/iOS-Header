//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString, SOTimersSnapshot;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface SOTimersPublisher : NSObject
{
    NSObject<OS_dispatch_queue> *_timersPublisherQueue;
    NSObject<OS_dispatch_group> *_timersPublisherDispatchGroup;
    NSHashTable *_subscribers;
    SOTimersSnapshot *_timerSnapshot;
    NSString *_typeName;
}

@property (readonly, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;

- (void).cxx_destruct;
- (void)_createNewSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)_notifySubscribersOfEvent:(long long)arg1;
- (void)_startObserving;
- (void)addSubscriber:(id)arg1;
- (void)dealloc;
- (void)firingTimerChanged:(id)arg1;
- (void)firingTimerDismissed:(id)arg1;
- (void)getCurrentSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)removeSubscriber:(id)arg1;
- (void)stateReset:(id)arg1;
- (void)timerFired:(id)arg1;
- (void)timersAdded:(id)arg1;
- (void)timersRemoved:(id)arg1;
- (void)timersUpdated:(id)arg1;

@end
