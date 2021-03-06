//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/VNSequencedRequestSupporting-Protocol.h>

@class CIContext, CIImage, NSDictionary, VNImageSourceManager;

@interface VNImageBuffer : NSObject <VNSequencedRequestSupporting>
{
    struct __CVBuffer *_origPixelBuffer;
    struct CGImage *_origCGImage;
    struct __CFArray *_pixelBufferReps;
    struct os_unfair_lock_s _pixelBufferRepsLock;
    CIImage *_origCIImage;
    CIContext *_passedInCIContext;
    struct opaqueCMSampleBuffer *_origSampleBuffer;
    VNImageSourceManager *_imageSourceManager;
    int _orientation;
    unsigned long long _origImageWidth;
    unsigned long long _origImageHeight;
    NSDictionary *_options;
}

@property (readonly) unsigned long long height;
@property (readonly) CDStruct_d2aef016 timingInfo;
@property (readonly) unsigned long long width;

+ (int)_VNVTImageRotationSessionCreate:(struct OpaqueVTImageRotationSession **)arg1 rotation:(unsigned int)arg2;
+ (int)_VNVTPixelTransferSessionCreate:(struct OpaqueVTPixelTransferSession **)arg1;
+ (int)_helpReadOrientationFromOptionsDictionary:(id)arg1;
+ (struct CGRect)computeCenterCropRectFromCropRect:(struct CGRect)arg1 inImageSize:(struct CGSize)arg2 calculatedScaleX:(double *)arg3 calculatedScaleY:(double *)arg4;
+ (struct CGColorSpace *)copyColorspaceForFormat:(unsigned int)arg1 bitmapInfo:(unsigned int *)arg2;
+ (const struct __CFDictionary *)ioSurfaceBackedPixelBufferAttributes;
- (void).cxx_destruct;
- (id)_baseCIImage;
- (struct __CVBuffer *)_baseCVPixelBuffer;
- (struct CGRect)_calculateTargetRectFromCropRect:(struct CGRect)arg1;
- (BOOL)_cropCIImage:(id)arg1 outBuffer:(struct __CVBuffer **)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 format:(unsigned int)arg5 cropRect:(struct CGRect)arg6 performCrop:(BOOL)arg7 options:(id)arg8 error:(id *)arg9;
- (BOOL)_cropCVPixelBuffer:(struct __CVBuffer *)arg1 outBuffer:(struct __CVBuffer **)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 format:(unsigned int)arg5 cropRect:(struct CGRect)arg6 performCrop:(BOOL)arg7 options:(id)arg8 error:(id *)arg9;
- (BOOL)_cropImageSourceManager:(id)arg1 outBuffer:(struct __CVBuffer **)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 format:(unsigned int)arg5 cropRect:(struct CGRect)arg6 performCrop:(BOOL)arg7 options:(id)arg8 error:(id *)arg9;
- (void)_dumpIntermediateImage:(struct __CVBuffer *)arg1 withOptions:(id)arg2;
- (BOOL)_isRectOutOfBounds:(struct CGRect)arg1;
- (id)_optionsWithOverridingOptions:(id)arg1;
- (struct __CVBuffer *)_retrieveBufferFromCacheIfFoundWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3;
- (BOOL)_useCoreImageForFormat:(unsigned int)arg1;
- (id)augmentedBuffersWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 options:(id)arg4 augmentationOptions:(id)arg5 error:(id *)arg6;
- (id)augmentedCroppedBuffersWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 cropRect:(struct CGRect)arg4 options:(id)arg5 augmentationOptions:(id)arg6 error:(id *)arg7;
- (struct __CVBuffer *)bufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 options:(id)arg4 error:(id *)arg5;
- (void)calculateOrientationCorrectedImageDimensions;
- (struct __CVBuffer *)createBufferWithMaxSideLengthOf:(unsigned long long)arg1 andPixelFormat:(unsigned int)arg2 andOptions:(id)arg3 error:(id *)arg4;
- (struct __CVBuffer *)createCroppedBufferWithMaxSideLengthOf:(unsigned long long)arg1 andCropBounds:(struct CGRect)arg2 andPixelFormat:(unsigned int)arg3 andOptions:(id)arg4 error:(id *)arg5;
- (struct __CVBuffer *)cropAndScaleBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 cropRect:(struct CGRect)arg3 format:(unsigned int)arg4 imageCropAndScaleOption:(unsigned long long)arg5 options:(id)arg6 error:(id *)arg7 calculatedNormalizedOriginOffset:(struct CGPoint *)arg8 calculatedScaleX:(double *)arg9 calculatedScaleY:(double *)arg10;
- (struct __CVBuffer *)croppedBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 cropRect:(struct CGRect)arg4 options:(id)arg5 error:(id *)arg6;
- (void)dealloc;
- (id)fileURL;
- (BOOL)getCameraIntrinsicsAvailable:(CDStruct_8e0628e6 *)arg1;
- (BOOL)getCameraOpticalCenterIfAvailable:(struct CGPoint *)arg1;
- (BOOL)getPixelFocalLengthIfAvailable:(float *)arg1;
- (id)imageProperties;
- (id)initWithCGImage:(struct CGImage *)arg1 options:(id)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithCIImage:(id)arg1 options:(id)arg2;
- (id)initWithCIImage:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 options:(id)arg2;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithData:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (id)initWithOptions:(id)arg1 orientation:(unsigned int)arg2;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;
- (struct CGRect)makeClippedRectAgainstImageExtentUsingOriginalRect:(struct CGRect)arg1;
- (int)orientation;
- (struct CGImage *)originalCGImage;
- (struct __CVBuffer *)originalPixelBuffer;
- (BOOL)processInChunksOfSize:(unsigned long long)arg1 overlapFraction:(float)arg2 options:(id)arg3 roi:(struct CGRect)arg4 handler:(CDUnknownBlockType)arg5 error:(id *)arg6;
- (void)purgeCachedRepresentations;
- (id)sequencedRequestPreviousObservationsKey;
- (BOOL)wantsSequencedRequestObservationsRecording;

@end

