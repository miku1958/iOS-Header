//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistant/NSObject-Protocol.h>

@class NSError, NSString, SASProximityBackupAction;

@protocol SASProximitySessionDelegate <NSObject>

@optional
- (void)finishedWithError:(NSError *)arg1;
- (void)prepareForMigrationToDevice:(NSString *)arg1;
- (void)ready;
- (void)receivedBackupAction:(SASProximityBackupAction *)arg1;
- (void)startMigration;
@end

