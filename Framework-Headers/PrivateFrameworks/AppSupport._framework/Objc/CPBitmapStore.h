//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCache, NSString;
@protocol OS_dispatch_queue;

@interface CPBitmapStore : NSObject
{
    NSString *_path;
    NSString *_imagePath;
    NSCache *_cache;
    int _version;
    NSString *_versionPath;
    NSObject<OS_dispatch_queue> *_serialQueueRemoveImagesBackground;
    NSObject<OS_dispatch_queue> *_serialQueueRemoveImagesDefault;
    BOOL _lockOnRead;
}

@property (nonatomic) unsigned long long cacheItemLimit;
@property (nonatomic) BOOL lockOnRead; // @synthesize lockOnRead=_lockOnRead;
@property (readonly, nonatomic) int version;

- (struct CGImage *)_copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize)arg3 format:(int)arg4 scale:(double)arg5 fillMem:(CDUnknownBlockType)arg6 alternateCompletion:(CDUnknownBlockType)arg7;
- (id)_versionPath;
- (id)allGroups;
- (id)cacheNumberForKey:(id)arg1;
- (void)commitTransaction;
- (void)commitTxn;
- (struct CGImage *)copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize)arg3 opaque:(BOOL)arg4 scale:(double)arg5 draw:(CDUnknownBlockType)arg6;
- (struct CGImage *)copyImageForKey:(id)arg1;
- (struct CGImage *)copyImageForKey:(id)arg1 inGroup:(id)arg2;
- (void)dealloc;
- (BOOL)findImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(struct _img *)arg3;
- (unsigned long long)imageCount;
- (id)imageNameForKey:(id)arg1 inGroup:(id)arg2;
- (id)imagePath;
- (id)initWithPath:(id)arg1 version:(int)arg2;
- (unsigned int)memContentOffset;
- (void *)openAndMmap:(id)arg1 withInfo:(struct _img *)arg2;
- (void)purge;
- (void)removeImagesInGroups:(id)arg1;
- (void)removeImagesInGroups:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)saveImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(struct _img *)arg3;
- (int)setVersion:(int)arg1;
- (void)storeGrayscaleImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize)arg3 opaque:(BOOL)arg4 scale:(double)arg5 data:(id)arg6;
- (void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize)arg3 opaque:(BOOL)arg4 scale:(double)arg5 data:(id)arg6;
- (void)storeImageForKey:(id)arg1 inGroup:(id)arg2 opaque:(BOOL)arg3 image:(struct CGImage *)arg4;

@end
