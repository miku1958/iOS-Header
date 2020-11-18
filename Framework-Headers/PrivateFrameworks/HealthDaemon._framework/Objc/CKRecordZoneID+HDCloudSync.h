//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKRecordZoneID.h>

@interface CKRecordZoneID (HDCloudSync)
+ (id)hd_masterZoneIDForSyncCircleIdentifier:(id)arg1;
+ (id)hd_unifiedSyncZoneIDForSyncCircleIdentifier:(id)arg1;
+ (id)hd_zoneIDWithSyncCircleIdentifier:(id)arg1 storeIdentifier:(id)arg2;
- (BOOL)hd_isMasterZoneIDForSyncCircleIdentifier:(id *)arg1;
- (BOOL)hd_isUnifiedSyncZoneIDForSyncCircleIdentifier:(id *)arg1;
- (BOOL)hd_splitIntoSyncCircleIdentifier:(id *)arg1 storeIdentifier:(id *)arg2;
- (id)hd_storeIdentifier;
- (id)hd_syncCircleIdentifier;
@end
