//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNMaterial, SCNNode;

@interface AVTPupilReflectionCorrectionDescriptor : NSObject
{
    SCNNode *_readMorpherNode;
    SCNMaterial *_leftEyeMaterial;
    SCNMaterial *_rightEyeMaterial;
    long long _leftEyeTargetIndex;
    long long _rightEyeTargetIndex;
}

@property (strong, nonatomic) SCNMaterial *leftEyeMaterial; // @synthesize leftEyeMaterial=_leftEyeMaterial;
@property (nonatomic) long long leftEyeTargetIndex; // @synthesize leftEyeTargetIndex=_leftEyeTargetIndex;
@property (strong, nonatomic) SCNNode *readMorpherNode; // @synthesize readMorpherNode=_readMorpherNode;
@property (strong, nonatomic) SCNMaterial *rightEyeMaterial; // @synthesize rightEyeMaterial=_rightEyeMaterial;
@property (nonatomic) long long rightEyeTargetIndex; // @synthesize rightEyeTargetIndex=_rightEyeTargetIndex;

- (void).cxx_destruct;

@end

