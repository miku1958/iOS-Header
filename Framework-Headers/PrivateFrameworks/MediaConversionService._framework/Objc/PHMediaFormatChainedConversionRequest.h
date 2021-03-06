//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaConversionService/PHMediaFormatConversionCompositeRequest.h>

@class PHMediaFormatConversionRequest;

@interface PHMediaFormatChainedConversionRequest : PHMediaFormatConversionCompositeRequest
{
    PHMediaFormatConversionRequest *_independentRequest;
    PHMediaFormatConversionRequest *_dependentRequest;
    CDUnknownBlockType _successUpdateHandler;
}

@property (strong) PHMediaFormatConversionRequest *dependentRequest; // @synthesize dependentRequest=_dependentRequest;
@property (strong) PHMediaFormatConversionRequest *independentRequest; // @synthesize independentRequest=_independentRequest;
@property (copy) CDUnknownBlockType successUpdateHandler; // @synthesize successUpdateHandler=_successUpdateHandler;

+ (id)chainedRequestForAdjustmentRenderRequest:(id)arg1 dependingOnRequest:(id)arg2 error:(id *)arg3;
+ (id)chainedRequestForRequest:(id)arg1 dependingOnRequest:(id)arg2 error:(id *)arg3 successUpdateHandler:(CDUnknownBlockType)arg4;
+ (id)requestForSource:(id)arg1 destinationCapabilities:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (void)enqueueSubrequestsOnConversionManager:(id)arg1;
- (void)enumerateSubrequests:(CDUnknownBlockType)arg1;
- (void)postProcessSuccessfulCompositeRequest;

@end

