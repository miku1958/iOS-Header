//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTPredictionExpertFeatureAddon.h>

@class NSDateComponents;

@interface RTPredictionExpertFeatureAddonTimeOfDay : RTPredictionExpertFeatureAddon
{
    NSDateComponents *_startDateComponents;
    NSDateComponents *_endDateComponents;
}

@property (readonly, nonatomic) NSDateComponents *endDateComponents; // @synthesize endDateComponents=_endDateComponents;
@property (readonly, nonatomic) NSDateComponents *startDateComponents; // @synthesize startDateComponents=_startDateComponents;

+ (id)timeOfDayFeatureAddonsWithRequestedDuration:(double)arg1 offsetFromMidnight:(double)arg2;
- (void).cxx_destruct;
- (long long)addonType;
- (id)description;
- (id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2;

@end

