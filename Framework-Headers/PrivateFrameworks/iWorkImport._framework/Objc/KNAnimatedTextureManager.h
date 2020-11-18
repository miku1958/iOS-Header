//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KNPlaybackSession, KNSlideNode, NSLock, NSMapTable, NSMutableSet, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface KNAnimatedTextureManager : NSObject
{
    KNPlaybackSession *_session;
    KNSlideNode *_currentSlideNode;
    NSMapTable *_slideNodeToASVMap;
    NSMutableSet *_slideNodesInMemorySet;
    BOOL _isPrecachingActive;
    NSLock *_slideNodesInMemorySetLock;
    NSOperationQueue *_preCacheBackgroundQueue;
    NSOperationQueue *_rasterizeTextureQueue;
    BOOL _shouldPreCache;
}

@property (weak, nonatomic) KNSlideNode *currentSlideNode; // @synthesize currentSlideNode=_currentSlideNode;
@property (nonatomic) BOOL shouldPreCache; // @synthesize shouldPreCache=_shouldPreCache;

- (void).cxx_destruct;
- (id)ASVForSlideNode:(id)arg1;
- (void)addTextureToRasterizationQueue:(id)arg1 isOpenGL:(BOOL)arg2 asv:(id)arg3;
- (void)dealloc;
- (id)description;
- (void)evictCacheForSlideNode:(id)arg1;
- (void)evictCaches;
- (void)evictInMemoryCache;
- (void)evictPersistentCache;
- (id)init;
- (id)initWithSession:(id)arg1;
- (void)p_addSlideNodeToMemorySet:(id)arg1;
- (void)p_didReceiveMemoryWarning:(id)arg1;
- (void)p_invalidateASV:(id)arg1;
- (void)p_processSlideNode:(id)arg1 isHighPriority:(BOOL)arg2;
- (void)p_rasterizeTexture:(id)arg1 isOpenGL:(BOOL)arg2;
- (void)p_serializeExtraSlideNodes;
- (void)p_serializeTexturesForSlideNode:(id)arg1;
- (void)p_setCurrentSlideNodeToProcess:(id)arg1;
- (id)p_setupGenerateTexturesOperationOnSlideNode:(id)arg1;
- (id)p_setupPrepareAnimationsOperationOnSlideNode:(id)arg1;
- (id)p_setupRenderTexturesOperationOnSlideNode:(id)arg1;
- (BOOL)p_shouldProcessSlideNode:(id)arg1;
- (id)p_slideNodesToCacheAroundCurrentSlideNode:(id)arg1 shouldIncludeExtraSlideAtEnd:(BOOL)arg2;
- (void)startPreCaching;
- (void)stopPreCaching;
- (void)tearDown;

@end

