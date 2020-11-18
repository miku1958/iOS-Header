//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNTargetedImageRequest.h>

@class VNImageBuffer, VNImageRegistrationSignature;

@interface VNImageRegistrationRequest : VNTargetedImageRequest
{
    VNImageBuffer *_cachedFloatingImageBuffer;
    VNImageRegistrationSignature *_cachedFloatingImageSignature;
}

+ (id)optionNameForTargetedImageSpecifyingObject;
+ (BOOL)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (BOOL)allowsCachingOfResults;
- (id)cachedFloatingImageBufferReturningError:(id *)arg1;
- (id)cachedFloatingImageRegistrationSignatureReturningError:(id *)arg1;
- (BOOL)getReferenceImageBuffer:(id *)arg1 registrationSignature:(id *)arg2 forRequestPerformingContext:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (BOOL)internalPerformInContext:(id)arg1 error:(id *)arg2;
- (BOOL)wantsSequencedRequestObservationsRecording;
- (BOOL)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;

@end

