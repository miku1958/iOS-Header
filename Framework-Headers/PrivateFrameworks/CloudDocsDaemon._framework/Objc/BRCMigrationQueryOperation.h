//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCSyncDownOperation.h>

@class CKQueryCursor, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BRCMigrationQueryOperation : BRCSyncDownOperation
{
    NSString *_migrationKey;
    CKQueryCursor *_continuationCursor;
    NSMutableArray *_shareIDsToFetch;
}

+ (id)allMigrationKeysOrdered;
+ (id)documentSharesMigrationKey;
+ (id)folderShareAliasesMigrationKey;
+ (id)folderSharesMigrationKey;
- (void).cxx_destruct;
- (void)_performAfterQueryingForShareAliasesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performAfterQueryingForShareIDsOfFolders:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performQuery:(id)arg1 recordFetchedBlock:(CDUnknownBlockType)arg2 cursorUpdatedBlock:(CDUnknownBlockType)arg3 desiredKeys:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)_saveFetchedRecords:(id)arg1 cursor:(id)arg2 error:(id *)arg3;
- (BOOL)_updatedContinuationCursor:(id)arg1 fetchedRecords:(id)arg2 error:(id *)arg3;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithServerZone:(id)arg1 migrationKey:(id)arg2 continuationCursor:(id)arg3;
- (void)main;
- (BOOL)shouldRetryForError:(id)arg1;

@end
