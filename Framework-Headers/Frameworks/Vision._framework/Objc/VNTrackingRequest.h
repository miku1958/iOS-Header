//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

@class VNDetectedObjectObservation;

@interface VNTrackingRequest : VNImageBasedRequest
{
    VNDetectedObjectObservation *_inputObservation;
    unsigned long long _trackingLevel;
    BOOL _lastFrame;
}

@property (strong, nonatomic) VNDetectedObjectObservation *inputObservation; // @synthesize inputObservation=_inputObservation;
@property (nonatomic, getter=isLastFrame) BOOL lastFrame; // @synthesize lastFrame=_lastFrame;
@property (nonatomic) unsigned long long trackingLevel; // @synthesize trackingLevel=_trackingLevel;

+ (unsigned long long)_trackingLevelEnumFromTrackingLevelOption:(id)arg1;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;
+ (BOOL)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)_newTrackerOptionsAndReturnError:(id *)arg1;
- (id)_resetTrackerIfNeeded:(id)arg1 trackerProvider:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)_trackingLevelOptionFromTrackingLevelEnum;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)initWithDetectedObjectObservation:(id)arg1;
- (id)initWithDetectedObjectObservation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)internalPerformInContext:(id)arg1 error:(id *)arg2;
- (id)newDefaultRequestInstance;
- (id)observationsCacheKey;
- (id)sequencedRequestPreviousObservationsKey;
- (id)trackerType;
- (BOOL)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;

@end
