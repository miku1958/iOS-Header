//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNRequest.h>

#import <Vision/VNFaceObservationAcceptingInternal-Protocol.h>

@class NSArray, NSString;

@interface VNImageBasedRequest : VNRequest <VNFaceObservationAcceptingInternal>
{
    struct CGRect _regionOfInterest;
    NSArray *_inputFaceObservations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (nonatomic) struct CGRect regionOfInterest; // @synthesize regionOfInterest=_regionOfInterest;
@property (readonly) Class superclass;

+ (void)recordDefaultOptionsInDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)_faceObservationsForRegionOfInterestContainingFaceObservations:(id)arg1;
- (void)applyConfigurationOfRequest:(id)arg1;
- (BOOL)getOptionalValidatedInputFaceObservations:(id *)arg1 clippedToRegionOfInterest:(BOOL)arg2 error:(id *)arg3;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)isFullCoverageRegionOfInterest;
- (id)observationsCacheKey;
- (struct CGRect)regionOfInterestNonIntegralPixelRectForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (struct CGRect)regionOfInterestPixelRectForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (id)sequencedRequestPreviousObservationsKey;
- (BOOL)validateConfigurationAndReturnError:(id *)arg1;
- (id)validatedInputFaceObservationsClippedToRegionOfInterest:(BOOL)arg1 error:(id *)arg2;

@end

