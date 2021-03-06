//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIRedEyeRaw : CIFilter
{
    CIImage *inputPrimary;
    CIImage *inputSecondary;
    CIVector *inputSize;
    CIVector *inputOriginLeft;
    CIVector *inputOriginRight;
    CIVector *inputAxisShortLeft;
    CIVector *inputAxisShortRight;
    CIVector *inputAxisLongLeft;
    CIVector *inputAxisLongRight;
    CIVector *inputPupilCenterLeft;
    CIVector *inputPupilCenterRight;
    NSNumber *inputOrientationHint;
    NSNumber *inputOrientationScale;
    NSNumber *inputRepairSource;
    NSNumber *inputRepairDarken;
    NSNumber *inputRepairChroma;
    NSNumber *inputCutoff;
    NSNumber *inputSpecMin;
    NSNumber *inputSpecMax;
    NSNumber *inputSpecular;
    NSNumber *inputSpecIntensity;
    NSNumber *inputShowMask;
    NSNumber *inputRepairPercent;
    NSNumber *inputInterPeakMin;
    NSNumber *inputRepairPercentile;
    NSNumber *inputClipMin;
    NSNumber *inputMidSpectrumWhiteOffsetsX;
    NSNumber *inputMidSpectrumWhiteOffsetsY;
    NSNumber *inputClosingErosion;
    NSNumber *inputClosingDilation;
    NSNumber *inputSplat;
    NSNumber *inputFlooding;
    NSNumber *inputGamma;
    NSNumber *inputFeathering;
    NSNumber *inputFSmooth;
    NSNumber *inputRepairDither;
    NSNumber *inputRecover;
    NSNumber *inputSpecArea;
    NSNumber *inputSpecAreaScale;
    NSNumber *inputWhiteCutoff;
    NSNumber *inputSpecularCutoff;
    NSNumber *inputAbortDensityLo;
    NSNumber *inputAbortDensityDiff;
    NSNumber *inputCircularity;
    NSNumber *inputIntersect;
    NSNumber *inputSkinThreshold;
    NSNumber *inputSkinThresholdMed;
    NSNumber *inputScleraThreshold;
    NSNumber *inputCenterSpecRad;
    NSNumber *inputFalloffDensity;
    NSNumber *inputFalloffRepair;
    NSNumber *inputFalloffSpecular;
    NSNumber *inputRadiusRepair;
    NSNumber *inputRadiusDensity;
    NSNumber *inputRadiusSpecular;
    NSNumber *inputCentroidIterations;
    NSNumber *inputCentroidGamma;
    NSNumber *inputCentroidRadius;
    NSNumber *inputCentroidRadiusSmall;
    NSNumber *inputSearchLong;
    NSNumber *inputSearchShort;
    NSNumber *inputScale;
    NSNumber *inputParam;
    NSNumber *inputParam2;
    NSNumber *inputParam3;
    NSNumber *inputParam4;
    NSNumber *inputRefilterSpace;
    NSNumber *inputRefilterRange;
    NSNumber *inputDetectWhite;
    NSNumber *inputDetectRed;
    NSNumber *inputMinInterDispersion;
    NSNumber *inputMaxInterDispersion;
    NSNumber *inputMinMaskDiff;
    NSNumber *inputGlintThreshold;
    NSNumber *inputTargetClosing;
    NSNumber *inputUseFaceSegmentationMask;
    NSNumber *inputDetectionThresholdIrisSmall;
    NSNumber *inputDetectionThresholdScleraSmall;
    NSNumber *inputDetectionThresholdSkinSmall;
    NSNumber *inputScleraProtectionThresholdIrisSmall;
    NSNumber *inputScleraProtectionThresholdScleraSmall;
    NSNumber *inputScleraProtectionThresholdSkinSmall;
    NSNumber *inputSkinProtectionThresholdSmall;
    NSNumber *inputDetectionThresholdIrisMedium;
    NSNumber *inputDetectionThresholdScleraMedium;
    NSNumber *inputDetectionThresholdSkinMedium;
    NSNumber *inputScleraProtectionThresholdIrisMedium;
    NSNumber *inputScleraProtectionThresholdScleraMedium;
    NSNumber *inputScleraProtectionThresholdSkinMedium;
    NSNumber *inputSkinProtectionThresholdMedium;
    NSNumber *inputDetectionThresholdIrisLarge;
    NSNumber *inputDetectionThresholdScleraLarge;
    NSNumber *inputDetectionThresholdSkinLarge;
    NSNumber *inputScleraProtectionThresholdIrisLarge;
    NSNumber *inputScleraProtectionThresholdScleraLarge;
    NSNumber *inputScleraProtectionThresholdSkinLarge;
    NSNumber *inputSkinProtectionThresholdLarge;
    CIImage *inputIrisMask;
    CIImage *inputScleraMask;
    CIImage *inputSkinMask;
}

