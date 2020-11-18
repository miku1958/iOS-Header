//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoProcessing/VCPVideoMetaAnalyzer.h>

@class NSMutableArray, NSMutableData, VCPVideoMetaFocusAnalyzer, VCPVideoMetaLensSwitchAnalyzer, VCPVideoMetaMotionAnalyzer;

@interface VCPVideoMetaLivePhotoMetaAnalyzer : VCPVideoMetaAnalyzer
{
    struct CGVector _prevEstimatedCenterMv;
    NSMutableData *_deSerializedMetaBuffer;
    VCPVideoMetaFocusAnalyzer *_metaFocusAnalyzer;
    VCPVideoMetaMotionAnalyzer *_metaMotionAnalyzer;
    unsigned long long _requestAnalyses;
    NSMutableArray *_metadataStabilizationArray;
    NSMutableArray *_frameTimestampArray;
    NSMutableArray *_originalFrameTimestampArray;
    VCPVideoMetaLensSwitchAnalyzer *_metaLensSwitchAnalzer;
    BOOL _gyroHomographyIsValid;
    struct CGSize _gyroHomographyDimension;
}

+ (id)defaultDesiredKeys;
+ (id)referenceSoftwareStackVersion;
- (void).cxx_destruct;
- (float)compareNumericVersion:(id)arg1 withReferenceVersion:(id)arg2;
- (float)compareSoftwareStackVersion:(id)arg1 withReferenceVersion:(id)arg2;
- (int)convertLivePhotoBinary:(id)arg1 toDictionary:(id)arg2;
- (int)convertLivePhotoStruct:(struct FigLivePhotoMetadata *)arg1 toDictionary:(id)arg2;
- (int)finalizeAnalysis;
- (struct __CFData *)getFirstAtomWithFourCharCode:(unsigned int)arg1 fromSetupData:(struct __CFData *)arg2;
- (struct __CFData *)getSetupDataFrom:(struct opaqueCMFormatDescription *)arg1;
- (BOOL)gyroHomographyVersionIsValid:(struct opaqueCMFormatDescription *)arg1;
- (id)init;
- (id)initWithRequestAnalyses:(unsigned long long)arg1 formatDescription:(struct opaqueCMFormatDescription *)arg2;
- (id)privateResults;
- (int)processMetadataGroup:(id)arg1 flags:(unsigned long long *)arg2;
- (struct CGSize)readGyroHomographyDimension:(struct opaqueCMFormatDescription *)arg1;
- (id)readSoftwareStackVersion:(struct opaqueCMFormatDescription *)arg1;

@end
