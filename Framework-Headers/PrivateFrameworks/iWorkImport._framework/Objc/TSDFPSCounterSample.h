//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSDFPSCounterSample : NSObject
{
    double _time;
    double _duration;
}

@property (readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly, nonatomic) double time; // @synthesize time=_time;

+ (id)sampleWithTime:(double)arg1 duration:(double)arg2;
- (id)initWithTime:(double)arg1 duration:(double)arg2;

@end
