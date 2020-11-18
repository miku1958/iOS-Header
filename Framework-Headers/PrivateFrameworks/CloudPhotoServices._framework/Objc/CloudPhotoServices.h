//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoServices/CPLDerivativeGenerator-Protocol.h>

@interface CloudPhotoServices : NSObject <CPLDerivativeGenerator>
{
}

+ (unsigned long long)_bestImageResourceTypeForPixelCount:(long long)arg1;
+ (id)_createCPLResourceFromURL:(id)arg1 withResourceType:(unsigned long long)arg2 uniformTypeIdentifier:(id)arg3 itemScopedIdentifier:(id)arg4;
+ (void)_createJPEGResourcesFromInputJPEGURL:(id)arg1 resourceTypes:(id)arg2 withItemScopedIdentifier:(id)arg3 destinationDirectory:(id)arg4 outputResources:(id)arg5 convertToSRGB:(BOOL)arg6;
+ (void)_createPosterFrameResourcesFromInputURL:(id)arg1 withItemScopedIdentifier:(id)arg2 destinationDirectory:(id)arg3 outputResources:(id)arg4;
+ (void)_createVideoResourcesFromInputURL:(id)arg1 withItemScopedIdentifier:(id)arg2 videoAdjustments:(id)arg3 resourceType:(unsigned long long)arg4 forIris:(BOOL)arg5 destinationDirectory:(id)arg6 outputResources:(id)arg7;
+ (id)_filenameForResourceWithItemScopedIdentifier:(id)arg1 resourceType:(unsigned long long)arg2 extension:(id)arg3;
+ (void)_generateImageDerivativeResourcesFromInputResource:(id)arg1 destinationDirectory:(id)arg2 isAdjusted:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)_generateVideoDerivativeResourcesFromInputResource:(id)arg1 withCPLAdjustments:(id)arg2 destinationDirectory:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)_minionConnection;
+ (void)_sendCommandToRemoteObjectProxy:(CDUnknownBlockType)arg1 withErrorHandler:(CDUnknownBlockType)arg2;
+ (void)_sendRetryNumber:(int)arg1 toRemoteObjectProxyWithCommand:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
+ (BOOL)_shouldGenerateLargeVideoDerivativeForAVAsset:(id)arg1;
+ (void)generateDerivativeResourcesFromInputResource:(id)arg1 withAdjustments:(id)arg2 destinationDirectory:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)generateFullSizeJPEGIfNecessaryFromInputResource:(id)arg1 destinationDirectory:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)generateGIFForVideoAtURL:(id)arg1 destinationURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)generatePosterFrameForVideoAtURL:(id)arg1 maximumPixelCount:(long long)arg2 destinationURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (BOOL)isUnsupportedOriginalFormatError:(id)arg1;
+ (void)resizeImageAtURL:(id)arg1 destinationURL:(id)arg2 maximumPixelCount:(long long)arg3 bakeInOrientation:(BOOL)arg4 colorOutput:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)resizeImageAtURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (BOOL)shouldGenerateVideoDerivativeForAVAsset:(id)arg1 forResourceType:(unsigned long long)arg2 adjusted:(BOOL)arg3;
+ (id)singlePassTranscodeVideoAtURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (long long)status;
+ (id)transcodeVideoAtURL:(id)arg1 withAdjustments:(id)arg2 destinationURL:(id)arg3 options:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (unsigned int)videoCodecFourCharCodeNumberForAVAsset:(id)arg1;
+ (id)workQueue;

@end

