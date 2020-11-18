//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/AVVideoCompositionInstruction-Protocol.h>
#import <NeutrinoCore/NSCopying-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, NUColorSpace, NUComposition, NURenderContext, NURenderJob;

@interface NUVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction, NSCopying>
{
    NSMutableDictionary *_sourceIdentifiersByTrackID;
    NSArray *_requiredSourceTrackIDs;
    NURenderJob *_renderJob;
    NURenderContext *_renderContext;
    NUComposition *_adjustmentComposition;
    NSArray *_pipelineFilters;
    NUColorSpace *_colorSpace;
    long long _sampleMode;
    CDStruct_1e2b2e48 _renderScale;
    CDStruct_e83c9415 _timeRange;
}

@property (strong, nonatomic) NUComposition *adjustmentComposition; // @synthesize adjustmentComposition=_adjustmentComposition;
@property (strong, nonatomic) NUColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property (readonly, nonatomic) BOOL containsTweening;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL enablePostProcessing;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) int passthroughTrackID;
@property (strong, nonatomic) NSArray *pipelineFilters; // @synthesize pipelineFilters=_pipelineFilters;
@property (strong) NURenderContext *renderContext; // @synthesize renderContext=_renderContext;
@property (weak, nonatomic) NURenderJob *renderJob; // @synthesize renderJob=_renderJob;
@property (nonatomic) CDStruct_912cb5d2 renderScale; // @synthesize renderScale=_renderScale;
@property (strong, nonatomic) NSArray *requiredSourceTrackIDs; // @synthesize requiredSourceTrackIDs=_requiredSourceTrackIDs;
@property (nonatomic) long long sampleMode; // @synthesize sampleMode=_sampleMode;
@property (readonly) Class superclass;
@property (nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;

+ (id)instructionForVideoTrack:(id)arg1;
+ (id)instructionFromBase:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToInstruction:(id)arg1;
- (void)setSourceIdentifier:(id)arg1 forTrackID:(id)arg2;
- (id)sourceIdentifierForTrackID:(id)arg1;

@end
