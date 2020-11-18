//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSError, NSMutableDictionary;

@interface CKFetchRecordZonesOperation : CKDatabaseOperation
{
    BOOL _isFetchAllRecordZonesOperation;
    BOOL _ignorePCSFailures;
    NSArray *_recordZoneIDs;
    CDUnknownBlockType _fetchRecordZonesCompletionBlock;
    NSArray *_recordZones;
    NSMutableDictionary *_recordZonesByZoneID;
    NSMutableDictionary *_recordZoneErrors;
    NSError *_fetchAllRecordZonesError;
}

@property (strong, nonatomic) NSError *fetchAllRecordZonesError; // @synthesize fetchAllRecordZonesError=_fetchAllRecordZonesError;
@property (copy, nonatomic) CDUnknownBlockType fetchRecordZonesCompletionBlock; // @synthesize fetchRecordZonesCompletionBlock=_fetchRecordZonesCompletionBlock;
@property (nonatomic) BOOL ignorePCSFailures; // @synthesize ignorePCSFailures=_ignorePCSFailures;
@property (nonatomic) BOOL isFetchAllRecordZonesOperation; // @synthesize isFetchAllRecordZonesOperation=_isFetchAllRecordZonesOperation;
@property (strong, nonatomic) NSMutableDictionary *recordZoneErrors; // @synthesize recordZoneErrors=_recordZoneErrors;
@property (copy, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
@property (strong, nonatomic) NSArray *recordZones; // @synthesize recordZones=_recordZones;
@property (strong, nonatomic) NSMutableDictionary *recordZonesByZoneID; // @synthesize recordZonesByZoneID=_recordZonesByZoneID;

+ (id)fetchAllRecordZonesOperation;
- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (unsigned long long)activityStart;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (BOOL)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithRecordZoneIDs:(id)arg1;
- (void)performCKOperation;

@end

