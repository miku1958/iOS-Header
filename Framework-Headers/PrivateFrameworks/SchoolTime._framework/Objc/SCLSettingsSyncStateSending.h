//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SchoolTime/SCLSettingsSyncState.h>

@interface SCLSettingsSyncStateSending : SCLSettingsSyncState
{
}

- (void)message:(id)arg1 failedWithError:(id)arg2;
- (void)messageDidSend:(id)arg1;
- (void)settingsDidChange;
- (unsigned long long)status;

@end
