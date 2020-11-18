//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPAssetCacheClientCache;

__attribute__((visibility("hidden")))
@interface SPCompanionAssetCache : NSObject
{
    SPAssetCacheClientCache *_permanentCache;
    SPAssetCacheClientCache *_transientCache;
}

@property (strong, nonatomic) SPAssetCacheClientCache *permanentCache; // @synthesize permanentCache=_permanentCache;
@property (strong, nonatomic) SPAssetCacheClientCache *transientCache; // @synthesize transientCache=_transientCache;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addImageReferenceToTransientCache:(id)arg1 withName:(id)arg2;
- (BOOL)addImageToPermanentCache:(id)arg1 withName:(id)arg2;
- (void)addedAsset:(id)arg1;
- (id)cachedImages;
- (void)clearedCache:(id)arg1;
- (id)dataForImageWithName:(id)arg1;
- (void)deletedAsset:(id)arg1;
- (void)handleCacheMessage:(id)arg1;
- (BOOL)imageInPermanentCache:(id)arg1;
- (BOOL)imageInTransientCache:(id)arg1;
- (id)init;
- (id)keyFromImageData:(id)arg1;
- (void)removeAllImagesFromPermanentCache;
- (void)removeImageFromPermanentCacheWithName:(id)arg1;
- (void)syncCache:(id)arg1;

@end
