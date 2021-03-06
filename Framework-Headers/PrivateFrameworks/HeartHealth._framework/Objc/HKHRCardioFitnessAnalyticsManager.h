//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKHRCardioFitnessAnalyticsSignalSource;
@protocol OS_dispatch_queue;

@interface HKHRCardioFitnessAnalyticsManager : NSObject
{
    HKHRCardioFitnessAnalyticsSignalSource *_signalSource;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_setKey:(id)arg1 value:(id)arg2 onPayloadIfPresent:(id)arg3;
- (id)initWithSignalSource:(id)arg1;
- (id)submitClassificationChartOverlaySelectedEventCurrentOverlay:(id)arg1 previousOverlay:(id)arg2;
- (id)submitDailyEventWithSource:(id)arg1;
- (id)submitOnboardingEventForStep:(id)arg1 acceptDefaults:(BOOL)arg2 countryCode:(id)arg3;

@end

