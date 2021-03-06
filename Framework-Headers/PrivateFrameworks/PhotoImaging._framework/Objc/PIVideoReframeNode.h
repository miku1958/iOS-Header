//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderNode.h>

@class PIReframeKeyframeSequence;
@protocol NUVideoProperties;

@interface PIVideoReframeNode : NURenderNode
{
    BOOL _shouldApplyWatermark;
    PIReframeKeyframeSequence *_keyframeSequence;
    id<NUVideoProperties> _inputVideoProperties;
    CDStruct_1b6d18a9 _frameDuration;
    CDStruct_996ac03c _stabCropRect;
}

@property (nonatomic) CDStruct_1b6d18a9 frameDuration; // @synthesize frameDuration=_frameDuration;
@property (strong, nonatomic) id<NUVideoProperties> inputVideoProperties; // @synthesize inputVideoProperties=_inputVideoProperties;
@property (strong, nonatomic) PIReframeKeyframeSequence *keyframeSequence; // @synthesize keyframeSequence=_keyframeSequence;
@property (nonatomic) BOOL shouldApplyWatermark; // @synthesize shouldApplyWatermark=_shouldApplyWatermark;
@property (nonatomic) CDStruct_996ac03c stabCropRect; // @synthesize stabCropRect=_stabCropRect;

- (void).cxx_destruct;
- (id)_evaluateImage:(out id *)arg1;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (id)_evaluateVideoProperties:(out id *)arg1;
- (id)_stabilizeImage:(id)arg1 cleanRect:(struct CGRect)arg2 cropRect:(struct CGRect)arg3 transform:(CDStruct_8e0628e6)arg4 geometry:(id)arg5;
- (BOOL)canPropagateOriginalLivePhotoMetadataTrack;
- (id)initWithKeyframes:(id)arg1 stabCropRect:(CDStruct_996ac03c)arg2 input:(id)arg3;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;
- (BOOL)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (BOOL)shouldCacheNodeForPipelineState:(id)arg1;

@end

