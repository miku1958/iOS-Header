//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@interface SBLaunchSnapshotWaitingAlertItem : SBAlertItem
{
}

- (BOOL)allowLockScreenDismissal;
- (BOOL)allowMenuButtonDismissal;
- (BOOL)behavesSuperModally;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (BOOL)forcesModalAlertAppearance;
- (BOOL)reappearsAfterLock;
- (BOOL)reappearsAfterUnlock;
- (BOOL)shouldShowInLockScreen;

@end

