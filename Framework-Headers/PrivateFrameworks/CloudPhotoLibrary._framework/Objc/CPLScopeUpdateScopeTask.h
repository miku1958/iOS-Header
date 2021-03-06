//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineScopedTask.h>

@class NSData, NSObject;
@protocol CPLEngineTransportFetchTransportScopeTask, CPLEngineTransportGetScopeInfoTask, OS_dispatch_queue;

@interface CPLScopeUpdateScopeTask : CPLEngineScopedTask
{
    NSObject<OS_dispatch_queue> *_queue;
    id<CPLEngineTransportGetScopeInfoTask> _getLibraryInfo;
    id<CPLEngineTransportFetchTransportScopeTask> _fetchTransportScope;
    NSData *_fetchedTransportScope;
    BOOL _retryingFetchingTransportScope;
}

- (void).cxx_destruct;
- (void)_fetchTransportScope;
- (void)_getLibraryInfo;
- (void)_markScopeAsDeletedAndSucceedTaskWithFlags:(id)arg1;
- (void)_markScopeAsFeatureDisabledWithFlags:(id)arg1;
- (void)_markScopeHasBadTransportScopeWithError:(id)arg1;
- (void)cancel;
- (BOOL)checkScopeIsValidInTransaction:(id)arg1;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2 clientCacheIdentifier:(id)arg3 scope:(id)arg4 transportScope:(id)arg5;
- (void)launch;
- (id)taskIdentifier;

@end

