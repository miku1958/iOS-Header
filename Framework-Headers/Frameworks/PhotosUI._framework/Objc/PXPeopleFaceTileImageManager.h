//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCacheDelegate-Protocol.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSMapTable, NSString, PXLRUMemoryCache;
@protocol NSObject, OS_dispatch_queue;

@interface PXPeopleFaceTileImageManager : NSObject <NSCacheDelegate, PXPhotoLibraryUIChangeObserver>
{
    NSObject<OS_dispatch_queue> *_fetchQueue;
    NSObject<OS_dispatch_queue> *_requestLookupIsolationQueue;
    NSObject<OS_dispatch_queue> *_cropCacheQueue;
    NSMapTable *_faceTileRequestByRequestID;
    BOOL _concurrencyEnabled;
    PXLRUMemoryCache *_memoryCache;
    id<NSObject> _memoryWarningObserver;
}

@property (nonatomic, getter=isConcurrencyEnabled) BOOL concurrencyEnabled; // @synthesize concurrencyEnabled=_concurrencyEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PXLRUMemoryCache *memoryCache; // @synthesize memoryCache=_memoryCache;
@property (strong, nonatomic) id<NSObject> memoryWarningObserver; // @synthesize memoryWarningObserver=_memoryWarningObserver;
@property (readonly) Class superclass;

+ (id)imageTransformQueue;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_addRequestResult:(id)arg1 forIdentifier:(id)arg2;
- (id)_cachedResultForIdentifier:(id)arg1 params:(struct PXFaceTileImageParams)arg2 allowVeryLowQuality:(BOOL)arg3 isLowResResult:(BOOL *)arg4;
- (id)_cachedResultForIdentifier:(id)arg1 params:(struct PXFaceTileImageParams)arg2 isLowResResult:(BOOL *)arg3;
- (void)_cropImage:(id)arg1 cacheResult:(BOOL)arg2 isDegraded:(BOOL)arg3 forRequest:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (BOOL)_deliverCachedResultIfPossibleForRequest:(id)arg1 allowDegradedDelivery:(BOOL)arg2 allowVeryLowQuality:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (BOOL)_deliverCachedResultIfPossibleForRequest:(id)arg1 allowDegradedDelivery:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (BOOL)_doesChange:(id)arg1 containVisibleChangesToPHAssetWithOID:(id)arg2;
- (id)_fetchKeyFaceFromFaceCollection:(id)arg1 error:(id *)arg2;
- (id)_fetchKeyFaceFromPerson:(id)arg1 error:(id *)arg2;
- (struct CGRect)_imageFaceRectForFace:(id)arg1;
- (void)_requestFaceTileImageFromFace:(id)arg1 fromPHObject:(id)arg2 faceImageRequest:(id)arg3 cacheResult:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_startListeningForChanges;
- (void)_stopListeningForChanges;
- (void)cancelRequest:(int)arg1;
- (void)clearMemoryCache;
- (void)dealloc;
- (id)init;
- (void)invalidateCacheForPerson:(id)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (int)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 round:(BOOL)arg4 cacheResult:(BOOL)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (int)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 round:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (int)requestFaceTileImageFromFaceCollection:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 round:(BOOL)arg4 cacheResult:(BOOL)arg5 boundFaceRect:(BOOL)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (int)requestFaceTileImageFromPerson:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 round:(BOOL)arg4 cacheResult:(BOOL)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (int)requestFaceTileImageFromPerson:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 round:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end

