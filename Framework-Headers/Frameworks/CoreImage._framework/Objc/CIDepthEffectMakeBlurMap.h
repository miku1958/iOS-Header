//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class AVCameraCalibrationData, CIImage, CIVector, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDepthEffectMakeBlurMap : CIFilter
{
    CIImage *inputImage;
    CIImage *inputShiftmapImage;
    CIImage *inputMatteImage;
    NSNumber *inputAperture;
    CIVector *inputLeftEyePosition;
    CIVector *inputRightEyePosition;
    CIVector *inputChinPosition;
    CIVector *inputFaceMidPoint;
    CIVector *inputFocusRect;
    NSNumber *inputScale;
    AVCameraCalibrationData *inputCalibrationData;
    id inputAuxDataMetadata;
    NSDictionary *tuningParameters;
    float simulatedAperture;
    NSNumber *inputDraftMode;
}

@property (copy, nonatomic) NSNumber *inputAperture; // @synthesize inputAperture;
@property (strong, nonatomic) id inputAuxDataMetadata; // @synthesize inputAuxDataMetadata;
@property (strong, nonatomic) AVCameraCalibrationData *inputCalibrationData; // @synthesize inputCalibrationData;
@property (strong) CIVector *inputChinPosition; // @synthesize inputChinPosition;
@property (strong, nonatomic) NSNumber *inputDraftMode; // @synthesize inputDraftMode;
@property (strong) CIVector *inputFaceMidPoint; // @synthesize inputFaceMidPoint;
@property (strong, nonatomic) CIVector *inputFocusRect; // @synthesize inputFocusRect;
@property (strong) CIImage *inputImage; // @synthesize inputImage;
@property (strong) CIVector *inputLeftEyePosition; // @synthesize inputLeftEyePosition;
@property (strong) CIImage *inputMatteImage; // @synthesize inputMatteImage;
@property (strong) CIVector *inputRightEyePosition; // @synthesize inputRightEyePosition;
@property (copy, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property (strong) CIImage *inputShiftmapImage; // @synthesize inputShiftmapImage;

+ (id)customAttributes;
- (id)blurMapV2:(id)arg1;
- (id)blurMapV3:(id)arg1 shiftmap:(id)arg2 alphaImage:(id)arg3;
- (id)calibrationData;
- (id)faceMaskApply:(id)arg1 blurMap:(id)arg2;
- (id)faceMaskParams:(id)arg1;
- (float)intrinsicMatrixFocalLength;
- (id)lensModelApply:(id)arg1 shiftMap:(id)arg2;
- (id)lensModelParams:(id)arg1;
- (BOOL)needToRunFaceMask;
- (struct CGSize)originalShiftMapSize;
- (id)outputImage;
- (id)refineShiftMapV3WithMainImage:(id)arg1 shiftmap:(id)arg2 lensModel:(id)arg3;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)smoothShiftMapV2:(id)arg1;
- (id)upsampledShiftMap:(id)arg1;

@end

