//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

#import <Vision/VNFaceObservationAccepting-Protocol.h>

@class NSArray, NSString;

@interface VNDetectFacePoseRequest : VNImageBasedRequest <VNFaceObservationAccepting>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (readonly) Class superclass;

- (void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedProcessing:(id)arg3 outputFacesThatNeed2DLandmarks:(id)arg4;
- (long long)dependencyProcessingOrdinality;
- (BOOL)internalPerformInContext:(id)arg1 error:(id *)arg2;
- (BOOL)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;

@end

