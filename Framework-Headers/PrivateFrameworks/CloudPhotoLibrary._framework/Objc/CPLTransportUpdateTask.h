//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineMultiscopeSyncTask.h>

@interface CPLTransportUpdateTask : CPLEngineMultiscopeSyncTask
{
}

- (id)enumerateScopesForTaskInTransaction:(id)arg1;
- (id)newScopedTaskWithScope:(id)arg1 transportScope:(id)arg2 clientCacheIdentifier:(id)arg3;
- (BOOL)shouldSkipScopesWithMissingTransportScope;
- (id)taskIdentifier;

@end

