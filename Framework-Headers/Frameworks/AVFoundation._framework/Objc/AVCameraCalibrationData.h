//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCameraCalibrationDataInternal, NSData;

@interface AVCameraCalibrationData : NSObject
{
    AVCameraCalibrationDataInternal *_internal;
}

@property (readonly, nonatomic) CDStruct_14d5dc5e extrinsicMatrix;
@property (readonly, nonatomic) CDStruct_8e0628e6 intrinsicMatrix;
@property (readonly, nonatomic) struct CGSize intrinsicMatrixReferenceDimensions;
@property (readonly, nonatomic) NSData *inverseLensDistortionLookupTable;
@property (readonly, nonatomic) struct CGPoint lensDistortionCenter;
@property (readonly, nonatomic) NSData *lensDistortionLookupTable;
@property (readonly, nonatomic) float pixelSize;

- (id)_distortionLookupTableFromCoefficients:(id)arg1 distortionCenter:(struct CGPoint)arg2 pixelSize:(float)arg3 referenceDimensions:(struct CGSize)arg4 lookupTableLength:(int)arg5;
- (id)_initEmpty;
- (id)cameraCalibrationDataWithExifOrientation:(unsigned int)arg1;
- (struct CGImageMetadata *)copyAuxiliaryMetadata;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)initWithAuxiliaryMetadata:(struct CGImageMetadata *)arg1;
- (id)initWithDepthMetadataDictionary:(id)arg1;

@end

