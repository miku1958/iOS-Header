//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/_NURenderResult.h>

#import <PhotoImaging/PILongExposureRegistrationResult-Protocol.h>

@class NSString, VNImageHomographicAlignmentObservation;
@protocol NURenderStatistics;

@interface _PILongExposureRegistrationResult : _NURenderResult <PILongExposureRegistrationResult>
{
    VNImageHomographicAlignmentObservation *_observation;
    CDStruct_996ac03c _extent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CDStruct_996ac03c extent; // @synthesize extent=_extent;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) VNImageHomographicAlignmentObservation *observation; // @synthesize observation=_observation;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;

@end
