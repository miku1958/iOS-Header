//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FMFMapCache : NSObject
{
    BOOL _fileProtectionDeactivated;
    NSMutableDictionary *_cacheMetaData;
    NSMutableDictionary *_gridImageMetaData;
    NSMutableDictionary *_noLocationImageMetaData;
    NSMutableDictionary *_mapImageMetaData;
    NSMutableDictionary *_pendingMapImageMetaData;
    NSString *_cachePath;
    NSString *_imageCachePath;
    NSDate *_lastPruneDate;
    NSObject<OS_dispatch_queue> *_cacheMetaQueue;
    NSObject<OS_dispatch_queue> *_gridImageQueue;
    NSObject<OS_dispatch_queue> *_noLocationImageQueue;
    NSObject<OS_dispatch_queue> *_mapImageQueue;
    NSObject<OS_dispatch_queue> *_pendingImageQueue;
    double _mapLocationDistanceThreshold;
}

@property (strong, nonatomic) NSMutableDictionary *cacheMetaData; // @synthesize cacheMetaData=_cacheMetaData;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *cacheMetaQueue; // @synthesize cacheMetaQueue=_cacheMetaQueue;
@property (strong, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property (nonatomic) BOOL fileProtectionDeactivated; // @synthesize fileProtectionDeactivated=_fileProtectionDeactivated;
@property (strong, nonatomic) NSMutableDictionary *gridImageMetaData; // @synthesize gridImageMetaData=_gridImageMetaData;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *gridImageQueue; // @synthesize gridImageQueue=_gridImageQueue;
@property (strong, nonatomic) NSString *imageCachePath; // @synthesize imageCachePath=_imageCachePath;
@property (strong, nonatomic) NSDate *lastPruneDate; // @synthesize lastPruneDate=_lastPruneDate;
@property (strong, nonatomic) NSMutableDictionary *mapImageMetaData; // @synthesize mapImageMetaData=_mapImageMetaData;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *mapImageQueue; // @synthesize mapImageQueue=_mapImageQueue;
@property (nonatomic) double mapLocationDistanceThreshold; // @synthesize mapLocationDistanceThreshold=_mapLocationDistanceThreshold;
@property (strong, nonatomic) NSMutableDictionary *noLocationImageMetaData; // @synthesize noLocationImageMetaData=_noLocationImageMetaData;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *noLocationImageQueue; // @synthesize noLocationImageQueue=_noLocationImageQueue;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *pendingImageQueue; // @synthesize pendingImageQueue=_pendingImageQueue;
@property (strong, nonatomic) NSMutableDictionary *pendingMapImageMetaData; // @synthesize pendingMapImageMetaData=_pendingMapImageMetaData;

- (void).cxx_destruct;
- (double)cacheExpiryInSeconds;
- (void)cacheGridImage:(id)arg1 forWidth:(double)arg2 andHeight:(double)arg3;
- (void)cacheMapImage:(id)arg1 forLocation:(id)arg2 altitude:(double)arg3 pitch:(double)arg4 width:(double)arg5 andHeight:(double)arg6;
- (void)cacheMapImage:(id)arg1 forRequest:(id)arg2;
- (void)cacheNoLocationImage:(id)arg1 forWidth:(double)arg2 andHeight:(double)arg3;
- (id)cachedGridImageForWidth:(double)arg1 andHeight:(double)arg2;
- (id)cachedMapImageForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 andHeight:(double)arg5;
- (id)cachedMapImageForRequest:(id)arg1;
- (id)cachedNoLocationImageForWidth:(double)arg1 andHeight:(double)arg2;
- (void)flushCache;
- (id)gridKeyForWidth:(double)arg1 andHeight:(double)arg2;
- (id)init;
- (id)mapImageKeyForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 andHeight:(double)arg5;
- (id)noLocationKeyForWidth:(double)arg1 andHeight:(double)arg2;
- (BOOL)pendingMapImageForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 andHeight:(double)arg5;
- (BOOL)pendingMapImageForRequest:(id)arg1;
- (void)pruneCacheIfNeeded;
- (double)pruneIntervalInSeconds;
- (void)readMetaData;
- (void)saveMetaData;

@end

