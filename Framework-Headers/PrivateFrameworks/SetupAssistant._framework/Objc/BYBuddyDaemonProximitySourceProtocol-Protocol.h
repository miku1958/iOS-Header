//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistant/NSObject-Protocol.h>

@class NSArray, NSError;

@protocol BYBuddyDaemonProximitySourceProtocol <NSObject>
- (void)backupCompletedWithError:(NSError *)arg1;
- (void)backupProgress:(double)arg1 estimatedTimeRemaining:(long long)arg2;
- (void)finishedWithError:(NSError *)arg1;
- (void)syncCompletedWithErrors:(NSArray *)arg1;
- (void)syncProgress:(double)arg1;
@end

