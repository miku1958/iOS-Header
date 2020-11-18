//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

@interface VNDetectRectanglesRequest : VNImageBasedRequest
{
    float _minimumAspectRatio;
    float _maximumAspectRatio;
    float _quadratureTolerance;
    float _minimumSize;
    float _minimumConfidence;
    unsigned long long _maximumObservations;
    unsigned long long _requiredVersion;
}

@property (nonatomic) float maximumAspectRatio;
@property (nonatomic) unsigned long long maximumObservations;
@property (nonatomic) float minimumAspectRatio;
@property (nonatomic) float minimumConfidence;
@property (nonatomic) float minimumSize;
@property (nonatomic) float quadratureTolerance;
@property (nonatomic, setter=setRequiredVersion:) unsigned long long requiredVersion; // @synthesize requiredVersion=_requiredVersion;

- (void)applyConfigurationOfRequest:(id)arg1;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)internalPerformInContext:(id)arg1 error:(id *)arg2;
- (id)observationsCacheKey;
- (id)sequencedRequestPreviousObservationsKey;

@end

