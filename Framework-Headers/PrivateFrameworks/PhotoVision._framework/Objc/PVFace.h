//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoVision/PVObject.h>

#import <PhotoVision/PFPhotosFaceRepresentation-Protocol.h>

@class NSString, PVFaceprint;

@interface PVFace : PVObject <PFPhotosFaceRepresentation>
{
    BOOL _hidden;
    BOOL _isInTrash;
    BOOL _manual;
    BOOL _isTooSmall;
    BOOL _hasSmile;
    BOOL _isLeftEyeClosed;
    BOOL _isRightEyeClosed;
    int _trainingType;
    unsigned int _faceAlgorithmVersion;
    NSString *_personLocalIdentifier;
    long long _sourceWidth;
    long long _sourceHeight;
    double _centerX;
    double _centerY;
    double _size;
    double _leftEyeX;
    double _leftEyeY;
    double _rightEyeX;
    double _rightEyeY;
    double _mouthX;
    double _mouthY;
    double _blurScore;
    double _exposureScore;
    NSString *_adjustmentVersion;
    long long _nameSource;
    double _poseYaw;
    long long _clusterSequenceNumber;
    long long _qualityMeasure;
    NSString *_ageType;
    NSString *_sexType;
    NSString *_eyesState;
    NSString *_smileType;
    NSString *_facialHairType;
    NSString *_hairColorType;
    NSString *_baldType;
    NSString *_glassesType;
    NSString *_eyeMakeupType;
    NSString *_lipMakeupType;
    NSString *_groupingIdentifier;
    PVFaceprint *_faceprint;
    double _roll;
    double _quality;
}

@property (copy, nonatomic) NSString *adjustmentVersion; // @synthesize adjustmentVersion=_adjustmentVersion;
@property (nonatomic) NSString *ageType; // @synthesize ageType=_ageType;
@property (nonatomic) NSString *baldType; // @synthesize baldType=_baldType;
@property (nonatomic) double blurScore; // @synthesize blurScore=_blurScore;
@property (nonatomic) double centerX; // @synthesize centerX=_centerX;
@property (nonatomic) double centerY; // @synthesize centerY=_centerY;
@property (nonatomic) long long clusterSequenceNumber; // @synthesize clusterSequenceNumber=_clusterSequenceNumber;
@property (nonatomic) double exposureScore; // @synthesize exposureScore=_exposureScore;
@property (nonatomic) NSString *eyeMakeupType; // @synthesize eyeMakeupType=_eyeMakeupType;
@property (nonatomic) NSString *eyesState; // @synthesize eyesState=_eyesState;
@property (nonatomic) unsigned int faceAlgorithmVersion; // @synthesize faceAlgorithmVersion=_faceAlgorithmVersion;
@property (strong, nonatomic) PVFaceprint *faceprint; // @synthesize faceprint=_faceprint;
@property (nonatomic) NSString *facialHairType; // @synthesize facialHairType=_facialHairType;
@property (nonatomic) NSString *genderType;
@property (nonatomic) NSString *glassesType; // @synthesize glassesType=_glassesType;
@property (copy, nonatomic) NSString *groupingIdentifier; // @synthesize groupingIdentifier=_groupingIdentifier;
@property (nonatomic) NSString *hairColorType; // @synthesize hairColorType=_hairColorType;
@property (nonatomic) BOOL hasSmile; // @synthesize hasSmile=_hasSmile;
@property (nonatomic) BOOL hidden; // @synthesize hidden=_hidden;
@property (nonatomic) BOOL isInTrash; // @synthesize isInTrash=_isInTrash;
@property (nonatomic) BOOL isLeftEyeClosed; // @synthesize isLeftEyeClosed=_isLeftEyeClosed;
@property (nonatomic) BOOL isRightEyeClosed; // @synthesize isRightEyeClosed=_isRightEyeClosed;
@property (nonatomic) BOOL isTooSmall; // @synthesize isTooSmall=_isTooSmall;
@property (nonatomic) double leftEyeX; // @synthesize leftEyeX=_leftEyeX;
@property (nonatomic) double leftEyeY; // @synthesize leftEyeY=_leftEyeY;
@property (nonatomic) NSString *lipMakeupType; // @synthesize lipMakeupType=_lipMakeupType;
@property (nonatomic) BOOL manual; // @synthesize manual=_manual;
@property (nonatomic) double mouthX; // @synthesize mouthX=_mouthX;
@property (nonatomic) double mouthY; // @synthesize mouthY=_mouthY;
@property (nonatomic) long long nameSource; // @synthesize nameSource=_nameSource;
@property (copy, nonatomic) NSString *personLocalIdentifier; // @synthesize personLocalIdentifier=_personLocalIdentifier;
@property (nonatomic) double poseYaw; // @synthesize poseYaw=_poseYaw;
@property (nonatomic) double quality; // @synthesize quality=_quality;
@property (nonatomic) long long qualityMeasure; // @synthesize qualityMeasure=_qualityMeasure;
@property (nonatomic) double rightEyeX; // @synthesize rightEyeX=_rightEyeX;
@property (nonatomic) double rightEyeY; // @synthesize rightEyeY=_rightEyeY;
@property (nonatomic) double roll; // @synthesize roll=_roll;
@property (nonatomic) NSString *sexType; // @synthesize sexType=_sexType;
@property (nonatomic) double size; // @synthesize size=_size;
@property (nonatomic) NSString *smileType; // @synthesize smileType=_smileType;
@property (nonatomic) long long sourceHeight; // @synthesize sourceHeight=_sourceHeight;
@property (nonatomic) long long sourceWidth; // @synthesize sourceWidth=_sourceWidth;
@property (nonatomic) int trainingType; // @synthesize trainingType=_trainingType;

+ (id)faceFromVNFaceObservation:(id)arg1 fromImage:(id)arg2 additionalVisionRequests:(id)arg3 faceAlgorithmUmbrellaVersion:(unsigned int)arg4 error:(id *)arg5;
+ (id)faceFromVNFaceObservation:(id)arg1 fromImageWithPixelWidth:(unsigned long long)arg2 pixelHeight:(unsigned long long)arg3 additionalVisionRequests:(id)arg4 faceAlgorithmUmbrellaVersion:(unsigned int)arg5 error:(id *)arg6;
+ (id)faceWithFace:(id)arg1 copyPropertiesOption:(long long)arg2;
- (void).cxx_destruct;
- (void)_copyPropertiesFrom:(id)arg1 copyPropertiesOption:(long long)arg2;
- (struct CGRect)absoluteFaceRect;
- (struct CGRect)absoluteFaceRectForImageSize:(struct CGSize)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (struct CGRect)normalizedFaceRect;
- (double)photosFaceRepresentationBlurScore;
- (double)photosFaceRepresentationCenterX;
- (double)photosFaceRepresentationCenterY;
- (long long)photosFaceRepresentationClusterSequenceNumber;
- (BOOL)photosFaceRepresentationHasSmile;
- (BOOL)photosFaceRepresentationIsLeftEyeClosed;
- (BOOL)photosFaceRepresentationIsRightEyeClosed;
- (id)photosFaceRepresentationLocalIdentifier;
- (double)photosFaceRepresentationQuality;
- (long long)photosFaceRepresentationQualityMeasure;
- (double)photosFaceRepresentationRoll;
- (double)photosFaceRepresentationSize;
- (long long)photosFaceRepresentationSourceHeight;
- (long long)photosFaceRepresentationSourceWidth;
- (BOOL)setCenterAndSizeFromNormalizedFaceRect:(struct CGRect)arg1;
- (void)setCoordinatesAndFeaturesFromFace:(id)arg1;

@end
