//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class PKPassLibrary, UIWindow;
@protocol OS_dispatch_semaphore;

@interface PKPassSnapshotter : NSObject
{
    PKPassLibrary *_passLibrary;
    NSObject<OS_dispatch_semaphore> *_snapshotSem;
    UIWindow *_snapshotWindow;
    double _scale;
}

@property (nonatomic) BOOL runsInBackgroundProcess;

+ (void)purgeCacheOfPassSnapshotsWithUinqueID:(id)arg1;
- (void)_cacheItem:(id)arg1 withKey:(id)arg2;
- (BOOL)_cachedImageWithKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performSnapshot:(id)arg1 size:(struct CGSize)arg2 cacheKey:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_prepareSnapshotViewWithPass:(id)arg1 size:(struct CGSize)arg2 suppressedContent:(unsigned long long)arg3 cacheKey:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_snapshotWithPass:(id)arg1 size:(struct CGSize)arg2 suppressedContent:(unsigned long long)arg3 withCache:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)init;
- (id)passLibrary;
- (void)snapshotWithPass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)snapshotWithPass:(id)arg1 size:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (void)snapshotWithPass:(id)arg1 size:(struct CGSize)arg2 suppressedContent:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)snapshotWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)snapshotWithUniqueID:(id)arg1 manifestHash:(id)arg2 size:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;
- (void)snapshotWithUniqueID:(id)arg1 size:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;

@end

