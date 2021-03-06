//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarKit/NSCopying-Protocol.h>

@class MISSING_TYPE, NSMutableDictionary;

@interface AVTAvatarPose : NSObject <NSCopying>
{
    BOOL _hasNeckPosition;
    BOOL _hasNeckOrientation;
    double _bakedAnimationBlendFactor;
    NSMutableDictionary *_weights;
    MISSING_TYPE *_neckPosition;
    struct {
        MISSING_TYPE *vector;
    } _neckOrientation;
}

@property (nonatomic) double bakedAnimationBlendFactor; // @synthesize bakedAnimationBlendFactor=_bakedAnimationBlendFactor;
@property (nonatomic) struct neckOrientation; // @synthesize neckOrientation=_neckOrientation;
@property (nonatomic) MISSING_TYPE *neckPosition; // @synthesize neckPosition=_neckPosition;

+ (id)friendlyPose;
+ (id)neutralPose;
+ (id)posesForAnimojiNamed:(id)arg1 inPosePack:(id)arg2;
+ (id)posesForMemojiInPosePack:(id)arg1;
+ (id)posesInPosePack:(id)arg1;
+ (id)posesInPosePack:(id)arg1 avatarSelectionBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (BOOL)affectsPhysicsSimulation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithScene:(id)arg1;
- (id)initWithWeights:(id)arg1 neckPosition:(MISSING_TYPE **)arg2 neckOrientation:(struct *)arg3 bakedAnimationBlendFactor:(double)arg4;
- (id)poseByMergingPose:(id)arg1;
- (void)setWeight:(double)arg1 forBlendShapeNamed:(id)arg2;
- (void)setWeights:(id)arg1;
- (double)weightForBlendShapeNamed:(id)arg1;

@end

