//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBApplicationLaunchNotifyAlertItem.h>

@class SBApplication;

@interface SBApplicationSignatureVersionUnsupportedWarningAlertItem : SBApplicationLaunchNotifyAlertItem
{
    SBApplication *_application;
}

- (void).cxx_destruct;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (BOOL)dismissOnLock;
- (BOOL)forcesModalAlertAppearance;
- (id)initWithApplication:(id)arg1;
- (BOOL)shouldShowInLockScreen;

@end

