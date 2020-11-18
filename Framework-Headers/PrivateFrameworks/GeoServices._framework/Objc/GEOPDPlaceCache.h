//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOPDPlaceCacheManifestInfoProviding-Protocol.h>
#import <GeoServices/GEOPDPlaceCacheSchedulingDelegate-Protocol.h>

@class GEOSQLiteDB, NSArray, NSMutableDictionary, NSMutableOrderedSet;
@protocol GEOPDPlaceCacheManifestInfoProviding, GEOPDPlaceCacheSchedulingDelegate, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceCache : NSObject <GEOPDPlaceCacheSchedulingDelegate, GEOPDPlaceCacheManifestInfoProviding>
{
    GEOSQLiteDB *_db;
    id<GEOPDPlaceCacheSchedulingDelegate> _schedulingDelegate;
    id<GEOPDPlaceCacheManifestInfoProviding> _manifestInfoProvider;
    NSObject<OS_dispatch_source> *_cleanupTimer;
    NSMutableDictionary *_accessTimesDict;
    NSMutableOrderedSet *_recentlySeenPlaceHashes;
}

@property (readonly, nonatomic) NSArray *serviceVersions;

- (void).cxx_destruct;
- (id)_cacheKeyForHandle:(id)arg1;
- (id)_cacheKeysForPlace:(id)arg1;
- (unsigned long long)_calculateFreeableSpace;
- (BOOL)_deleteAndResetDB:(id)arg1;
- (void)_evictPlace:(id)arg1;
- (void)_iterateAllKeysFilteringCacheKeyWithPredicate:(id)arg1 entryBlock:(CDUnknownBlockType)arg2 finishedBlock:(CDUnknownBlockType)arg3;
- (void)_iterateAllPlacesFilteringCacheKeyWithPredicate:(id)arg1 entryBlock:(CDUnknownBlockType)arg2 finishedBlock:(CDUnknownBlockType)arg3;
- (void)_localeChanged:(id)arg1;
- (id)_lookupPlaceByRequestKey:(id)arg1 allowExpiredPlace:(BOOL)arg2 placeIsExpired:(BOOL *)arg3;
- (BOOL)_meetsManifestVersionPolicyForPlace:(id)arg1;
- (unsigned long long)_shrinkBySize:(unsigned long long)arg1;
- (void)_storePlace:(id)arg1 forRequestKeys:(id)arg2;
- (BOOL)_validateDBLocaleAndResetIfNecessary;
- (unsigned long long)calculateFreeableSpaceSync;
- (void)calculateFreeableSpaceWithHandler:(CDUnknownBlockType)arg1;
- (void)cancelCleanupBlockSchedule;
- (void)close;
- (long long)currentTime;
- (void)dealloc;
- (void)deletePhoneNumberMapping;
- (void)enqueueAccessTimeUpdateForCacheKey:(id)arg1 accessTime:(long long)arg2;
- (void)evictAllEntries;
- (id)initWithCacheFilePath:(id)arg1 schedulingDelegate:(id)arg2 manifestInfoProvider:(id)arg3;
- (id)internalSerialQueue;
- (void)iterateAllBasemapIdKeysWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;
- (void)iterateAllHandleKeysWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;
- (void)iterateAllKeysWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;
- (void)iterateAllMUIDKeysWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;
- (void)iterateAllPhoneKeysWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;
- (void)iterateAllPlacesWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;
- (void)iterateBasemapIdPlacesWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;
- (void)iterateHandlePlacesWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;
- (void)iterateMUIDPlacesWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;
- (void)iteratePhonePlacesWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;
- (id)lookupIdentifierByPhoneNumber:(id)arg1;
- (id)lookupPlaceByHandle:(id)arg1 allowExpiredPlace:(BOOL)arg2 placeIsExpired:(BOOL *)arg3;
- (id)lookupPlaceByIdentifier:(id)arg1 allowExpiredPlace:(BOOL)arg2 placeIsExpired:(BOOL *)arg3;
- (id)lookupPlaceByPhoneNumber:(id)arg1 allowExpiredPlace:(BOOL)arg2 placeIsExpired:(BOOL *)arg3;
- (id)lookupPlaceByRequest:(id)arg1 allowExpiredPlace:(BOOL)arg2 placeIsExpired:(BOOL *)arg3;
- (void)periodicCleanupAndAccessTimeUpdate;
- (void)runCleanupBlock:(CDUnknownBlockType)arg1 inSecondsFromNow:(long long)arg2;
- (void)scheduleCleanup;
- (void)shrinkBySize:(unsigned long long)arg1 finished:(CDUnknownBlockType)arg2;
- (unsigned long long)shrinkBySizeSync:(unsigned long long)arg1;
- (void)storePlace:(id)arg1 forRequest:(id)arg2;
- (void)storePlace:(id)arg1 forRequest:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)trackPlace:(id)arg1;
- (void)trackPlace:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
