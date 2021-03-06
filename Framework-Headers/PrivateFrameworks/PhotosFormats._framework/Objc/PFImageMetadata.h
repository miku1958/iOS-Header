//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PFImageMetadata : NSObject
{
}

+ (id)auxiliaryImageIdentifiersToPreserveForDerivatives;
+ (id)auxiliaryImagesToPreserveForDerivativesFromImageSource:(struct CGImageSource *)arg1 imageIndex:(unsigned long long)arg2;
+ (id)cIImageFromAuxiliaryImageInfo:(id)arg1 applyingOrientation:(unsigned int)arg2 scaleFactor:(double)arg3;
+ (id)cIImageFromPixelBuffer:(struct __CVBuffer *)arg1 applyingOrientation:(unsigned int)arg2 scaleFactor:(double)arg3;
+ (struct CGImage *)createImageRefFromAuxiliaryImageInfo:(id)arg1 applyingOrientation:(unsigned int)arg2 scaleFactor:(double)arg3;
+ (struct CGImage *)createImageRefFromAuxiliaryImagePixelBuffer:(struct __CVBuffer *)arg1 applyingOrientation:(unsigned int)arg2 scaleFactor:(double)arg3;
+ (struct __CVBuffer *)createPixelBufferFromAuxiliaryImageInfo:(id)arg1;
+ (id)dictionaryRepresentationForAuxiliaryImagePixelBuffer:(struct __CVBuffer *)arg1 metadata:(struct CGImageMetadata *)arg2;
+ (BOOL)enumerateImageSourceIndexesOfFileAtURL:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
+ (id)imagePropertiesByRemovingKey:(const void *)arg1 dictionaryKey:(const void *)arg2 fromImageProperties:(id)arg3;
+ (BOOL)metadataTypeRequiresImageSourceAuxiliaryImage:(unsigned char)arg1;
+ (BOOL)queryImagePropertiesOfFileAtURL:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
+ (BOOL)readMetadataType:(unsigned char)arg1 fromCGImageProperties:(id)arg2 value:(id *)arg3 error:(id *)arg4;
+ (BOOL)readMetadataType:(unsigned char)arg1 fromFileURL:(id)arg2 value:(id *)arg3 error:(id *)arg4;
+ (BOOL)readMetadataValueFromImageAtFileURL:(id)arg1 dictionaryKey:(const void *)arg2 key:(const void *)arg3 value:(id *)arg4 error:(id *)arg5;
+ (id)transformAuxiliaryImages:(id)arg1 scaleFactor:(double)arg2 applyingOrientation:(unsigned int)arg3;
+ (id)valueFromCGImageProperties:(id)arg1 dictionaryKey:(const void *)arg2 key:(const void *)arg3;
+ (BOOL)writeMetadataType:(unsigned char)arg1 value:(id)arg2 toCGImageProperties:(id)arg3 error:(id *)arg4;

@end

