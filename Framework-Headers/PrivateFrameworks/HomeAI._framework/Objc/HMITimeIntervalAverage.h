//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class MovingAverage;

@interface HMITimeIntervalAverage : HMFObject
{
    MovingAverage *_average;
}

- (void).cxx_destruct;
- (void)addValue:(double)arg1;
- (id)initWithMaxCapacity:(long long)arg1;
- (double)value;
- (double)valueForInterval:(double)arg1 defaultValue:(double)arg2;

@end
