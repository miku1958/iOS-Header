//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLPXNumberFilter.h>

__attribute__((visibility("hidden")))
@interface QLPXVelocityNumberFilter : QLPXNumberFilter
{
    double _minimumSampleInterval;
    double _previousVelocityWeight;
    double _lastValue;
    double _lastTime;
    double _velocity;
    double _previousVelocity;
    double _filteredVelocity;
}

+ (id)gestureVelocityFilter;
- (id)initWithInput:(double)arg1;
- (double)updatedOutput;

@end
