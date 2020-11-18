//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNTargetedImageRequest.h>

@interface VNGenerateOpticalFlowRequest : VNTargetedImageRequest
{
    BOOL _enableFiltering;
    float _filterLumaWeight;
    float _filterChromaWeight;
    float _filterOcclusionWeight;
    unsigned long long _levelCount;
    unsigned long long _warpCount;
    unsigned long long _filterSize;
    unsigned long long _filterSamplingDensity;
}

@property (nonatomic) BOOL enableFiltering; // @synthesize enableFiltering=_enableFiltering;
@property (nonatomic) float filterChromaWeight; // @synthesize filterChromaWeight=_filterChromaWeight;
@property (nonatomic) float filterLumaWeight; // @synthesize filterLumaWeight=_filterLumaWeight;
@property (nonatomic) float filterOcclusionWeight; // @synthesize filterOcclusionWeight=_filterOcclusionWeight;
@property (nonatomic) unsigned long long filterSamplingDensity; // @synthesize filterSamplingDensity=_filterSamplingDensity;
@property (nonatomic) unsigned long long filterSize; // @synthesize filterSize=_filterSize;
@property (nonatomic) unsigned long long levelCount; // @synthesize levelCount=_levelCount;
@property (nonatomic) unsigned long long warpCount; // @synthesize warpCount=_warpCount;

- (BOOL)_calculateLKTVectorResult:(struct __CVBuffer *)arg1 fromPixelBuffer:(struct __CVBuffer *)arg2 toPixelBuffer:(struct __CVBuffer *)arg3 ofWidth:(unsigned long long)arg4 height:(unsigned long long)arg5 error:(id *)arg6;
- (struct __CVBuffer *)_createLKTPixelBufferFromPixelRegionOfInterest:(struct CGRect)arg1 inImageBuffer:(id)arg2 error:(id *)arg3;
- (struct __CVBuffer *)_createLKTVectorResultPixelBufferForImageWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 error:(id *)arg3;
- (id)_initializedLKTMetalContextAndReturnError:(id *)arg1;
- (BOOL)_validateParameters:(id *)arg1;
- (BOOL)allowsCachingOfResults;
- (id)initWithTargetedImageSpecifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (BOOL)wantsSequencedRequestObservationsRecording;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
