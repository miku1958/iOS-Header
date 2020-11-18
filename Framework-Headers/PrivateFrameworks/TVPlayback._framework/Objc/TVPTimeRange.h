//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVPTimeRange : NSObject
{
    double _startTime;
    double _duration;
}

@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly, nonatomic) double endTime;
@property (nonatomic) double startTime; // @synthesize startTime=_startTime;

+ (CDStruct_5c5366e1)forwardmostCMTimeRangeInCMTimeRanges:(id)arg1;
- (BOOL)containsTime:(double)arg1;
- (id)description;
- (id)initWithCMTimeRange:(CDStruct_5c5366e1)arg1;
- (id)initWithStartTime:(double)arg1 duration:(double)arg2;
- (id)initWithStartTime:(double)arg1 endTime:(double)arg2;
- (id)intersectTimeRange:(id)arg1;

@end

