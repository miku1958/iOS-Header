//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBToAppsWorkspaceTransaction.h>

@class SBDisableActiveInterfaceOrientationChangeAssertion;
@protocol SBLockScreenEnvironment;

@interface SBActivateAppUnderLockScreenWorkspaceTransaction : SBToAppsWorkspaceTransaction
{
    id<SBLockScreenEnvironment> _lockScreenEnvironment;
    SBDisableActiveInterfaceOrientationChangeAssertion *_disableActiveOrientationChangeAssertion;
}

- (void).cxx_destruct;
- (void)_activateLockScreen;
- (void)_begin;
- (void)_didComplete;
- (void)_lockScreenDidActivate;
- (void)_setupAndActivate;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1 lockScreenEnvironment:(id)arg2;
- (BOOL)shouldPerformToAppStateCleanupOnCompletion;
- (BOOL)shouldPlaceOutgoingScenesUnderLockOnCompletion;

@end