@property (strong, nonatomic) NSNumber *inputAbortDensityDiff; // @synthesize inputAbortDensityDiff;
@property (strong, nonatomic) NSNumber *inputAbortDensityLo; // @synthesize inputAbortDensityLo;
@property (strong, nonatomic) CIVector *inputAxisLongLeft; // @synthesize inputAxisLongLeft;
@property (strong, nonatomic) CIVector *inputAxisLongRight; // @synthesize inputAxisLongRight;
@property (strong, nonatomic) CIVector *inputAxisShortLeft; // @synthesize inputAxisShortLeft;
@property (strong, nonatomic) CIVector *inputAxisShortRight; // @synthesize inputAxisShortRight;
@property (strong, nonatomic) NSNumber *inputCenterSpecRad; // @synthesize inputCenterSpecRad;
@property (strong, nonatomic) NSNumber *inputCentroidGamma; // @synthesize inputCentroidGamma;
@property (strong, nonatomic) NSNumber *inputCentroidIterations; // @synthesize inputCentroidIterations;
@property (strong, nonatomic) NSNumber *inputCentroidRadius; // @synthesize inputCentroidRadius;
@property (strong, nonatomic) NSNumber *inputCentroidRadiusSmall; // @synthesize inputCentroidRadiusSmall;
@property (strong, nonatomic) NSNumber *inputCircularity; // @synthesize inputCircularity;
@property (strong, nonatomic) NSNumber *inputClipMin; // @synthesize inputClipMin;
@property (strong, nonatomic) NSNumber *inputClosingDilation; // @synthesize inputClosingDilation;
@property (strong, nonatomic) NSNumber *inputClosingErosion; // @synthesize inputClosingErosion;
@property (strong, nonatomic) NSNumber *inputCutoff; // @synthesize inputCutoff;
@property (strong, nonatomic) NSNumber *inputDetectRed; // @synthesize inputDetectRed;
@property (strong, nonatomic) NSNumber *inputDetectWhite; // @synthesize inputDetectWhite;
@property (strong, nonatomic) NSNumber *inputDetectionThresholdIrisLarge; // @synthesize inputDetectionThresholdIrisLarge;
@property (strong, nonatomic) NSNumber *inputDetectionThresholdIrisMedium; // @synthesize inputDetectionThresholdIrisMedium;
@property (strong, nonatomic) NSNumber *inputDetectionThresholdIrisSmall; // @synthesize inputDetectionThresholdIrisSmall;
@property (strong, nonatomic) NSNumber *inputDetectionThresholdScleraLarge; // @synthesize inputDetectionThresholdScleraLarge;
@property (strong, nonatomic) NSNumber *inputDetectionThresholdScleraMedium; // @synthesize inputDetectionThresholdScleraMedium;
@property (strong, nonatomic) NSNumber *inputDetectionThresholdScleraSmall; // @synthesize inputDetectionThresholdScleraSmall;
@property (strong, nonatomic) NSNumber *inputDetectionThresholdSkinLarge; // @synthesize inputDetectionThresholdSkinLarge;
@property (strong, nonatomic) NSNumber *inputDetectionThresholdSkinMedium; // @synthesize inputDetectionThresholdSkinMedium;
@property (strong, nonatomic) NSNumber *inputDetectionThresholdSkinSmall; // @synthesize inputDetectionThresholdSkinSmall;
@property (strong, nonatomic) NSNumber *inputFSmooth; // @synthesize inputFSmooth;
@property (strong, nonatomic) NSNumber *inputFalloffDensity; // @synthesize inputFalloffDensity;
@property (strong, nonatomic) NSNumber *inputFalloffRepair; // @synthesize inputFalloffRepair;
@property (strong, nonatomic) NSNumber *inputFalloffSpecular; // @synthesize inputFalloffSpecular;
@property (strong, nonatomic) NSNumber *inputFeathering; // @synthesize inputFeathering;
@property (strong, nonatomic) NSNumber *inputFlooding; // @synthesize inputFlooding;
@property (strong, nonatomic) NSNumber *inputGamma; // @synthesize inputGamma;
@property (strong, nonatomic) NSNumber *inputGlintThreshold; // @synthesize inputGlintThreshold;
@property (strong, nonatomic) NSNumber *inputInterPeakMin; // @synthesize inputInterPeakMin;
@property (strong, nonatomic) NSNumber *inputIntersect; // @synthesize inputIntersect;
@property (strong, nonatomic) CIImage *inputIrisMask; // @synthesize inputIrisMask;
@property (strong, nonatomic) NSNumber *inputMaxInterDispersion; // @synthesize inputMaxInterDispersion;
@property (strong, nonatomic) NSNumber *inputMidSpectrumWhiteOffsetsX; // @synthesize inputMidSpectrumWhiteOffsetsX;
@property (strong, nonatomic) NSNumber *inputMidSpectrumWhiteOffsetsY; // @synthesize inputMidSpectrumWhiteOffsetsY;
@property (strong, nonatomic) NSNumber *inputMinInterDispersion; // @synthesize inputMinInterDispersion;
@property (strong, nonatomic) NSNumber *inputMinMaskDiff; // @synthesize inputMinMaskDiff;
@property (strong, nonatomic) NSNumber *inputOrientationHint; // @synthesize inputOrientationHint;
@property (strong, nonatomic) NSNumber *inputOrientationScale; // @synthesize inputOrientationScale;
@property (strong, nonatomic) CIVector *inputOriginLeft; // @synthesize inputOriginLeft;
@property (strong, nonatomic) CIVector *inputOriginRight; // @synthesize inputOriginRight;
@property (strong, nonatomic) NSNumber *inputParam; // @synthesize inputParam;
@property (strong, nonatomic) NSNumber *inputParam2; // @synthesize inputParam2;
@property (strong, nonatomic) NSNumber *inputParam3; // @synthesize inputParam3;
@property (strong, nonatomic) NSNumber *inputParam4; // @synthesize inputParam4;
@property (strong, nonatomic) CIImage *inputPrimary; // @synthesize inputPrimary;
@property (strong, nonatomic) CIVector *inputPupilCenterLeft; // @synthesize inputPupilCenterLeft;
@property (strong, nonatomic) CIVector *inputPupilCenterRight; // @synthesize inputPupilCenterRight;
@property (strong, nonatomic) NSNumber *inputRadiusDensity; // @synthesize inputRadiusDensity;
@property (strong, nonatomic) NSNumber *inputRadiusRepair; // @synthesize inputRadiusRepair;
@property (strong, nonatomic) NSNumber *inputRadiusSpecular; // @synthesize inputRadiusSpecular;
@property (strong, nonatomic) NSNumber *inputRecover; // @synthesize inputRecover;
@property (strong, nonatomic) NSNumber *inputRefilterRange; // @synthesize inputRefilterRange;
@property (strong, nonatomic) NSNumber *inputRefilterSpace; // @synthesize inputRefilterSpace;
@property (strong, nonatomic) NSNumber *inputRepairChroma; // @synthesize inputRepairChroma;
@property (strong, nonatomic) NSNumber *inputRepairDarken; // @synthesize inputRepairDarken;
@property (strong, nonatomic) NSNumber *inputRepairDither; // @synthesize inputRepairDither;
@property (strong, nonatomic) NSNumber *inputRepairPercent; // @synthesize inputRepairPercent;
@property (strong, nonatomic) NSNumber *inputRepairPercentile; // @synthesize inputRepairPercentile;
@property (strong, nonatomic) NSNumber *inputRepairSource; // @synthesize inputRepairSource;
@property (strong, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property (strong, nonatomic) CIImage *inputScleraMask; // @synthesize inputScleraMask;
@property (strong, nonatomic) NSNumber *inputScleraProtectionThresholdIrisLarge; // @synthesize inputScleraProtectionThresholdIrisLarge;
@property (strong, nonatomic) NSNumber *inputScleraProtectionThresholdIrisMedium; // @synthesize inputScleraProtectionThresholdIrisMedium;
@property (strong, nonatomic) NSNumber *inputScleraProtectionThresholdIrisSmall; // @synthesize inputScleraProtectionThresholdIrisSmall;
@property (strong, nonatomic) NSNumber *inputScleraProtectionThresholdScleraLarge; // @synthesize inputScleraProtectionThresholdScleraLarge;
@property (strong, nonatomic) NSNumber *inputScleraProtectionThresholdScleraMedium; // @synthesize inputScleraProtectionThresholdScleraMedium;
@property (strong, nonatomic) NSNumber *inputScleraProtectionThresholdScleraSmall; // @synthesize inputScleraProtectionThresholdScleraSmall;
@property (strong, nonatomic) NSNumber *inputScleraProtectionThresholdSkinLarge; // @synthesize inputScleraProtectionThresholdSkinLarge;
@property (strong, nonatomic) NSNumber *inputScleraProtectionThresholdSkinMedium; // @synthesize inputScleraProtectionThresholdSkinMedium;
@property (strong, nonatomic) NSNumber *inputScleraProtectionThresholdSkinSmall; // @synthesize inputScleraProtectionThresholdSkinSmall;
@property (strong, nonatomic) NSNumber *inputScleraThreshold; // @synthesize inputScleraThreshold;
@property (strong, nonatomic) NSNumber *inputSearchLong; // @synthesize inputSearchLong;
@property (strong, nonatomic) NSNumber *inputSearchShort; // @synthesize inputSearchShort;
@property (strong, nonatomic) CIImage *inputSecondary; // @synthesize inputSecondary;
@property (strong, nonatomic) NSNumber *inputShowMask; // @synthesize inputShowMask;
@property (strong, nonatomic) CIVector *inputSize; // @synthesize inputSize;
@property (strong, nonatomic) CIImage *inputSkinMask; // @synthesize inputSkinMask;
@property (strong, nonatomic) NSNumber *inputSkinProtectionThresholdLarge; // @synthesize inputSkinProtectionThresholdLarge;
@property (strong, nonatomic) NSNumber *inputSkinProtectionThresholdMedium; // @synthesize inputSkinProtectionThresholdMedium;
@property (strong, nonatomic) NSNumber *inputSkinProtectionThresholdSmall; // @synthesize inputSkinProtectionThresholdSmall;
@property (strong, nonatomic) NSNumber *inputSkinThreshold; // @synthesize inputSkinThreshold;
@property (strong, nonatomic) NSNumber *inputSkinThresholdMed; // @synthesize inputSkinThresholdMed;
@property (strong, nonatomic) NSNumber *inputSpecArea; // @synthesize inputSpecArea;
@property (strong, nonatomic) NSNumber *inputSpecAreaScale; // @synthesize inputSpecAreaScale;
@property (strong, nonatomic) NSNumber *inputSpecIntensity; // @synthesize inputSpecIntensity;
@property (strong, nonatomic) NSNumber *inputSpecMax; // @synthesize inputSpecMax;
@property (strong, nonatomic) NSNumber *inputSpecMin; // @synthesize inputSpecMin;
@property (strong, nonatomic) NSNumber *inputSpecular; // @synthesize inputSpecular;
@property (strong, nonatomic) NSNumber *inputSpecularCutoff; // @synthesize inputSpecularCutoff;
@property (strong, nonatomic) NSNumber *inputSplat; // @synthesize inputSplat;
@property (strong, nonatomic) NSNumber *inputTargetClosing; // @synthesize inputTargetClosing;
@property (strong, nonatomic) NSNumber *inputUseFaceSegmentationMask; // @synthesize inputUseFaceSegmentationMask;
@property (strong, nonatomic) NSNumber *inputWhiteCutoff; // @synthesize inputWhiteCutoff;

- (id)irisProtectionMaskWithThresholdIris:(float)arg1 thresholdSclera:(float)arg2 thresholdSkin:(float)arg3;
- (id)outputImage;
- (id)skinProtectionMaskWithThreshold:(float)arg1;

@end

