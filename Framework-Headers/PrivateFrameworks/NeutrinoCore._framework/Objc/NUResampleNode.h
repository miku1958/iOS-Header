//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUAbstractScaleNode.h>

@class NUSubsampleNode;

@interface NUResampleNode : NUAbstractScaleNode
{
    long long _subsampleFactor;
    long long _sampleMode;
    NUSubsampleNode *_subsampleNode;
}

@property (readonly) long long sampleMode; // @synthesize sampleMode=_sampleMode;
@property (readonly) long long subsampleFactor; // @synthesize subsampleFactor=_subsampleFactor;
@property (readonly) NUSubsampleNode *subsampleNode; // @synthesize subsampleNode=_subsampleNode;

- (void).cxx_destruct;
- (CDStruct_912cb5d2)_additionalScale;
- (id)_evaluateImage:(out id *)arg1;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (id)initWithInput:(id)arg1 settings:(id)arg2;
- (id)initWithPreparedInput:(id)arg1 subsampleNode:(id)arg2;
- (id)initWithSubsampleFactor:(long long)arg1 sampleMode:(long long)arg2 source:(id)arg3 subsampleNode:(id)arg4;
- (BOOL)isGeometryNode;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;

@end
