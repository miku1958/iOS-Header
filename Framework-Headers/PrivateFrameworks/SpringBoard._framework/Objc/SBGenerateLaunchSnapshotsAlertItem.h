//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@interface SBGenerateLaunchSnapshotsAlertItem : SBAlertItem
{
    CDUnknownBlockType _handler;
}

@property (copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;

- (void).cxx_destruct;
- (BOOL)behavesSuperModally;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (BOOL)forcesModalAlertAppearance;
- (id)initWithHandler:(CDUnknownBlockType)arg1;
- (void)regenerateApplications:(id)arg1;
- (BOOL)shouldShowInLockScreen;

@end

