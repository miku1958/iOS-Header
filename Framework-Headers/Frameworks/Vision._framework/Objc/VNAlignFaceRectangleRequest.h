//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNRequest.h>

@class NSArray;

@interface VNAlignFaceRectangleRequest : VNRequest
{
    NSArray *_inputFaceObservations;
}

@property (readonly, copy, nonatomic) NSArray *inputFaceObservations; // @synthesize inputFaceObservations=_inputFaceObservations;

- (void).cxx_destruct;
- (void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedProcessing:(id)arg3;
- (id)initWithFaceObservations:(id)arg1;
- (id)initWithFaceObservations:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)internalPerformInContext:(id)arg1 error:(id *)arg2;
- (id)newDefaultRequestInstance;
- (id)observationsCacheKey;
- (BOOL)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;

@end

