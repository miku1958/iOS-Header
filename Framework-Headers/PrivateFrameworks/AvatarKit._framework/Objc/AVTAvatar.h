//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarKit/AVTPhysicsControllerDelegate-Protocol.h>
#import <AvatarKit/NSCopying-Protocol.h>

@class AVTEyeSkinningDescriptor, AVTPhysicsController, AVTPupilReflectionCorrectionDescriptor, CAAnimation, MISSING_TYPE, NSMutableArray, NSMutableDictionary, NSString, SCNAnimationPlayer, SCNNode, SCNPhysicsWorld;

@interface AVTAvatar : NSObject <AVTPhysicsControllerDelegate, NSCopying>
{
    SCNNode *_avatarNode;
    SCNNode *_skeleton;
    SCNNode *_headNode;
    SCNNode *_leftEye;
    SCNNode *_rightEye;
    SCNNode *_neckNode;
    SCNNode *_neckPivotNode;
    CDStruct_b01a1f36 *_morphInfoFromARKitBlendShapeIndex;
    CDStruct_b01a1f36 *_friendlyPoseMorphInfos;
    unsigned long long _friendlyPoseMorphInfoCount;
    int _transitionCount;
    BOOL _arMode;
    BOOL _optimizedForSnapshot;
    SCNPhysicsWorld *_physicsWorld;
    AVTPhysicsController *_physicsController;
    NSMutableArray *_clipsPlaying;
    struct SCNVector3 _lookAt;
    NSMutableArray *_correctiveMorpherDescriptors;
    NSMutableArray *_physicalizedMorpherDescriptors;
    NSMutableArray *_physicalizedSkeletonDescriptors;
    NSMutableArray *_morpherDrivenMaterialDescriptors;
    AVTPupilReflectionCorrectionDescriptor *_pupilReflectionCorrectionDescriptor;
    AVTEyeSkinningDescriptor *_eyeSkinningDescriptor;
    NSMutableDictionary *_morpherWeightRemappingDescriptors;
    NSMutableDictionary *_morpherWeightThresholdDescriptors;
    NSMutableDictionary *_morpherWeightThresholdStates;
    MISSING_TYPE *_arOffset;
    float _arScale;
    double _physicsScaleFactor;
    double _lastRenderTime;
    CAAnimation *_bakedAnimation;
    SCNAnimationPlayer *_bakedAnimationPlayer_lazy;
}

@property (nonatomic) BOOL arMode;
@property (readonly) SCNNode *avatarNode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) SCNNode *headNode;
@property (readonly) SCNNode *neckNode;
@property (readonly) Class superclass;

