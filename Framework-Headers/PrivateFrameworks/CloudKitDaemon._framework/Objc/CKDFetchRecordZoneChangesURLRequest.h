//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

#import <CloudKitDaemon/CKDURLRequestPipelining-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface CKDFetchRecordZoneChangesURLRequest : CKDURLRequest <CKDURLRequestPipelining>
{
    BOOL _shouldFetchAssetContent;
    NSArray *_recordZoneIDs;
    NSDictionary *_configurationsByRecordZoneID;
    long long _changeTypes;
    NSSet *_desiredAssetKeys;
    CDUnknownBlockType _recordsChangedBlock;
    CDUnknownBlockType _recordDeletedBlock;
    NSMutableDictionary *_zoneIDsByRequestOperationUUID;
    NSMutableDictionary *_requestResultsByRecordZoneID;
    NSMutableDictionary *_nodeErrorsByZoneID;
    NSMutableArray *_recordResponses;
}

@property (nonatomic) long long changeTypes; // @synthesize changeTypes=_changeTypes;
@property (strong, nonatomic) NSDictionary *configurationsByRecordZoneID; // @synthesize configurationsByRecordZoneID=_configurationsByRecordZoneID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSSet *desiredAssetKeys; // @synthesize desiredAssetKeys=_desiredAssetKeys;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *nodeErrorsByZoneID; // @synthesize nodeErrorsByZoneID=_nodeErrorsByZoneID;
@property (copy, nonatomic) CDUnknownBlockType recordDeletedBlock; // @synthesize recordDeletedBlock=_recordDeletedBlock;
@property (strong, nonatomic) NSMutableArray *recordResponses; // @synthesize recordResponses=_recordResponses;
@property (copy, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
@property (copy, nonatomic) CDUnknownBlockType recordsChangedBlock; // @synthesize recordsChangedBlock=_recordsChangedBlock;
@property (strong, nonatomic) NSMutableDictionary *requestResultsByRecordZoneID; // @synthesize requestResultsByRecordZoneID=_requestResultsByRecordZoneID;
@property (readonly, nonatomic) NSDictionary *resultsByRecordZoneID;
@property (nonatomic) BOOL shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *zoneErrorsByZoneID;
@property (strong, nonatomic) NSMutableDictionary *zoneIDsByRequestOperationUUID; // @synthesize zoneIDsByRequestOperationUUID=_zoneIDsByRequestOperationUUID;

- (void).cxx_destruct;
- (id)_handleRecordChanges:(id)arg1;
- (id)generateRequestOperations;
- (id)initWithRecordZoneIDs:(id)arg1 configurationsByRecordZoneID:(id)arg2;
- (int)operationType;
- (void)requestDidComplete;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (BOOL)requestGETPreAuth;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;

@end

