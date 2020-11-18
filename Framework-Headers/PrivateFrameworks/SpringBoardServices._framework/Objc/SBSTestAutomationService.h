//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardServices/SBSAbstractSystemService.h>

@interface SBSTestAutomationService : SBSAbstractSystemService
{
}

- (id)acquireHUDHiddenAssertionForIdentifier:(id)arg1;
- (void)addWidgetWithIdentifier:(id)arg1 toPage:(int)arg2 withSizing:(int)arg3;
- (void)addWidgetsToEachPage;
- (void)countScenesForBundleIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)loadStashedSwitcherModelFromPath:(id)arg1;
- (void)resetToHomeScreenAnimated:(BOOL)arg1;
- (void)setAlertsEnabled:(BOOL)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1 blockedForScreenTime:(BOOL)arg2;
- (void)setHiddenFeaturesEnabled:(BOOL)arg1;
- (void)setIdleTimerEnabled:(BOOL)arg1;
- (void)setMallocStackLoggingEnabled:(BOOL)arg1;
- (void)setOrientationLockEnabled:(BOOL)arg1;
- (void)setTestRunnerRecoveryApplicationBundleIdentifier:(id)arg1;
- (void)stashSwitcherModelToPath:(id)arg1;
- (void)suspendAllDisplays;

@end
