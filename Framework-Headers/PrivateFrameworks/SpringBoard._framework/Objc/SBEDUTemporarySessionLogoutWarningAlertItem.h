//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@interface SBEDUTemporarySessionLogoutWarningAlertItem : SBAlertItem
{
    CDUnknownBlockType _logoutActionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType logoutActionHandler; // @synthesize logoutActionHandler=_logoutActionHandler;

- (void).cxx_destruct;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (BOOL)forcesModalAlertAppearance;
- (BOOL)shouldShowInLockScreen;

@end
