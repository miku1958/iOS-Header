//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Fitness/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class NSString;
@protocol FIFitnessAppsStateObserverDelegate;

@interface FIFitnessAppsStateObserver : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    id<FIFitnessAppsStateObserverDelegate> _delegate;
    long long _fitnessAppsState;
    struct os_unfair_lock_s _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cacheCurrentFitnessAppsRestrictedStateWithProxies:(id)arg1 initialLoad:(BOOL)arg2;
- (void)_cacheInitialFitnessAppsRestrictedState;
- (id)_fitnessAppBundleIdentifiers;
- (void)applicationStateDidChange:(id)arg1;
- (BOOL)areFitnessAppsRestricted;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
