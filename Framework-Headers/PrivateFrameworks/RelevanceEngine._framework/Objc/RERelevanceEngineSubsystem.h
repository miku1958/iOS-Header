//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REActivityTrackerDelegate-Protocol.h>
#import <RelevanceEngine/RERelevanceEngineSubsystemProperties-Protocol.h>

@class NSString, REActivityTracker, RERelevanceEngine;
@protocol OS_dispatch_queue;

@interface RERelevanceEngineSubsystem : NSObject <RERelevanceEngineSubsystemProperties, REActivityTrackerDelegate>
{
    NSObject<OS_dispatch_queue> *_relevanceEngineQueue;
    REActivityTracker *_activityTracker;
    BOOL _running;
    struct os_unfair_lock_s _lock;
    RERelevanceEngine *_relevanceEngine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) RERelevanceEngine *relevanceEngine; // @synthesize relevanceEngine=_relevanceEngine;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activityTracker:(id)arg1 didBeginActivity:(id)arg2;
- (void)activityTracker:(id)arg1 didEndActivity:(id)arg2;
- (void)beginActivity:(id)arg1 forObject:(id)arg2;
- (void)dealloc;
- (void)endActivity:(id)arg1 forObject:(id)arg2;
- (id)initWithRelevanceEngine:(id)arg1;
- (void)pause;
- (void)resume;
- (void)setRunning:(BOOL)arg1;
- (void)trackObject:(id)arg1;
- (void)withdrawObject:(id)arg1;

@end

