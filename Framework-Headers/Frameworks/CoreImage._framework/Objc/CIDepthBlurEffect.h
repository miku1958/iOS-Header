//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class AVCameraCalibrationData, CIImage, CIVector, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface CIDepthBlurEffect : CIFilter
{
    CIImage *inputImage;
    CIImage *inputDisparityImage;
    CIImage *inputMatteImage;
    CIImage *inputHairImage;
    NSNumber *inputAperture;
    CIVector *inputLeftEyePositions;
    CIVector *inputRightEyePositions;
    CIVector *inputChinPositions;
    CIVector *inputNosePositions;
    CIVector *inputFocusRect;
    NSNumber *inputLumaNoiseScale;
    NSNumber *inputScaleFactor;
    AVCameraCalibrationData *inputCalibrationData;
    id inputAuxDataMetadata;
    NSString *inputShape;
}

@property (strong, nonatomic) NSNumber *inputAperture; // @synthesize inputAperture;
@property (strong, nonatomic) id inputAuxDataMetadata; // @synthesize inputAuxDataMetadata;
@property (strong, nonatomic) AVCameraCalibrationData *inputCalibrationData; // @synthesize inputCalibrationData;
@property (strong) CIVector *inputChinPositions; // @synthesize inputChinPositions;
@property (strong) CIImage *inputDisparityImage; // @synthesize inputDisparityImage;
@property (strong, nonatomic) CIVector *inputFocusRect; // @synthesize inputFocusRect;
@property (strong) CIImage *inputHairImage; // @synthesize inputHairImage;
@property (strong) CIImage *inputImage; // @synthesize inputImage;
@property (strong) CIVector *inputLeftEyePositions; // @synthesize inputLeftEyePositions;
@property (strong, nonatomic) NSNumber *inputLumaNoiseScale; // @synthesize inputLumaNoiseScale;
@property (strong) CIImage *inputMatteImage; // @synthesize inputMatteImage;
@property (strong) CIVector *inputNosePositions; // @synthesize inputNosePositions;
@property (strong) CIVector *inputRightEyePositions; // @synthesize inputRightEyePositions;
@property (strong, nonatomic) NSNumber *inputScaleFactor; // @synthesize inputScaleFactor;
@property (strong, nonatomic) NSString *inputShape; // @synthesize inputShape;

+ (struct CGImageMetadata *)augmentMetadataWithRenderingPropertiesForImage:(id)arg1;
+ (id)customAttributes;
+ (int)getDraftMode:(id)arg1;
+ (struct CGImageMetadata *)metadataFromDictionary:(id)arg1 metadata:(struct CGImageMetadata *)arg2;
+ (struct CGImageMetadata *)replaceRenderingParameters:(struct CGImageMetadata *)arg1 tuningParameters:(id)arg2;
+ (id)tuningParametersFromMetadata:(struct CGImageMetadata *)arg1;
- (id)_getFocusRect:(id)arg1 focusRect:(id)arg2;
- (id)outputImage;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end
