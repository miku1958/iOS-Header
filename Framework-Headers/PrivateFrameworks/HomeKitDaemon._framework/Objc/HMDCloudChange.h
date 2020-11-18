//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreChangeObject-Protocol.h>

@class CKRecord, CKRecordID, HMDBackingStoreModelObject, HMDCloudRecord, NSArray, NSMutableSet, NSSet, NSString, NSUUID;

@interface HMDCloudChange : HMFObject <HMDBackingStoreChangeObject>
{
    HMDBackingStoreModelObject *_objectChange;
    HMDCloudRecord *_cloudRecord;
    HMDCloudRecord *_deletedCloudRecord;
    unsigned long long _changeType;
    unsigned long long _applyType;
    NSMutableSet *_rowIDsSet;
}

@property (readonly, nonatomic, getter=isAdded) BOOL addChange;
@property (nonatomic) unsigned long long applyType; // @synthesize applyType=_applyType;
@property (readonly, nonatomic) HMDBackingStoreModelObject *change;
@property (nonatomic) unsigned long long changeType; // @synthesize changeType=_changeType;
@property (readonly, nonatomic) HMDCloudRecord *cloudRecord; // @synthesize cloudRecord=_cloudRecord;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleteChange;
@property (readonly, nonatomic) HMDCloudRecord *deletedCloudRecord; // @synthesize deletedCloudRecord=_deletedCloudRecord;
@property (readonly, nonatomic) NSSet *dependentUUIDs;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDropAfterApply) BOOL dropAfterApply;
@property (readonly, nonatomic, getter=isDropStagedAfterApply) BOOL dropStagedAfterApply;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isInvalid) BOOL invalidChange;
@property (strong, nonatomic) HMDBackingStoreModelObject *objectChange; // @synthesize objectChange=_objectChange;
@property (readonly, nonatomic) NSUUID *objectID;
@property (readonly, nonatomic, getter=isPushAfterApply) BOOL pushAfterApply;
@property (readonly, nonatomic) CKRecord *record;
@property (readonly, nonatomic) CKRecordID *recordID;
@property (readonly, nonatomic) NSArray *rowIDs;
@property (readonly, nonatomic) NSMutableSet *rowIDsSet; // @synthesize rowIDsSet=_rowIDsSet;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isUpdated) BOOL updateChange;

+ (id)shortDescription;
- (void).cxx_destruct;
- (id)_initWithObjectChange:(id)arg1 cloudObjectRecord:(id)arg2;
- (void)forceChangeToDelete;
- (void)forceChangeToInvalid;
- (id)init;
- (id)initWithCloudObjectRecord:(id)arg1;
- (id)initWithObjectChange:(id)arg1;
- (void)replayChange:(id)arg1 stagedChange:(id)arg2;
- (id)shortDescription;
- (void)updateChangeWithRecord:(id)arg1;
- (void)updateCloudRecord:(id)arg1;
- (void)updateDeletedCloudRecord:(id)arg1;
- (void)updateWithObjectChange:(id)arg1;

@end

