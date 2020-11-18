//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HFCameraPlaybackEngine, HFPosterFrameImageCache, NSMutableDictionary, NSOperationQueue;

@interface HFPosterFrameManager : NSObject
{
    HFCameraPlaybackEngine *_playbackEngine;
    NSOperationQueue *_posterFrameQueue;
    HFPosterFrameImageCache *_imageCache;
    NSMutableDictionary *_posterFrameObservers;
    NSMutableDictionary *_generationObservers;
    NSMutableDictionary *_inProgressOperations;
}

@property (strong, nonatomic) NSMutableDictionary *generationObservers; // @synthesize generationObservers=_generationObservers;
@property (strong, nonatomic) HFPosterFrameImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property (strong, nonatomic) NSMutableDictionary *inProgressOperations; // @synthesize inProgressOperations=_inProgressOperations;
@property (weak, nonatomic) HFCameraPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property (strong, nonatomic) NSMutableDictionary *posterFrameObservers; // @synthesize posterFrameObservers=_posterFrameObservers;
@property (strong, nonatomic) NSOperationQueue *posterFrameQueue; // @synthesize posterFrameQueue=_posterFrameQueue;

+ (id)clipIdentifierStringFromDate:(id)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_addOperationForObserver:(id)arg1 clip:(id)arg2 posterFrame:(id)arg3;
- (void)_addPosterFrameImage:(id)arg1 forClip:(id)arg2 withOffset:(double)arg3;
- (id)_cachedPosterFrameImageForClip:(id)arg1 offset:(double)arg2;
- (void)_fetchPosterFrameImageForObserver:(id)arg1 forClip:(id)arg2 offset:(double)arg3;
- (void)_generateImagesUsingAsset:(id)arg1 clip:(id)arg2 observer:(id)arg3;
- (void)_generateMissingPosterFrameImagesForClip:(id)arg1 observer:(id)arg2;
- (id)_posterFrameForClip:(id)arg1 atOffset:(double)arg2;
- (id)_posterFrameObserversForKey:(id)arg1;
- (double)_timeScaleAdjustedOffset:(double)arg1;
- (void)addDemoPosterFrameImageObserver:(id)arg1 forClip:(id)arg2 atOffset:(double)arg3;
- (void)addOperationForObserver:(id)arg1 clip:(id)arg2 posterFrame:(id)arg3 withKey:(id)arg4;
- (void)addPosterFrameImageObserver:(id)arg1 forClip:(id)arg2 atOffset:(double)arg3;
- (void)cacheDemoPosterFramesForAsset:(id)arg1 forClip:(id)arg2;
- (id)cachedPosterFrameImageForClip:(id)arg1 offset:(double)arg2;
- (void)dealloc;
- (id)init;
- (id)keyForClip:(id)arg1;
- (id)keyForClip:(id)arg1 timeOffset:(double)arg2;
- (void)purgePosterFrames;
- (void)removePosterFrameImageObserver:(id)arg1 forClip:(id)arg2 atOffset:(double)arg3;

@end
