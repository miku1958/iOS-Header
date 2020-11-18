//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Vision/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface BurstFaceStat : NSObject <NSCopying>
{
    BOOL leftEyeOpen;
    BOOL rightEyeOpen;
    BOOL smiling;
    BOOL foundByFaceCore;
    BOOL hasLeftEye;
    BOOL hasRightEye;
    BOOL hasRollAngle;
    BOOL hasYawAngle;
    BOOL smallFace;
    BOOL _hasPitchAngle;
    BOOL _isSyncedWithImage;
    float normalizedSigma;
    int faceId;
    int hwFaceId;
    int framesSinceLast;
    float focusScore;
    float normalizedFocusScore;
    float faceScore;
    float leftEyeBlinkScore;
    float rightEyeBlinkScore;
    float smileScore;
    int FCRLeftEyeFeaturesOffset;
    int FCRRightEyeFeaturesOffset;
    int FCRSmileFeaturesOffset;
    int FCRBlinkFeaturesSize;
    int FCRSmileFeaturesSize;
    float rollAngle;
    float yawAngle;
    float _pitchAngle;
    NSMutableArray *FCRSmileAndBlinkFeatures;
    double timestamp;
    struct CGRect faceRect;
    struct CGRect normalizedFaceRect;
    struct CGRect leftEyeRect;
    struct CGRect rightEyeRect;
    struct CGRect _hwFaceRect;
}

@property int FCRBlinkFeaturesSize; // @synthesize FCRBlinkFeaturesSize;
@property int FCRLeftEyeFeaturesOffset; // @synthesize FCRLeftEyeFeaturesOffset;
@property int FCRRightEyeFeaturesOffset; // @synthesize FCRRightEyeFeaturesOffset;
@property (strong) NSMutableArray *FCRSmileAndBlinkFeatures; // @synthesize FCRSmileAndBlinkFeatures;
@property int FCRSmileFeaturesOffset; // @synthesize FCRSmileFeaturesOffset;
@property int FCRSmileFeaturesSize; // @synthesize FCRSmileFeaturesSize;
@property int faceId; // @synthesize faceId;
@property struct CGRect faceRect; // @synthesize faceRect;
@property float faceScore; // @synthesize faceScore;
@property float focusScore; // @synthesize focusScore;
@property BOOL foundByFaceCore; // @synthesize foundByFaceCore;
@property int framesSinceLast; // @synthesize framesSinceLast;
@property BOOL hasLeftEye; // @synthesize hasLeftEye;
@property BOOL hasPitchAngle; // @synthesize hasPitchAngle=_hasPitchAngle;
@property BOOL hasRightEye; // @synthesize hasRightEye;
@property BOOL hasRollAngle; // @synthesize hasRollAngle;
@property BOOL hasYawAngle; // @synthesize hasYawAngle;
@property int hwFaceId; // @synthesize hwFaceId;
@property struct CGRect hwFaceRect; // @synthesize hwFaceRect=_hwFaceRect;
@property BOOL isSyncedWithImage; // @synthesize isSyncedWithImage=_isSyncedWithImage;
@property float leftEyeBlinkScore; // @synthesize leftEyeBlinkScore;
@property BOOL leftEyeOpen; // @synthesize leftEyeOpen;
@property struct CGRect leftEyeRect; // @synthesize leftEyeRect;
@property struct CGRect normalizedFaceRect; // @synthesize normalizedFaceRect;
@property float normalizedFocusScore; // @synthesize normalizedFocusScore;
@property float normalizedSigma; // @synthesize normalizedSigma;
@property float pitchAngle; // @synthesize pitchAngle=_pitchAngle;
@property float rightEyeBlinkScore; // @synthesize rightEyeBlinkScore;
@property BOOL rightEyeOpen; // @synthesize rightEyeOpen;
@property struct CGRect rightEyeRect; // @synthesize rightEyeRect;
@property float rollAngle; // @synthesize rollAngle;
@property BOOL smallFace; // @synthesize smallFace;
@property float smileScore; // @synthesize smileScore;
@property BOOL smiling; // @synthesize smiling;
@property double timestamp; // @synthesize timestamp;
@property float yawAngle; // @synthesize yawAngle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFaceStat:(id)arg1;

@end

