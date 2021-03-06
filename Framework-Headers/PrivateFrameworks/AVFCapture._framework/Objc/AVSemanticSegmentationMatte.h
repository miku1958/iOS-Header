//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AVSemanticSegmentationMatte : NSObject
{
    NSString *_matteType;
    struct __CVBuffer *_pixelBuffer;
    int _version;
}

@property (readonly) NSString *matteType;
@property (readonly) struct __CVBuffer *mattingImage;
@property (readonly) unsigned int pixelFormatType;

+ (id)_allSupportedSemanticSegmentationMattePixelFormatTypes;
+ (id)_allSupportedSemanticSegmentationMatteTypes;
+ (void)initialize;
+ (id)semanticSegmentationMatteFromImageSourceAuxiliaryDataType:(struct __CFString *)arg1 dictionaryRepresentation:(id)arg2 error:(id *)arg3;
- (const struct __CFString *)auxiliaryImageType;
- (const struct CGImageMetadata *)copyAuxiliaryMetadata;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id *)arg1;
- (id)initWithType:(id)arg1 pixelBuffer:(struct __CVBuffer *)arg2 auxiliaryMetadata:(const struct CGImageMetadata *)arg3;
- (id)initWithType:(id)arg1 pixelBuffer:(struct __CVBuffer *)arg2 semanticSegmentationMatteMetadataDictionary:(id)arg3;
- (id)semanticSegmentationMatteByApplyingExifOrientation:(unsigned int)arg1;
- (id)semanticSegmentationMatteByReplacingSemanticSegmentationMatteWithPixelBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (short)versionMajor;
- (short)versionMinor;

@end

