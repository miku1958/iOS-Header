//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKImageBrush, GKThreadsafeCache, NSString, UIImage;

@interface GKImageSource : NSObject
{
    BOOL _shouldRenderDefaultImageWithBrush;
    GKThreadsafeCache *_cache;
    NSString *_name;
    GKImageBrush *_imageBrush;
    UIImage *_defaultImage;
    UIImage *_renderedDefaultImage;
}

@property (strong, nonatomic) GKThreadsafeCache *cache; // @synthesize cache=_cache;
@property (strong, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property (strong, nonatomic) GKImageBrush *imageBrush; // @synthesize imageBrush=_imageBrush;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) UIImage *renderedDefaultImage; // @synthesize renderedDefaultImage=_renderedDefaultImage;
@property (nonatomic) BOOL shouldRenderDefaultImageWithBrush; // @synthesize shouldRenderDefaultImageWithBrush=_shouldRenderDefaultImageWithBrush;

+ (id)cacheDirectoryForImageID:(id)arg1;
+ (void)clearCache;
+ (id)sharedCache;
+ (id)syncQueue;
- (void)_storeImage:(id)arg1 cacheKey:(id)arg2 path:(id)arg3 context:(id)arg4;
- (unsigned long long)cacheCostForImage:(id)arg1;
- (void)cacheImageFromContext:(id)arg1 forIdentifier:(id)arg2;
- (id)cachedImageForIdentifier:(id)arg1;
- (id)cachedImageForKey:(id)arg1;
- (void)clearCachedImageForIdentifier:(id)arg1;
- (void)dealloc;
- (id)fastCachedImageForIdentifier:(id)arg1;
- (id)fastCachedImageForKey:(id)arg1;
- (id)fastCachedOrDefaultImageForForKey:(id)arg1;
- (id)fastCachedOrDefaultImageForIdentifier:(id)arg1;
- (id)initWithName:(id)arg1 imageBrush:(id)arg2;
- (id)keyForImageIdentifier:(id)arg1;
- (id)processAndCacheImage:(id)arg1 forIdentifier:(id)arg2;
- (id)processAndCacheImage:(id)arg1 forKey:(id)arg2;
- (id)processAndCacheImageDataInContext:(id)arg1 withImage:(id)arg2 forIdentifier:(id)arg3;
- (id)processAndCacheImageDataInContext:(id)arg1 withImage:(id)arg2 forKey:(id)arg3;
- (id)renderedImageWithImage:(id)arg1;
- (id)renderedImageWithImage:(id)arg1 defaultSize:(struct CGSize)arg2 returnContext:(id *)arg3;
- (id)renderedImageWithImage:(id)arg1 returnContext:(id *)arg2;
- (id)renderedTestImage;
- (BOOL)shouldUseTestImage;
- (id)subsourceWithBrush:(id)arg1;
- (void)validateFileSystemCache;

@end

