//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNScene.h>

@class MISSING_TYPE, SCNMaterial, SCNNode;

@interface PKPeerPayment3DScene : SCNScene
{
    SCNNode *_lightNode;
    SCNNode *_cameraNode;
    SCNNode *_textContainerNode;
    SCNMaterial *_textMaterial;
    MISSING_TYPE *_currentSkew;
    MISSING_TYPE *_currentRollPitch;
    CDStruct_14d5dc5e _currentRotationMatrix;
}

@property (strong, nonatomic) SCNNode *cameraNode; // @synthesize cameraNode=_cameraNode;
@property (nonatomic) MISSING_TYPE *currentRollPitch; // @synthesize currentRollPitch=_currentRollPitch;
@property (nonatomic) CDStruct_14d5dc5e currentRotationMatrix; // @synthesize currentRotationMatrix=_currentRotationMatrix;
@property (nonatomic) MISSING_TYPE *currentSkew; // @synthesize currentSkew=_currentSkew;
@property (strong, nonatomic) SCNNode *lightNode; // @synthesize lightNode=_lightNode;
@property (strong, nonatomic) SCNNode *textContainerNode; // @synthesize textContainerNode=_textContainerNode;
@property (strong, nonatomic) SCNMaterial *textMaterial; // @synthesize textMaterial=_textMaterial;

+ (CDStruct_14d5dc5e)rotationMatrixForRollPitch: /* Error: Ran out of types for this method. */;
+ (MISSING_TYPE *)skewForRollPitch: /* Error: Ran out of types for this method. */;
+ (MISSING_TYPE *)staticRollPitch;
- (void).cxx_destruct;
- (id)init;
- (void)resetScene;

@end
