//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, PVContext;
@protocol PVVisionIntegrating;

@interface PVVisionAnalyzer : NSObject
{
    id<PVVisionIntegrating> _visionIntegration;
    PVContext *_context;
    NSDictionary *_detectionOptions;
    NSDictionary *_detailsExtractionOptions;
}

- (void).cxx_destruct;
- (long long)_expressionTypeFromExpressionString:(id)arg1;
- (id)analyzeImage:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (float)angleInDegreesBetweenFaceDirectionAndImageXAxisForFace:(id)arg1;
- (struct CGPoint)centroidForLandmarkRegion:(id)arg1;
- (void)configureRequest:(id)arg1;
- (id)initWithContext:(id)arg1 visionIntegration:(id)arg2;

@end
