//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AWDCoreRoutineTrafficConditions, RTLocationOfInterest;

__attribute__((visibility("hidden")))
@interface RTTrafficConditionsMetric : NSObject
{
    RTLocationOfInterest *_locationOfInterest;
    AWDCoreRoutineTrafficConditions *_metric;
}

@property (readonly, nonatomic) RTLocationOfInterest *locationOfInterest; // @synthesize locationOfInterest=_locationOfInterest;
@property (readonly, nonatomic) AWDCoreRoutineTrafficConditions *metric; // @synthesize metric=_metric;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithPLOIETA:(id)arg1;
- (void)updatePrecisionRecallWithVisitedLocation:(id)arg1;

@end

