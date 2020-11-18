//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSArray, NSDictionary, NSNumber, NSObject, NSString;

__attribute__((visibility("hidden")))
@interface CIRAWFilterImpl : CIFilter
{
    struct CGImageSource *_inputImageSource;
    NSArray *_inputImageAndProperties;
    CIImage *_inputImage;
    CIImage *_tempImage;
    struct CGSize _nativeSize;
    BOOL _isRawSource;
    BOOL _calledDealloc;
    NSDictionary *_baseImageProperties;
    NSDictionary *_rawDictionary;
    NSDictionary *_rawReconstructionDefaultsDictionary;
    NSArray *_supportedSushiModes;
    NSArray *_supportedDecoderVersions;
    NSArray *_filters;
    NSObject *_typeIdentifierHint;
    NSNumber *_defaultOrientation;
    NSArray *_neutralColour;
    NSString *inputRequestedSushiMode;
    NSNumber *inputNeutralChromaticityX;
    NSNumber *inputNeutralChromaticityY;
    NSNumber *inputNeutralTemperature;
    NSNumber *inputNeutralTint;
    CIVector *inputNeutralLocation;
    NSNumber *inputEV;
    NSNumber *inputBoost;
    NSNumber *inputDraftMode;
    NSNumber *inputScaleFactor;
    NSNumber *inputIgnoreOrientation;
    NSNumber *inputImageOrientation;
    NSNumber *inputEnableSharpening;
    NSNumber *inputEnableNoiseTracking;
    NSNumber *inputEnableVendorLensCorrection;
    NSNumber *inputNoiseReductionAmount;
    NSNumber *inputLuminanceNoiseReductionAmount;
    NSNumber *inputColorNoiseReductionAmount;
    NSNumber *inputNoiseReductionSharpnessAmount;
    NSNumber *inputNoiseReductionContrastAmount;
    NSNumber *inputNoiseReductionDetailAmount;
    NSString *inputDecoderVersion;
    NSNumber *inputBoostShadowAmount;
    NSNumber *inputBias;
    NSNumber *inputBaselineExposure;
    NSNumber *inputDisableGamutMap;
    NSNumber *inputHueMagMR;
    NSNumber *inputHueMagRY;
    NSNumber *inputHueMagYG;
    NSNumber *inputHueMagGC;
    NSNumber *inputHueMagCB;
    NSNumber *inputHueMagBM;
    CIFilter *inputLinearSpaceFilter;
}

@property (readonly, strong) NSArray *filters;
@property (readonly) struct CGSize nativeSize;
@property (readonly, strong) NSDictionary *rawDictionary;
@property (readonly) int rawMajorVersion;
@property (readonly, strong) NSDictionary *rawReconstructionDefaultsDictionary;
@property (readonly) int subsampling;
@property (readonly, strong) NSNumber *sushiMode;

