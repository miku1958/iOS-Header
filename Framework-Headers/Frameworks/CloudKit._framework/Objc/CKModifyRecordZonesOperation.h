//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

#import <CloudKit/CKModifyRecordZonesOperationCallbacks-Protocol.h>

@class CKModifyRecordZonesOperationInfo, NSArray, NSMutableArray, NSMutableDictionary;
@protocol CKModifyRecordZonesOperationCallbacks;

@interface CKModifyRecordZonesOperation : CKDatabaseOperation <CKModifyRecordZonesOperationCallbacks>
{
    BOOL _markZonesAsUserPurged;
    CDUnknownBlockType _modifyRecordZonesCompletionBlock;
    NSArray *_recordZonesToSave;
    NSArray *_recordZoneIDsToDelete;
    NSMutableArray *_savedRecordZones;
    NSMutableArray *_deletedRecordZoneIDs;
    NSMutableDictionary *_recordZonesByZoneIDs;
    NSMutableDictionary *_recordZoneErrors;
}

@property (readonly, nonatomic) id<CKModifyRecordZonesOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property (strong, nonatomic) NSMutableArray *deletedRecordZoneIDs; // @synthesize deletedRecordZoneIDs=_deletedRecordZoneIDs;
@property (nonatomic) BOOL markZonesAsUserPurged; // @synthesize markZonesAsUserPurged=_markZonesAsUserPurged;
@property (copy, nonatomic) CDUnknownBlockType modifyRecordZonesCompletionBlock; // @synthesize modifyRecordZonesCompletionBlock=_modifyRecordZonesCompletionBlock;
@property (readonly, nonatomic) CKModifyRecordZonesOperationInfo *operationInfo; // @dynamic operationInfo;
@property (strong, nonatomic) NSMutableDictionary *recordZoneErrors; // @synthesize recordZoneErrors=_recordZoneErrors;
@property (copy, nonatomic) NSArray *recordZoneIDsToDelete; // @synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete;
@property (strong, nonatomic) NSMutableDictionary *recordZonesByZoneIDs; // @synthesize recordZonesByZoneIDs=_recordZonesByZoneIDs;
@property (copy, nonatomic) NSArray *recordZonesToSave; // @synthesize recordZonesToSave=_recordZonesToSave;
@property (strong, nonatomic) NSMutableArray *savedRecordZones; // @synthesize savedRecordZones=_savedRecordZones;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleDeleteForRecordZoneID:(id)arg1 error:(id)arg2;
- (void)handleSaveForRecordZoneID:(id)arg1 recordZone:(id)arg2 error:(id)arg3;
- (BOOL)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithRecordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2;
- (void)performCKOperation;
- (id)relevantZoneIDs;

@end

