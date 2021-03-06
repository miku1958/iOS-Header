//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKSyncEngineDataSource-Protocol.h>

@class CKRecordZoneID, CKSyncEngine;

@protocol CKSyncEngineDataSourcePrivate <CKSyncEngineDataSource>

@optional
- (BOOL)syncEngine:(CKSyncEngine *)arg1 shouldFetchChangesForZoneID:(CKRecordZoneID *)arg2;
- (void)syncEngineDidBeginFetchingChanges:(CKSyncEngine *)arg1;
- (void)syncEngineDidEndFetchingChanges:(CKSyncEngine *)arg1;
@end

