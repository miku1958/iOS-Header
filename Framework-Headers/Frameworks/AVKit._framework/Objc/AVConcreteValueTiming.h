//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/AVValueTiming.h>

__attribute__((visibility("hidden")))
@interface AVConcreteValueTiming : AVValueTiming
{
    double _value;
    double _timeStamp;
    double _rate;
}

- (CDStruct_c3b9c2ee)_timing;
- (double)anchorTimeStamp;
- (double)anchorValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3;
- (double)rate;

@end

