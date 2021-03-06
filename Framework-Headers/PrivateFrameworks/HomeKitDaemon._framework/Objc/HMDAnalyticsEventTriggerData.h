//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDAnalyticsPredicateData, NSArray;

@interface HMDAnalyticsEventTriggerData : HMFObject
{
    BOOL _containsRecurrences;
    BOOL _executeOnce;
    int _activationState;
    int _activationType;
    NSArray *_events;
    HMDAnalyticsPredicateData *_predicate;
}

@property (nonatomic) int activationState; // @synthesize activationState=_activationState;
@property (nonatomic) int activationType; // @synthesize activationType=_activationType;
@property BOOL containsRecurrences; // @synthesize containsRecurrences=_containsRecurrences;
@property (copy, nonatomic) NSArray *events; // @synthesize events=_events;
@property BOOL executeOnce; // @synthesize executeOnce=_executeOnce;
@property (strong, nonatomic) HMDAnalyticsPredicateData *predicate; // @synthesize predicate=_predicate;

- (void).cxx_destruct;

@end

