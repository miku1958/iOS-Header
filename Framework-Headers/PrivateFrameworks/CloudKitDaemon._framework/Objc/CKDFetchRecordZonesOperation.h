//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDFetchRecordZonesOperation : CKDDatabaseOperation
{
    BOOL _isFetchAllRecordZonesOperation;
    BOOL _shouldRetry;
    BOOL _onlyFetchPCSInfo;
    BOOL _ignorePCSFailures;
    CDUnknownBlockType _recordZoneFetchedProgressBlock;
    NSArray *_recordZoneIDs;
    NSMutableDictionary *_zonesToSaveForPCSUpdateByZoneID;
    NSMutableArray *_zoneIDsNeedingPCSUpdateRetry;
    NSMutableDictionary *_pcsUpdateErrorsByZoneID;
    long long _numZoneSaveAttempts;
}

@property (nonatomic) BOOL ignorePCSFailures; // @synthesize ignorePCSFailures=_ignorePCSFailures;
@property (nonatomic) BOOL isFetchAllRecordZonesOperation; // @synthesize isFetchAllRecordZonesOperation=_isFetchAllRecordZonesOperation;
@property (nonatomic) long long numZoneSaveAttempts; // @synthesize numZoneSaveAttempts=_numZoneSaveAttempts;
@property (nonatomic) BOOL onlyFetchPCSInfo; // @synthesize onlyFetchPCSInfo=_onlyFetchPCSInfo;
@property (strong, nonatomic) NSMutableDictionary *pcsUpdateErrorsByZoneID; // @synthesize pcsUpdateErrorsByZoneID=_pcsUpdateErrorsByZoneID;
@property (copy, nonatomic) CDUnknownBlockType recordZoneFetchedProgressBlock; // @synthesize recordZoneFetchedProgressBlock=_recordZoneFetchedProgressBlock;
@property (strong, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
@property (nonatomic) BOOL shouldRetry; // @synthesize shouldRetry=_shouldRetry;
@property (strong, nonatomic) NSMutableArray *zoneIDsNeedingPCSUpdateRetry; // @synthesize zoneIDsNeedingPCSUpdateRetry=_zoneIDsNeedingPCSUpdateRetry;
@property (strong, nonatomic) NSMutableDictionary *zonesToSaveForPCSUpdateByZoneID; // @synthesize zonesToSaveForPCSUpdateByZoneID=_zonesToSaveForPCSUpdateByZoneID;

- (void).cxx_destruct;
- (void)_cachePCSOnRecordZone:(id)arg1;
- (BOOL)_checkAndUpdateZonePCSIfNeededForZone:(id)arg1 error:(id *)arg2;
- (void)_continueHandlingFetchedRecordZone:(id)arg1 zoneID:(id)arg2;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleRecordZoneFetch:(id)arg1 zoneID:(id)arg2 responseCode:(id)arg3;
- (void)_handleRecordZoneSaved:(id)arg1 error:(id)arg2;
- (void)_sendErrorForFailedZones;
- (id)activityCreate;
- (void)checkPCSIdentity;
- (void)fetchZonesFromServer;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (BOOL)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;
- (void)saveZonesWithUpdatedZonePCS;

@end

