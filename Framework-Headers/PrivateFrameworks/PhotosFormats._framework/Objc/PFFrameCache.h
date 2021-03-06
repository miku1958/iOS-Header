//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableIndexSet;
@protocol OS_dispatch_queue;

@interface PFFrameCache : NSObject
{
    struct CGImageSource *_gifSource;
    unsigned long long _frameCount;
    unsigned long long _fullCachingCost;
    NSObject<OS_dispatch_queue> *_frameGenerationQueue;
    NSObject<OS_dispatch_queue> *_cacheIsolationQueue;
    unsigned long long _frameCacheSize;
    NSMutableDictionary *_frameCache;
    unsigned long long _lastRequestedIdx;
    NSMutableIndexSet *_cachedIndexes;
    struct {
        BOOL cacheSize;
        BOOL frameCache;
    } _isValid;
    long long _cacheStrategy;
}

@property (nonatomic) long long cacheStrategy; // @synthesize cacheStrategy=_cacheStrategy;

+ (id)sharedFrameGenerationQueue;
- (void).cxx_destruct;
- (struct CGImage *)_createPredrawnImage:(struct CGImage *)arg1;
- (struct CGImage *)_frameAtIndex:(unsigned long long)arg1 allowLazy:(BOOL)arg2;
- (void)_frameGenerationQueue_cacheFrameAtIndex:(unsigned long long)arg1;
- (void)_frameGenerationQueue_updateFrameCache;
- (void)_invalidateCache;
- (void)_invalidateCacheSize;
- (void)_updateDesiredCacheSize;
- (void)_updateFrameCache;
- (void)_updateIfNeeded;
- (void)dealloc;
- (struct CGImage *)frameAtIndex:(unsigned long long)arg1;
- (struct CGImage *)frameAtIndexIfReady:(unsigned long long)arg1;
- (id)initWithImageSource:(struct CGImageSource *)arg1;
- (id)initWithImageSource:(struct CGImageSource *)arg1 cachingStrategy:(long long)arg2;
- (id)initWithImageSource:(struct CGImageSource *)arg1 cachingStrategy:(long long)arg2 useGlobalDecodeQueue:(BOOL)arg3;

@end

