//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EFCancelable-Protocol.h>
#import <Email/EMActivityObserver_xpc-Protocol.h>

@class EMActivityRegistry, EMRemoteConnection, NSArray, NSMutableDictionary, NSString;
@protocol EFCancelable, EMActivityObserver;

__attribute__((visibility("hidden")))
@interface _EMActivityRegistryObserverWrapper : NSObject <EFCancelable, EMActivityObserver_xpc>
{
    id<EFCancelable> _observerCancelable;
    NSMutableDictionary *_trackedActivities;
    struct os_unfair_lock_s _lock;
    EMRemoteConnection *_connection;
    EMActivityRegistry *_registry;
    id<EMActivityObserver> _observer;
}

@property (strong) NSArray *activities;
@property (strong) EMRemoteConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak) id<EMActivityObserver> observer; // @synthesize observer=_observer;
@property (weak) EMActivityRegistry *registry; // @synthesize registry=_registry;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_recover;
- (void)_resetWithCancelable:(id)arg1;
- (void)_startObservingIfNecessary;
- (void)activityWithID:(id)arg1 finishedWithError:(id)arg2;
- (void)activityWithID:(id)arg1 setCompletedCount:(id)arg2 totalCount:(id)arg3;
- (void)activityWithID:(id)arg1 setUserInfoObject:(id)arg2 forKey:(id)arg3;
- (id)activityWithObjectID:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 registry:(id)arg2 observer:(id)arg3;
- (void)removedActivityWithID:(id)arg1;
- (void)startedActivity:(id)arg1;

@end