+ (id)applyMatrix:(const double *)arg1 toCIImage:(id)arg2;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)convertNeutralTemperature:(id)arg1 tint:(id)arg2 toX:(id *)arg3 y:(id *)arg4;
+ (void)convertNeutralX:(id)arg1 y:(id)arg2 toTemperature:(id *)arg3 tint:(id *)arg4;
+ (id)customAttributes;
+ (id)filterWithCVPixelBuffer:(struct __CVBuffer *)arg1 properties:(id)arg2 options:(id)arg3;
+ (id)filterWithImageData:(id)arg1 options:(id)arg2;
+ (id)filterWithImageURL:(id)arg1 options:(id)arg2;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)optionKeys;
- (id)RAWFiltersValueForKeyPath:(id)arg1;
- (id)activeKeys;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)defaultBoostShadowAmount;
- (id)defaultDecoderVersion;
- (id)defaultImageOrientation;
- (id)defaultInputBaselineExposureAmount;
- (id)defaultInputBiasAmount;
- (id)defaultInputColorNoiseReductionAmount;
- (id)defaultInputEnableVendorLensCorrection;
- (id)defaultInputHueMagBMAmount;
- (id)defaultInputHueMagCBAmount;
- (id)defaultInputHueMagGCAmount;
- (id)defaultInputHueMagMRAmount;
- (id)defaultInputHueMagRYAmount;
- (id)defaultInputHueMagYGAmount;
- (id)defaultInputLuminanceNoiseReductionAmount;
- (id)defaultInputNoiseReductionContrastAmount;
- (id)defaultInputNoiseReductionDetailAmount;
- (id)defaultInputNoiseReductionSharpnessAmount;
- (id)defaultNeutralChromaticityX;
- (id)defaultNeutralChromaticityY;
- (id)defaultNeutralTemperature;
- (id)defaultNeutralTint;
- (struct CGAffineTransform)getOrientationTransform;
- (struct CGAffineTransform)getScaleTransform;
- (void)getWhitePointVectorsR:(id *)arg1 g:(id *)arg2 b:(id *)arg3;
- (id)init;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 properties:(id)arg2 options:(id)arg3;
- (id)initWithImageSource:(struct CGImageSource *)arg1 options:(id)arg2;
- (id)inputBaselineExposure;
- (id)inputBias;
- (id)inputDisableGamutMap;
- (id)inputHueMagBM;
- (id)inputHueMagCB;
- (id)inputHueMagGC;
- (id)inputHueMagMR;
- (id)inputHueMagRY;
- (id)inputHueMagYG;
- (id)inputImage;
- (id)inputLinearSpaceFilter;
- (id)inputNeutralChromaticityX;
- (id)inputNeutralChromaticityY;
- (id)inputNeutralLocation;
- (id)inputNeutralTemperature;
- (id)inputNeutralTint;
- (void)invalidateFilters;
- (void)invalidateInputImage;
- (id)outputImage;
- (id)outputKeys;
- (id)outputNativeSize;
- (id)rawOptions;
- (id)rawOptionsWithSubsampling:(BOOL)arg1;
- (void)setDefaults;
- (void)setInputBaselineExposure:(id)arg1;
- (void)setInputBias:(id)arg1;
- (void)setInputBoost:(id)arg1;
- (void)setInputBoostShadowAmount:(id)arg1;
- (void)setInputColorNoiseReductionAmount:(id)arg1;
- (void)setInputDecoderVersion:(id)arg1;
- (void)setInputDisableGamutMap:(id)arg1;
- (void)setInputDraftMode:(id)arg1;
- (void)setInputEV:(id)arg1;
- (void)setInputEnableNoiseTracking:(id)arg1;
- (void)setInputEnableSharpening:(id)arg1;
- (void)setInputEnableVendorLensCorrection:(id)arg1;
- (void)setInputHueMagBM:(id)arg1;
- (void)setInputHueMagCB:(id)arg1;
- (void)setInputHueMagGC:(id)arg1;
- (void)setInputHueMagMR:(id)arg1;
- (void)setInputHueMagRY:(id)arg1;
- (void)setInputHueMagYG:(id)arg1;
- (void)setInputIgnoreOrientation:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputImageOrientation:(id)arg1;
- (void)setInputLinearSpaceFilter:(id)arg1;
- (void)setInputLuminanceNoiseReductionAmount:(id)arg1;
- (void)setInputNeutralChromaticityX:(id)arg1;
- (void)setInputNeutralChromaticityY:(id)arg1;
- (void)setInputNeutralLocation:(id)arg1;
- (void)setInputNeutralTemperature:(id)arg1;
- (void)setInputNeutralTint:(id)arg1;
- (void)setInputNoiseReductionAmount:(id)arg1;
- (void)setInputNoiseReductionContrastAmount:(id)arg1;
- (void)setInputNoiseReductionDetailAmount:(id)arg1;
- (void)setInputNoiseReductionSharpnessAmount:(id)arg1;
- (void)setInputRequestedSushiMode:(id)arg1;
- (void)setInputScaleFactor:(id)arg1;
- (void)setTempTintAtPoint:(struct CGPoint)arg1;
- (id)supportedDecoderVersions;
- (id)supportedSushiModes;
- (void)updateChomaticityXAndY;
- (void)updateTemperatureAndTint;
- (id)whitePoint;
- (id)whitePointArray;

@end

