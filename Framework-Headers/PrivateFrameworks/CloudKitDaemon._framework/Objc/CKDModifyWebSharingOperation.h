//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface CKDModifyWebSharingOperation : CKDDatabaseOperation
{
    int _numSaveAttempts;
    CDUnknownBlockType _recordWebSharedBlock;
    CDUnknownBlockType _recordWebUnsharedBlock;
    NSArray *_recordIDsToShare;
    NSArray *_recordIDsToUnshare;
    NSArray *_recordIDsToShareReadWrite;
    NSMutableSet *_fetchedRecordIDs;
    NSMutableDictionary *_recordsToSaveByID;
}

@property (strong, nonatomic) NSMutableSet *fetchedRecordIDs; // @synthesize fetchedRecordIDs=_fetchedRecordIDs;
@property (nonatomic) int numSaveAttempts; // @synthesize numSaveAttempts=_numSaveAttempts;
@property (strong, nonatomic) NSArray *recordIDsToShare; // @synthesize recordIDsToShare=_recordIDsToShare;
@property (strong, nonatomic) NSArray *recordIDsToShareReadWrite; // @synthesize recordIDsToShareReadWrite=_recordIDsToShareReadWrite;
@property (strong, nonatomic) NSArray *recordIDsToUnshare; // @synthesize recordIDsToUnshare=_recordIDsToUnshare;
@property (copy, nonatomic) CDUnknownBlockType recordWebSharedBlock; // @synthesize recordWebSharedBlock=_recordWebSharedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordWebUnsharedBlock; // @synthesize recordWebUnsharedBlock=_recordWebUnsharedBlock;
@property (strong, nonatomic) NSMutableDictionary *recordsToSaveByID; // @synthesize recordsToSaveByID=_recordsToSaveByID;

+ (long long)isPredominatelyDownload;
- (void).cxx_destruct;
- (struct _PCSIdentityData *)_copyShareProtectionFromRecord:(id)arg1 error:(id *)arg2;
- (void)_fetchRecords;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleRecordFetched:(id)arg1 recordID:(id)arg2 error:(id)arg3;
- (void)_handleRecordSaved:(id)arg1 error:(id)arg2;
- (void)_saveRecords;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (BOOL)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;

@end

