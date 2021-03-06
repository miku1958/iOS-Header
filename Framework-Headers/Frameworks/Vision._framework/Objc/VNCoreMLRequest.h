//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

@class VNCoreMLModel;

@interface VNCoreMLRequest : VNImageBasedRequest
{
    VNCoreMLModel *_model;
}

@property (nonatomic) unsigned long long imageCropAndScaleOption;
@property (readonly, nonatomic) VNCoreMLModel *model; // @synthesize model=_model;

+ (Class)configurationClass;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
- (void).cxx_destruct;
- (BOOL)allowsCachingOfResults;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)description;
- (id)initWithModel:(id)arg1;
- (id)initWithModel:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)newDefaultRequestInstance;
- (id)sequencedRequestPreviousObservationsKey;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end

