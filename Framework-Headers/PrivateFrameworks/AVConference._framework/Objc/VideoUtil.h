//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VideoUtil : NSObject
{
}

+ (struct CGRect)adjustFaceBounds:(struct CGRect)arg1 fromOriginalBufferSize:(struct CGSize)arg2 toCroppedBufferSize:(struct CGSize)arg3;
+ (void)adjustFaceMetadataForPixelBuffer:(struct __CVBuffer *)arg1 originalWidth:(unsigned long long)arg2 originalHeight:(unsigned long long)arg3;
+ (long long)compareVideoAspectRatioSizeA:(struct CGSize)arg1 toSizeB:(struct CGSize)arg2;
+ (id)convertPixelBuffer:(struct __CVBuffer *)arg1 toImageType:(int)arg2 withAssetIdentifier:(id)arg3 cameraStatusBits:(unsigned char)arg4;
+ (struct CGSize)getBestCaptureSizeForEncodingSize:(struct CGSize)arg1;
+ (int)setupBufferPool:(struct __CVPixelBufferPool **)arg1 width:(double)arg2 height:(double)arg3;
+ (struct CGSize)sizeForVideoResolution:(long long)arg1;
+ (struct __CFString *)typeIdentifierForImageType:(int)arg1;
+ (unsigned int)videoCodecForPayload:(int)arg1;
+ (long long)videoResolutionForWidth:(int)arg1 height:(int)arg2;

@end
