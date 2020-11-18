//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

@interface VNDetectContoursRequest : VNImageBasedRequest
{
}

@property (nonatomic) float contrastAdjustment;
@property (nonatomic) BOOL detectDarkOnLight;
@property (nonatomic) BOOL detectsDarkOnLight;
@property (nonatomic) BOOL forceUseInputCVPixelBufferDirectly;
@property (nonatomic) BOOL inHierarchy;
@property (nonatomic) unsigned long long maximumImageDimension;

+ (Class)configurationClass;
- (void)applyConfigurationOfRequest:(id)arg1;
- (BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
