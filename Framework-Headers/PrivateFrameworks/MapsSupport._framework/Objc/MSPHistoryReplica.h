//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPReplica.h>

#import <MapsSupport/MSPCloudReplica-Protocol.h>
#import <MapsSupport/MSPContainerStateSnapshot-Protocol.h>
#import <MapsSupport/MSPPropertyListReplicaDataSerialization-Protocol.h>
#import <MapsSupport/MSPPropertyListReplicaSerialization-Protocol.h>
#import <MapsSupport/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSString;

@interface MSPHistoryReplica : MSPReplica <MSPContainerStateSnapshot, NSSecureCoding, MSPPropertyListReplicaDataSerialization, MSPPropertyListReplicaSerialization, MSPCloudReplica>
{
}

@property (readonly, copy, nonatomic) NSArray *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *propertyListDataRepresentation;
@property (readonly, nonatomic) id propertyListRepresentation;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

+ (id)allowedEditClasses;
+ (BOOL)supportsSecureCoding;
+ (void)switchForEdit:(id)arg1 caseIsInsertRecord:(CDUnknownBlockType)arg2 caseIsEditContents:(CDUnknownBlockType)arg3 caseIsEditModificationDate:(CDUnknownBlockType)arg4 caseIsDeleteTombstone:(CDUnknownBlockType)arg5;
- (void)_mergeSelfRecord:(id)arg1 withRecordFromOtherReplica:(id)arg2 identifier:(id)arg3 options:(id)arg4 edits:(id)arg5;
- (id)_sortedHistoryEntriesByApplyingEdits:(id)arg1 invalidEntryIdentifiers:(out id *)arg2;
- (id)changesMergingCloudChanges:(id)arg1 withReplica:(id)arg2 lastSyncDate:(id)arg3;
- (id)editsToMergeWithReplica:(id)arg1;
- (id)editsToMergeWithReplica:(id)arg1 knownSyncDateForLeastRecentlySyncedClientIfAny:(id)arg2;
- (id)editsToMergeWithReplica:(id)arg1 mergeOptions:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyListRepresentation:(id)arg1 recordCreationHandler:(CDUnknownBlockType)arg2;
- (id)mergeOptionsWithLastSyncDate:(id)arg1;
- (id)propertyListRepresentationDecoratingRecordsWithBlock:(CDUnknownBlockType)arg1;
- (id)replicaByMergingWithReplica:(id)arg1 mergeOptions:(id)arg2 userVisibleEffectiveContentsChanged:(out BOOL *)arg3;
- (Class)replicaRecordClass;

@end