+ (struct SCNVector4)applyGazeCorrectionWithInputAngle:translation: /* Error: Ran out of types for this method. */;
+ (id)avatarWithDataRepresentation:(id)arg1 error:(id *)arg2;
+ (BOOL)canLoadDataRepresentation:(id)arg1;
+ (BOOL)canLoadDataRepresentationWithVersion:(unsigned short)arg1 minimumCompatibleVersion:(unsigned short)arg2 error:(id *)arg3;
+ (unsigned char)classIdentifier;
+ (void)preloadAvatar:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_decode:(id)arg1 error:(id *)arg2;
- (void)_encode:(id)arg1;
- (void)_resetFaceToRandomPosition;
- (void)_updateShaderModifier:(id)arg1 forARMode:(BOOL)arg2 withOnTopMask:(BOOL)arg3;
- (void)addCorrectiveDescriptorsInHierarchy:(id)arg1;
- (void)addCustomBehavioursInHierarchy:(id)arg1;
- (void)addMorpherDrivenMaterialsInHierarchy:(id)arg1;
- (void)addMorpherWeightRemappings;
- (void)addMorpherWeightThresholdings;
- (void)addMorphingSkinningControllersInHierarchy:(id)arg1;
- (void)addPhysicalizedDescriptorsInHierarchy:(id)arg1 ignoreUpperNodes:(BOOL)arg2;
- (void)animatePhysicsScaleFactor:(double)arg1 duration:(double)arg2;
- (void)applyBlendShapesWithTrackingInfo:(id)arg1;
- (void)applyCorrectiveDescriptors;
- (void)applyHeadPoseWithTrackingInfo:(id)arg1;
- (void)applyHeadPoseWithTrackingInfo:(id)arg1 gazeCorrection:(BOOL)arg2;
- (void)applyHeadPoseWithTrackingInfo:(id)arg1 gazeCorrection:(BOOL)arg2 pointOfView:(id)arg3;
- (float)applyWeightRemapForLocation:(id)arg1 weight:(float)arg2;
- (void)applyWeightWithThresholdingForLocation:(id)arg1 weight:(float)arg2 morphInfo:(CDStruct_b01a1f36)arg3;
- (MISSING_TYPE *)arOffset;
- (float)arScale;
- (id)arTechniqueName;
- (void)avatarCommonInit;
- (id)avatarNodeForPhysicsController:(id)arg1;
- (id)bakedAnimationCopy;
- (id)bakedAnimationPlayer;
- (long long)blendShapeIndexForBlendShapeName:(id)arg1;
- (id)blendShapeNameForBlendShapeIndex:(unsigned long long)arg1;
- (id)cameraNode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct SCNVector3)currentLookAt;
- (id)dataRepresentation;
- (void)dealloc;
- (id)debugPoseJSONRepresentation;
- (id)descriptorsByRemovingDescriptors:(id)arg1 inHierarchy:(id)arg2 passingTest:(CDUnknownBlockType)arg3;
- (void)didAddToScene:(id)arg1;
- (id)effectiveMorphedNodeForTargetName:(id)arg1 candidateNode:(id)arg2;
- (void)evaluatePhysicalizedDescriptors;
- (BOOL)hasCustomARTechnique;
- (id)init;
- (BOOL)isTransitioning;
- (id)lightingNode;
- (void)lookAt:(struct SCNVector3)arg1;
- (void)lookAt:(struct SCNVector3)arg1 withDuration:(double)arg2;
- (CDStruct_b01a1f36)morphInfoForARKitBlendShapeIndex:(unsigned long long)arg1;
- (BOOL)optimizeForSnapshot;
- (void)pauseBakedAnimation;
- (double)physicsController:(id)arg1 downforceForNodeNamed:(id)arg2;
- (double)physicsDownforceForNodeNamed:(id)arg1;
- (void)physicsSpecializationSettingsDidChange;
- (id)physicsState;
- (id)physicsWorldForPhysicsController:(id)arg1;
- (id)pose;
- (void)removeCorrectiveDescriptorsInHierarchy:(id)arg1;
- (void)removeCustomBehavioursInHierarchy:(id)arg1;
- (void)removeMorpherDrivenMaterialsInHierarchy:(id)arg1;
- (void)removeMorphingSkinningControllersInHierarchy:(id)arg1;
- (void)removePhysicalizedDescriptorsInHierarchy:(id)arg1;
- (void)renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2;
- (void)resetARModeBehaviours;
- (void)resetCorrectiveDescriptors;
- (void)resetCustomBehaviours;
- (void)resetMorpherDrivenMaterials;
- (void)resetMorpherWeightRemappings;
- (void)resetMorpherWeightThresholdings;
- (void)resetMorphingSkinningControllers;
- (void)resetPhysicalizedDescriptors;
- (void)resetThresholdingStates;
- (void)resetToPhysicsState:(id)arg1;
- (void)resumeBakedAnimation;
- (void)rotateHead:(double)arg1;
- (void)setAvatarNode:(id)arg1;
- (void)setBakedAnimationReferenceTime:(double)arg1;
- (void)setHeadNode:(id)arg1;
- (void)setOptimizeForSnapshot:(BOOL)arg1;
- (void)setPhysicsScaleFactor:(double)arg1;
- (void)setPose:(id)arg1;
- (void)setupEyeOrientationAndReflections;
- (void)setupFaceTracking;
- (void)setupMorphInfo;
- (void)setupMorphInfoForChangeInSubHierarchy;
- (void)setupPhysicsIfNeeded;
- (struct UIImage *)snapshotWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(id)arg3;
- (id)stickerPhysicsStateIdentifier;
- (void)stopTransitionAnimation;
- (float)thresholdedWeightAtLocation:(id)arg1 sourceWeight:(float)arg2 time:(double)arg3;
- (void)transitionFromPose:(id)arg1 toPose:(id)arg2 duration:(double)arg3 delay:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)update;
- (void)updateAfterAnimationsEvaluatedAtTime:(double)arg1 renderer:(id)arg2;
- (void)updateBindings;
- (void)updateBindingsOfNode:(id)arg1;
- (void)updateEyeOrientationAndReflections;
- (void)updateMorpherDrivenMaterialsWithDeltaTime:(double)arg1;
- (BOOL)usesSkinningForEyeOrientation;
- (void)willRemoveFromScene:(id)arg1;

@end
