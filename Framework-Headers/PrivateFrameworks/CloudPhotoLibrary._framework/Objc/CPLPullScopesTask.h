//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@class CPLEngineScopeStorage, CPLEngineStore, NSError, NSString;
@protocol CPLEngineTransportFetchScopeListChangesTask;

@interface CPLPullScopesTask : CPLEngineSyncTask
{
    BOOL _ignoreNewChanges;
    CPLEngineStore *_store;
    CPLEngineScopeStorage *_scopes;
    NSString *_clientCacheIdentifier;
    id<CPLEngineTransportFetchScopeListChangesTask> _fetchChangesTask;
    NSError *_badError;
    unsigned long long _deletedScopeCount;
    unsigned long long _newScopeCount;
    unsigned long long _modifiedScopeCount;
}

- (void).cxx_destruct;
- (BOOL)_checkShouldHandleBatchInTransaction:(id)arg1;
- (void)_handleChangedOrNewScopes:(id)arg1 deletedScopeIdentifiers:(id)arg2 newScopeListSyncAnchor:(struct NSData *)arg3;
- (void)_handleFinalScopeListSyncAnchor:(struct NSData *)arg1 error:(id)arg2;
- (void)cancel;
- (id)initWithEngineLibrary:(id)arg1;
- (void)launch;
- (id)taskIdentifier;

@end

