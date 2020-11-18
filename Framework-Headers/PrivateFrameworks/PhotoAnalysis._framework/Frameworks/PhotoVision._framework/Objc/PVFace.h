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
    double _poseRoll;
    double _poseYaw;
    double _posePitch;
    double _expressionConfidence;
    long long _expressionType1;
    long long _expressionType2;
    long long _expressionType3;
    double _expressionScore1;
    double _expressionScore2;
    double _expressionScore3;
    long long _clusterSequenceNumber;
    long long _qualityMeasure;
    PVFaceprint *_faceprint;
}

@property (copy, nonatomic) NSString *adjustmentVersion; // @synthesize adjustmentVersion=_adjustmentVersion;
@property (nonatomic) double blurScore; // @synthesize blurScore=_blurScore;
@property (nonatomic) double centerX; // @synthesize centerX=_centerX;
@property (nonatomic) double centerY; // @synthesize centerY=_centerY;
@property (nonatomic) long long clusterSequenceNumber; // @synthesize clusterSequenceNumber=_clusterSequenceNumber;
@property (nonatomic) double exposureScore; // @synthesize exposureScore=_exposureScore;
@property (nonatomic) double expressionConfidence; // @synthesize expressionConfidence=_expressionConfidence;
@property (nonatomic) double expressionScore1; // @synthesize expressionScore1=_expressionScore1;
@property (nonatomic) double expressionScore2; // @synthesize expressionScore2=_expressionScore2;
@property (nonatomic) double expressionScore3; // @synthesize expressionScore3=_expressionScore3;
@property (nonatomic) long long expressionType1; // @synthesize expressionType1=_expressionType1;
@property (nonatomic) long long expressionType2; // @synthesize expressionType2=_expressionType2;
@property (nonatomic) long long expressionType3; // @synthesize expressionType3=_expressionType3;
@property (nonatomic) unsigned int faceAlgorithmVersion; // @synthesize faceAlgorithmVersion=_faceAlgorithmVersion;
@property (strong, nonatomic) PVFaceprint *faceprint; // @synthesize faceprint=_faceprint;
@property (nonatomic) BOOL hasSmile; // @synthesize hasSmile=_hasSmile;
@property (nonatomic) BOOL hidden; // @synthesize hidden=_hidden;
@property (nonatomic) BOOL isInTrash; // @synthesize isInTrash=_isInTrash;
@property (nonatomic) BOOL isLeftEyeClosed; // @synthesize isLeftEyeClosed=_isLeftEyeClosed;
@property (nonatomic) BOOL isRightEyeClosed; // @synthesize isRightEyeClosed=_isRightEyeClosed;
@property (nonatomic) BOOL isTooSmall; // @synthesize isTooSmall=_isTooSmall;
@property (nonatomic) double leftEyeX; // @synthesize leftEyeX=_leftEyeX;
@property (nonatomic) double leftEyeY; // @synthesize leftEyeY=_leftEyeY;
@property (nonatomic) BOOL manual; // @synthesize manual=_manual;
@property (nonatomic) double mouthX; // @synthesize mouthX=_mouthX;
@property (nonatomic) double mouthY; // @synthesize mouthY=_mouthY;
@property (nonatomic) long long nameSource; // @synthesize nameSource=_nameSource;
@property (copy, nonatomic) NSString *personLocalIdentifier; // @synthesize personLocalIdentifier=_personLocalIdentifier;
@property (nonatomic) double posePitch; // @synthesize posePitch=_posePitch;
@property (nonatomic) double poseRoll; // @synthesize poseRoll=_poseRoll;
@property (nonatomic) double poseYaw; // @synthesize poseYaw=_poseYaw;
@property (nonatomic) long long qualityMeasure; // @synthesize qualityMeasure=_qualityMeasure;
@property (nonatomic) double rightEyeX; // @synthesize rightEyeX=_rightEyeX;
@property (nonatomic) double rightEyeY; // @synthesize rightEyeY=_rightEyeY;
@property (nonatomic) double size; // @synthesize size=_size;
@property (nonatomic) long long sourceHeight; // @synthesize sourceHeight=_sourceHeight;
@property (nonatomic) long long sourceWidth; // @synthesize sourceWidth=_sourceWidth;
@property (nonatomic) int trainingType; // @synthesize trainingType=_trainingType;

+ (id)faceForCVMLFaceObservation:(id)arg1 fromImage:(id)arg2 error:(id *)arg3;
+ (id)faceForCVMLFaceObservation:(id)arg1 fromImageWithPixelWidth:(unsigned long long)arg2 pixelHeight:(unsigned long long)arg3 error:(id *)arg4;
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
- (long long)photosFaceRepresentationQualityMeasure;
- (double)photosFaceRepresentationSize;
- (long long)photosFaceRepresentationSourceHeight;
- (long long)photosFaceRepresentationSourceWidth;
- (BOOL)setCenterAndSizeFromNormalizedFaceRect:(struct CGRect)arg1;
- (void)setCoordinatesAndFeaturesFromFace:(id)arg1;

@end

