//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreRoutine/RTScenarioTrigger.h>

@interface RTScenarioTriggerArrivedEarly : RTScenarioTrigger
{
    double _secondsEarly;
}

@property (readonly, nonatomic) double secondsEarly; // @synthesize secondsEarly=_secondsEarly;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSecondsEarly:(double)arg1;

@end

