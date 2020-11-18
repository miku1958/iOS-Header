//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CKServerChangeToken, NSArray, NSDate, SCKZoneDiff;

@protocol SCKZoneStore

@property (copy, nonatomic) NSDate *lastDirtyDate;
@property (copy, nonatomic) NSDate *lastSyncDate;
@property (copy, nonatomic) NSArray *pendingCommands;
@property (copy, nonatomic) CKServerChangeToken *serverChangeToken;
@property (copy, nonatomic) NSArray *serverRecords;

- (void)addPendingCommands:(NSArray *)arg1;
- (void)applyServerRecordsDiff:(SCKZoneDiff *)arg1;
- (void)clearPendingCommandsUpToCount:(unsigned long long)arg1;
@end
