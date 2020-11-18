//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDModifyRecordZonesOperation : CKDDatabaseOperation
{
    BOOL _allowDefaultZoneSave;
    BOOL _markZonesAsUserPurged;
    int _numZoneSaveAttempts;
    CDUnknownBlockType _saveCompletionBlock;
    CDUnknownBlockType _deleteCompletionBlock;
    NSMutableArray *_recordZonesToSave;
    NSArray *_recordZoneIDsToDelete;
    NSMutableDictionary *_recordZonesByZoneID;
    long long _maxZoneSaveAttempts;
}

@property (nonatomic) BOOL allowDefaultZoneSave; // @synthesize allowDefaultZoneSave=_allowDefaultZoneSave;
@property (copy, nonatomic) CDUnknownBlockType deleteCompletionBlock; // @synthesize deleteCompletionBlock=_deleteCompletionBlock;
@property (nonatomic) BOOL markZonesAsUserPurged; // @synthesize markZonesAsUserPurged=_markZonesAsUserPurged;
@property (nonatomic) long long maxZoneSaveAttempts; // @synthesize maxZoneSaveAttempts=_maxZoneSaveAttempts;
@property (nonatomic) int numZoneSaveAttempts; // @synthesize numZoneSaveAttempts=_numZoneSaveAttempts;
@property (strong, nonatomic) NSArray *recordZoneIDsToDelete; // @synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete;
@property (strong, nonatomic) NSMutableDictionary *recordZonesByZoneID; // @synthesize recordZonesByZoneID=_recordZonesByZoneID;
@property (strong, nonatomic) NSMutableArray *recordZonesToSave; // @synthesize recordZonesToSave=_recordZonesToSave;
@property (copy, nonatomic) CDUnknownBlockType saveCompletionBlock; // @synthesize saveCompletionBlock=_saveCompletionBlock;

- (void).cxx_destruct;
- (void)_checkAndPrepareZones;
- (void)_fetchPCSDataForZone:(id)arg1 fromServer:(BOOL)arg2;
- (void)_fetchPCSDataForZonesFromServer:(BOOL)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleRecordZoneDeleted:(id)arg1 responseCode:(id)arg2;
- (void)_handleRecordZoneSaved:(id)arg1 responseCode:(id)arg2;
- (BOOL)_saveZonesToServer;
- (void)_sendErrorForFailedZones;
- (unsigned long long)activityStart;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (BOOL)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;

@end

