//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol AVTSyncSchedulingAuthority
- (void)didReceivePushNotification;
- (void)didResetSync;
- (void)exportDidCompleteSuccessfully;
- (BOOL)exportRequired;
- (void)importDidCompleteSuccessfully;
- (BOOL)importRequired;
- (void)madeLocalChanges;
@end

