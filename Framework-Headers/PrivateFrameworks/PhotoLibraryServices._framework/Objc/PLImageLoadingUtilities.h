//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PLImageLoadingUtilities : NSObject
{
}

+ (void)_assetsdImageForAsset:(id)arg1 withFormat:(id)arg2 allowPlaceholder:(BOOL)arg3 optimalSourcePixelSize:(struct CGSize)arg4 networkAccessAllowed:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 sync:(BOOL)arg7 completion:(CDUnknownBlockType)arg8;
+ (id)_filledHalfScreenLargeImageLoader;
+ (id)_filledScreenLargeImageLoader;
+ (id)_fullScreenLargeImageLoader;
+ (id)_fullSizeLargeImageLoaderForFormatID:(int)arg1;
+ (BOOL)canAccessImageForAsset:(id)arg1;
+ (void)imageForAsset:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(BOOL)arg3 optimalSourcePixelSize:(struct CGSize)arg4 networkAccessAllowed:(BOOL)arg5 networkAccessForced:(BOOL)arg6 trackCPLDownload:(BOOL)arg7 completion:(CDUnknownBlockType)arg8 sync:(BOOL)arg9;
+ (id)newImageDataForAsset:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(BOOL)arg3 wantURLOnly:(BOOL)arg4 networkAccessAllowed:(BOOL)arg5 networkAccessForced:(BOOL)arg6 trackCPLDownload:(BOOL)arg7 outImageDataInfo:(id *)arg8 outCPLDownloadContext:(id *)arg9;
+ (id)newImageForAsset:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(BOOL)arg3 optimalSourcePixelSize:(struct CGSize)arg4 networkAccessAllowed:(BOOL)arg5 networkAccessForced:(BOOL)arg6 trackCPLDownload:(BOOL)arg7 outImageProperties:(const struct __CFDictionary **)arg8 outImageDataInfo:(id *)arg9 outCPLDownloadContext:(id *)arg10;
+ (id)newImageForAsset:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(BOOL)arg3 outImageProperties:(const struct __CFDictionary **)arg4 outDeliveredPlaceholder:(BOOL *)arg5;
+ (id)preheatItemSourceForFormatID:(int)arg1;

@end

