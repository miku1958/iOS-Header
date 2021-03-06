//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderNode.h>

@interface PIVideoCrossfadeLoopNode : NURenderNode
{
    CDStruct_1b6d18a9 _startTime;
    CDStruct_1b6d18a9 _crossfadeDuration;
    CDStruct_e83c9415 _loopTimeRange;
}

@property (readonly, nonatomic) CDStruct_1b6d18a9 crossfadeDuration; // @synthesize crossfadeDuration=_crossfadeDuration;
@property (readonly, nonatomic) CDStruct_e83c9415 loopTimeRange; // @synthesize loopTimeRange=_loopTimeRange;
@property (readonly, nonatomic) CDStruct_1b6d18a9 startTime; // @synthesize startTime=_startTime;

- (id)_evaluateAudioMix:(out id *)arg1;
- (id)_evaluateVideo:(out id *)arg1;
- (id)_evaluateVideoComposition:(out id *)arg1;
- (id)initWithInput:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 crossfadeDuration:(CDStruct_1b6d18a9)arg3 startTime:(CDStruct_1b6d18a9)arg4;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;
- (id)input;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;
- (BOOL)requiresAudioMix;
- (BOOL)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (BOOL)shouldCacheNodeForPipelineState:(id)arg1;

@end

