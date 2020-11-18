//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDMMCS, NSMutableIndexSet, NSRunLoop, NSString;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface CKDMMCSEngineContext : NSObject
{
    BOOL _stopMMCSThread;
    unsigned int _maxChunkCountForSection;
    long long _refCount;
    long long _state;
    CKDMMCS *_MMCS;
    struct _mmcs_engine *_MMCSEngine;
    NSString *_applicationBundleID;
    NSString *_path;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSRunLoop *_runLoop;
    NSString *_runLoopMode;
    NSMutableIndexSet *_inMemoryItemsIDs;
}

@property (weak, nonatomic) CKDMMCS *MMCS; // @synthesize MMCS=_MMCS;
@property (nonatomic) struct _mmcs_engine *MMCSEngine; // @synthesize MMCSEngine=_MMCSEngine;
@property (strong, nonatomic) NSString *applicationBundleID; // @synthesize applicationBundleID=_applicationBundleID;
@property (strong, nonatomic) NSMutableIndexSet *inMemoryItemsIDs; // @synthesize inMemoryItemsIDs=_inMemoryItemsIDs;
@property (nonatomic) unsigned int maxChunkCountForSection; // @synthesize maxChunkCountForSection=_maxChunkCountForSection;
@property (strong, nonatomic) NSString *path; // @synthesize path=_path;
@property (nonatomic) long long refCount; // @synthesize refCount=_refCount;
@property (strong, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
@property (strong, nonatomic) NSString *runLoopMode; // @synthesize runLoopMode=_runLoopMode;
@property (strong, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (nonatomic) BOOL stopMMCSThread; // @synthesize stopMMCSThread=_stopMMCSThread;

+ (id)_appID;
+ (BOOL)hasCachedCKDMMCSEngineContextForPath:(id)arg1;
+ (id)setupMMCSEngineWithApplicationBundleID:(id)arg1 path:(id)arg2 wasCached:(BOOL *)arg3 error:(id *)arg4;
+ (id)sharedContextsByPath;
+ (id)sharedContextsQueue;
+ (BOOL)tearDownMMCSEngineWithContext:(id)arg1;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)_MMCSThread;
- (void)_MMCSTreadAbort;
- (BOOL)_setupMMCSEngineWithError:(id *)arg1;
- (BOOL)_setupMMCSEngineWithRetryCount:(unsigned long long)arg1 error:(id *)arg2;
- (void)_tearDownMMCSEngine;
- (void)cancelRequestWithContext:(void *)arg1;
- (void)dealloc;
- (long long)decRefCount;
- (id)description;
- (long long)incRefCount;
- (id)initWithApplicationBundleID:(id)arg1 path:(id)arg2;
- (unsigned long long)nextAvailableItemID;
- (void)performOnRunLoop:(CDUnknownBlockType)arg1;
- (void)stopTrackingItemID:(unsigned long long)arg1;

@end

