//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

#import <CloudKitDaemon/CKDURLRequestPipelining-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface CKDFetchRecordZoneChangesURLRequest : CKDURLRequest <CKDURLRequestPipelining>
{
    BOOL _shouldFetchAssetContent;
    NSArray *_recordZoneIDs;
    NSDictionary *_optionsByRecordZoneID;
    long long _changeTypes;
    NSSet *_desiredAssetKeys;
    CDUnknownBlockType _recordChangedBlock;
    CDUnknownBlockType _recordDeletedBlock;
    NSMutableDictionary *_zoneIDsByRequestOperationUUID;
    NSMutableDictionary *_requestResultsByRecordZoneID;
    NSMutableDictionary *_nodeErrorsByZoneID;
}

@property (nonatomic) long long changeTypes; // @synthesize changeTypes=_changeTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSSet *desiredAssetKeys; // @synthesize desiredAssetKeys=_desiredAssetKeys;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *nodeErrorsByZoneID; // @synthesize nodeErrorsByZoneID=_nodeErrorsByZoneID;
@property (strong, nonatomic) NSDictionary *optionsByRecordZoneID; // @synthesize optionsByRecordZoneID=_optionsByRecordZoneID;
@property (copy, nonatomic) CDUnknownBlockType recordChangedBlock; // @synthesize recordChangedBlock=_recordChangedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordDeletedBlock; // @synthesize recordDeletedBlock=_recordDeletedBlock;
@property (copy, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
@property (strong, nonatomic) NSMutableDictionary *requestResultsByRecordZoneID; // @synthesize requestResultsByRecordZoneID=_requestResultsByRecordZoneID;
@property (readonly, nonatomic) NSDictionary *resultsByRecordZoneID;
@property (nonatomic) BOOL shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *zoneErrorsByZoneID;
@property (strong, nonatomic) NSMutableDictionary *zoneIDsByRequestOperationUUID; // @synthesize zoneIDsByRequestOperationUUID=_zoneIDsByRequestOperationUUID;

- (void).cxx_destruct;
- (id)_handleRecordChanges:(id)arg1;
- (id)generateRequestOperations;
- (id)initWithRecordZoneIDs:(id)arg1 optionsByRecordZoneID:(id)arg2;
- (int)operationType;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;

@end

