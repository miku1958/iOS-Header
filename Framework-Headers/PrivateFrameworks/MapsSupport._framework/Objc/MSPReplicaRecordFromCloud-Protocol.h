//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPReplicaRecord-Protocol.h>

@class CKRecord, CKRecordID, MSPReplicaEditInsertRecord, MSPReplicaEditUpdateContents, NSUUID;
@protocol MSPReplicaRecordFromCloud;

@protocol MSPReplicaRecordFromCloud <MSPReplicaRecord>

@property (strong, nonatomic) CKRecord *record;
@property (readonly, nonatomic, getter=recordIdentifier) NSUUID *recordIdentifier;
@property (readonly, nonatomic, getter=isTombstoneRepresentedByCloudRecord) BOOL tombstoneRepresentedByCloudRecord;

+ (id<MSPReplicaRecordFromCloud>)recordFromInsertEdit:(MSPReplicaEditInsertRecord *)arg1;
+ (id<MSPReplicaRecordFromCloud>)tombstoneWithRecordIdentifier:(NSUUID *)arg1;
- (void)applyUpdateEdit:(MSPReplicaEditUpdateContents *)arg1;
- (CKRecord *)recordRepresentation;
- (CKRecordID *)tombstoneRecordRepresentation;
@end

