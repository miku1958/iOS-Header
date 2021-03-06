//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreImage/NSCopying-Protocol.h>
#import <CoreImage/NSSecureCoding-Protocol.h>

@class AVDepthData, AVPortraitEffectsMatte, AVSemanticSegmentationMatte, CIFilterShape, NSDictionary, NSURL;

@interface CIImage : NSObject <NSSecureCoding, NSCopying>
{
    void *_priv;
}

@property (readonly, nonatomic) struct CGImage *CGImage;
@property (readonly) struct CGColorSpace *colorSpace;
@property (readonly) CIFilterShape *definition;
@property (readonly, nonatomic) AVDepthData *depthData;
@property (readonly, nonatomic) struct CGRect extent;
@property (readonly, nonatomic) struct __CVBuffer *pixelBuffer;
@property (readonly, nonatomic) AVPortraitEffectsMatte *portraitEffectsMatte;
@property (readonly) NSDictionary *properties;
@property (readonly, nonatomic) AVSemanticSegmentationMatte *semanticSegmentationMatte;
@property (readonly) NSURL *url;

+ (id)blackImage;
+ (id)blueImage;
+ (id)clearImage;
+ (id)clearImage:(struct CGRect)arg1;
+ (id)cyanImage;
+ (id)emptyImage;
+ (id)grayImage;
+ (id)greenImage;
+ (id)imageForRenderingWithMPS:(id)arg1 orNonMPS:(id)arg2;
+ (id)imageForRenderingWithMetal:(id)arg1 orNonMetal:(id)arg2;
+ (id)imageForRenderingWithMetalContext:(id)arg1 orOpenGLContextUsingMetal:(id)arg2 orNonMetalContext:(id)arg3;
+ (id)imageWithArrayOfImages:(id)arg1 selector:(CDUnknownBlockType)arg2;
+ (id)imageWithAttributedString:(id)arg1 format:(int)arg2;
+ (id)imageWithAttributedString:(id)arg1 format:(int)arg2 options:(id)arg3;
+ (id)imageWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(struct CGSize)arg3 format:(int)arg4 colorSpace:(struct CGColorSpace *)arg5;
+ (id)imageWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(struct CGSize)arg3 format:(int)arg4 options:(id)arg5;
+ (id)imageWithCGImage:(struct CGImage *)arg1;
+ (id)imageWithCGImage:(struct CGImage *)arg1 options:(id)arg2;
+ (id)imageWithCGImageSource:(struct CGImageSource *)arg1 index:(unsigned long long)arg2 options:(id)arg3;
+ (id)imageWithCGLayer:(struct CGLayer *)arg1;
+ (id)imageWithCGLayer:(struct CGLayer *)arg1 options:(id)arg2;
+ (id)imageWithCVImageBuffer:(struct __CVBuffer *)arg1;
+ (id)imageWithCVImageBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;
+ (id)imageWithCVPixelBuffer:(struct __CVBuffer *)arg1;
+ (id)imageWithCVPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;
+ (id)imageWithColor:(id)arg1;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageWithContentsOfFile:(id)arg1 options:(id)arg2;
+ (id)imageWithContentsOfURL:(id)arg1;
+ (id)imageWithContentsOfURL:(id)arg1 options:(id)arg2;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithData:(id)arg1 options:(id)arg2;
+ (id)imageWithDepthData:(id)arg1;
+ (id)imageWithDepthData:(id)arg1 options:(id)arg2;
+ (id)imageWithIOSurface:(struct __IOSurface *)arg1;
+ (id)imageWithIOSurface:(struct __IOSurface *)arg1 options:(id)arg2;
+ (id)imageWithImageProvider:(id)arg1 size:(unsigned long long)arg2:(unsigned long long)arg3 format:(int)arg4 colorSpace:(struct CGColorSpace *)arg5 options:(id)arg6;
+ (id)imageWithImageProvider:(id)arg1 userInfo:(id)arg2 size:(struct CGSize)arg3 format:(int)arg4 flipped:(BOOL)arg5 colorSpace:(struct CGColorSpace *)arg6;
+ (id)imageWithInternalRepresentation:(void *)arg1;
+ (id)imageWithMTLTexture:(id)arg1 options:(id)arg2;
+ (id)imageWithPortaitEffectsMatte:(id)arg1;
+ (id)imageWithPortaitEffectsMatte:(id)arg1 options:(id)arg2;
+ (id)imageWithPortraitEffectsMatte:(id)arg1;
+ (id)imageWithPortraitEffectsMatte:(id)arg1 options:(id)arg2;
+ (id)imageWithSemanticSegmentationMatte:(id)arg1;
+ (id)imageWithSemanticSegmentationMatte:(id)arg1 options:(id)arg2;
+ (id)imageWithTexture:(unsigned int)arg1 size:(struct CGSize)arg2 flipped:(BOOL)arg3 colorSpace:(struct CGColorSpace *)arg4;
+ (id)imageWithTexture:(unsigned int)arg1 size:(struct CGSize)arg2 flipped:(BOOL)arg3 options:(id)arg4;
+ (id)imageWithTexture:(unsigned int)arg1 size:(struct CGSize)arg2 options:(id)arg3;
+ (id)imageWithYCCImage:(id)arg1 matrix:(int)arg2 fullRange:(BOOL)arg3 colorSpace:(struct CGColorSpace *)arg4;
+ (id)imageWithYImage:(id)arg1 CrCbImage:(id)arg2 CrCbScale:(int)arg3 matrix:(int)arg4 fullRange:(BOOL)arg5 colorSpace:(struct CGColorSpace *)arg6;
+ (id)imageYCC444:(id)arg1 matrix:(int)arg2 fullRange:(BOOL)arg3 colorSpace:(struct CGColorSpace *)arg4;
+ (id)magentaImage;
+ (id)noiseImage;
+ (id)noiseImageNearest;
+ (id)noiseImagePadded;
+ (id)nullImage;
+ (id)redImage;
+ (id)smartColorAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2;
+ (id)smartToneAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2;
+ (id)smartToneAdjustmentsForValue:(double)arg1 localLightAutoValue:(double)arg2 andStatistics:(id)arg3;
+ (BOOL)supportsSecureCoding;
+ (id)whiteImage;
+ (id)yellowImage;
- (id)TIFFRepresentation;
- (id)_autoRedEyeFilterWithFeatures:(id)arg1 imageProperties:(id)arg2 context:(id)arg3 options:(id)arg4;
- (id)_dictForFeature:(id)arg1 invOrientationTransform:(struct CGAffineTransform)arg2 extent:(struct CGRect)arg3;
- (id)_imageByApplyingBlur:(double)arg1;
- (id)_imageByApplyingColorMatrixRed:green:blue:bias: /* Error: Ran out of types for this method. */;
- (id)_imageByApplyingGamma:(double)arg1;
- (id)_imageByClampingAlpha;
- (id)_imageByMatchingColorSpaceToWorkingSpace:(struct CGColorSpace *)arg1;
- (id)_imageByMatchingWorkingSpaceToColorSpace:(struct CGColorSpace *)arg1;
- (id)_imageByPremultiplying;
- (id)_imageByRenderingToIntermediate;
- (id)_imageBySamplingLinear;
- (id)_imageBySamplingNearest;
- (id)_imageByUnpremultiplying;
- (id)_initNaiveWithCGImage:(struct CGImage *)arg1 options:(id)arg2;
- (id)_initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(struct CGSize)arg3 format:(int)arg4 options:(id)arg5;
- (id)_initWithCVImageBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;
- (id)_initWithIOSurface:(struct __IOSurface *)arg1 options:(id)arg2 owner:(void *)arg3;
- (id)_initWithImageProvider:(CDUnknownBlockType)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 format:(int)arg4 colorSpace:(struct CGColorSpace *)arg5 surfaceCache:(BOOL)arg6 options:(id)arg7;
- (id)_initWithInternalRepresentation:(void *)arg1;
- (void *)_internalRepresentation;
- (struct CGImage *)_originalCGImage;
- (struct __CVBuffer *)_originalCVPixelBuffer;
- (id)_pdfDataRepresentation;
- (struct __CVBuffer *)_pixelBufferFromAuxProps:(struct __CFDictionary *)arg1;
- (id)_scaleImageToMaxDimension:(unsigned int)arg1;
- (void)_setOriginalCGImage:(struct CGImage *)arg1 options:(id)arg2;
- (void)_setOriginalCVPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;
- (id)autoAdjustmentFilters;
- (id)autoAdjustmentFiltersWithImageProperties:(id)arg1 options:(id)arg2;
- (id)autoAdjustmentFiltersWithOptions:(id)arg1;
- (id)autoPerspectiveFilterWithOptions:(id)arg1;
- (id)autoPerspectiveResultWithOptions:(id)arg1;
- (id)autoRedEyeFilterWithFeatures:(id)arg1 imageProperties:(id)arg2 options:(id)arg3;
- (id)autoRedEyeFilterWithFeatures:(id)arg1 options:(id)arg2;
- (id)autoRotateFilterFFT:(id)arg1 image:(struct CGImage *)arg2 inputRect:(struct CGRect)arg3 minTiltAngle:(float)arg4 maxTiltAngle:(float)arg5 detectVerticalLines:(BOOL)arg6 thrVertAngle:(float)arg7 thrDomAngleDiff:(float)arg8;
- (struct CGColorSpace *)baseColorSpace;
- (BOOL)cacheHint;
- (struct CGPoint)calcIntersection:(struct CGPoint)arg1 slope1:(struct CGPoint)arg2 pt2:(struct CGPoint)arg3 slope2:(struct CGPoint)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filteredImage:(id)arg1 keysAndValues:(id)arg2;
- (void)finalize;
- (id)getAutoRotateFilter:(id)arg1 ciImage:(id)arg2 inputRect:(struct CGRect)arg3 rotateCropRect:(struct CGRect *)arg4 minTiltAngle:(float)arg5 maxTiltAngle:(float)arg6 detectVerticalLines:(BOOL)arg7 thrVertAngle:(float)arg8 thrDomAngleDiff:(float)arg9;
- (void)getAutocropRect:(id)arg1 rotateXfrm:(struct CGAffineTransform)arg2 inputImageRect:(struct CGRect)arg3 clipRect:(struct CGRect *)arg4;
- (id)imageByApplyingCGOrientation:(unsigned int)arg1;
- (id)imageByApplyingFilter:(id)arg1;
- (id)imageByApplyingFilter:(id)arg1 withInputParameters:(id)arg2;
- (id)imageByApplyingGaussianBlurWithSigma:(double)arg1;
- (id)imageByApplyingOrientation:(int)arg1;
- (id)imageByApplyingTransform:(struct CGAffineTransform)arg1;
- (id)imageByApplyingTransform:(struct CGAffineTransform)arg1 highQualityDownsample:(BOOL)arg2;
- (id)imageByClampingToExtent;
- (id)imageByClampingToRect:(struct CGRect)arg1;
- (id)imageByColorMatchingColorSpaceToWorkingSpace:(struct CGColorSpace *)arg1;
- (id)imageByColorMatchingWorkingSpaceToColorSpace:(struct CGColorSpace *)arg1;
- (id)imageByColorMatchingWorkingSpaceToRGBorGrayColorSpace:(struct CGColorSpace *)arg1;
- (id)imageByCompositingOverImage:(id)arg1;
- (id)imageByCroppingToRect:(struct CGRect)arg1;
- (id)imageByInsertingIntermediate;
- (id)imageByInsertingIntermediate:(BOOL)arg1;
- (id)imageByPremultiplyingAlpha;
- (id)imageBySamplingLinear;
- (id)imageBySamplingNearest;
- (id)imageBySettingAlphaOneInExtent:(struct CGRect)arg1;
- (id)imageBySettingProperties:(id)arg1;
- (id)imageBySettingPropertiesNoCopy:(id)arg1;
- (id)imageByTaggingWithColorSpace:(struct CGColorSpace *)arg1;
- (id)imageByToneMappingColorSpaceToWorkingSpace:(struct CGColorSpace *)arg1;
- (id)imageByUnpremultiplyingAlpha;
- (struct CGAffineTransform)imageTransformForCGOrientation:(unsigned int)arg1;
- (struct CGAffineTransform)imageTransformForOrientation:(int)arg1;
- (id)imageWithExtent:(struct CGRect)arg1 processorDescription:(id)arg2 argumentDigest:(unsigned long long)arg3 inputFormat:(int)arg4 outputFormat:(int)arg5 options:(id)arg6 roiCallback:(CDUnknownBlockType)arg7 processor:(CDUnknownBlockType)arg8;
- (id)imageWithMesh:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (id)init;
- (id)initAuxiliaryWithImageSource:(struct CGImageSource *)arg1 options:(id)arg2 depth:(BOOL)arg3;
- (id)initForRenderingWithMPS:(id)arg1 orNonMPS:(id)arg2;
- (id)initForRenderingWithMetal:(id)arg1 orNonMetal:(id)arg2;
- (id)initForRenderingWithMetalContext:(id)arg1 orOpenGLContextUsingMetal:(id)arg2 orNonMetalContext:(id)arg3;
- (id)initMatteWithImageSource:(struct CGImageSource *)arg1 options:(id)arg2;
- (id)initWithArrayOfImages:(id)arg1 selector:(CDUnknownBlockType)arg2;
- (id)initWithAttributedString:(id)arg1 format:(int)arg2;
- (id)initWithAttributedString:(id)arg1 format:(int)arg2 options:(id)arg3;
- (id)initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(struct CGSize)arg3 format:(int)arg4 colorSpace:(struct CGColorSpace *)arg5;
- (id)initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(struct CGSize)arg3 format:(int)arg4 options:(id)arg5;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 options:(id)arg2;
- (id)initWithCGImageSource:(struct CGImageSource *)arg1 index:(unsigned long long)arg2 options:(id)arg3;
- (id)initWithCGLayer:(struct CGLayer *)arg1;
- (id)initWithCGLayer:(struct CGLayer *)arg1 options:(id)arg2;
- (id)initWithCVImageBuffer:(struct __CVBuffer *)arg1;
- (id)initWithCVImageBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithColor:(id)arg1;
- (id)initWithColorR:(double)arg1 G:(double)arg2 B:(double)arg3 A:(double)arg4;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 options:(id)arg2;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(id)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithDepthData:(id)arg1;
- (id)initWithDepthData:(id)arg1 options:(id)arg2;
- (id)initWithEmptyClearColor;
- (id)initWithIOSurface:(struct __IOSurface *)arg1;
- (id)initWithIOSurface:(struct __IOSurface *)arg1 options:(id)arg2;
- (id)initWithImageProvider:(id)arg1 size:(unsigned long long)arg2:(unsigned long long)arg3 format:(int)arg4 colorSpace:(struct CGColorSpace *)arg5 options:(id)arg6;
- (id)initWithImageProvider:(id)arg1 userInfo:(id)arg2 size:(struct CGSize)arg3 format:(int)arg4 flipped:(BOOL)arg5 colorSpace:(struct CGColorSpace *)arg6;
- (id)initWithImageProvider:(CDUnknownBlockType)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 format:(int)arg4 colorSpace:(struct CGColorSpace *)arg5 options:(id)arg6;
- (id)initWithMTLTexture:(id)arg1 options:(id)arg2;
- (id)initWithPortaitEffectsMatte:(id)arg1;
- (id)initWithPortaitEffectsMatte:(id)arg1 options:(id)arg2;
- (id)initWithPortraitEffectsMatte:(id)arg1;
- (id)initWithPortraitEffectsMatte:(id)arg1 options:(id)arg2;
- (id)initWithSemanticSegmentationMatte:(id)arg1;
- (id)initWithSemanticSegmentationMatte:(id)arg1 options:(id)arg2;
- (id)initWithTexture:(unsigned int)arg1 size:(struct CGSize)arg2 flipped:(BOOL)arg3 colorSpace:(struct CGColorSpace *)arg4;
- (id)initWithTexture:(unsigned int)arg1 size:(struct CGSize)arg2 flipped:(BOOL)arg3 options:(id)arg4;
- (id)initWithTexture:(unsigned int)arg1 size:(struct CGSize)arg2 options:(id)arg3;
- (struct CGAffineTransform)inverseImageTransformForOrientation:(int)arg1;
- (BOOL)isOpaque;
- (id)localLightStatistics;
- (id)localLightStatisticsNoProxy;
- (id)localLightStatisticsWithProxy:(BOOL)arg1;
- (id)metalImageByApplyingFilter:(id)arg1;
- (id)metalImageByApplyingFilter:(id)arg1 withInputParameters:(id)arg2;
- (struct CGPoint)pointWithDictionary:(id)arg1 name:(id)arg2 index:(int)arg3 transformedBy:(struct CGAffineTransform)arg4;
- (void)printTree;
- (struct CGRect)regionOfInterestForImage:(id)arg1 inRect:(struct CGRect)arg2;
- (void)setCacheHint:(BOOL)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)smartBlackAndWhiteAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2;
- (id)smartBlackAndWhiteStatistics;
- (id)smartColorAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2;
- (id)smartColorStatistics;
- (id)smartToneAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2;
- (id)smartToneAdjustmentsForValue:(double)arg1 localLightAutoValue:(double)arg2 andStatistics:(id)arg3;
- (id)smartToneStatistics;
- (id)userInfo;
- (void)writeToTIFF:(id)arg1;

@end

