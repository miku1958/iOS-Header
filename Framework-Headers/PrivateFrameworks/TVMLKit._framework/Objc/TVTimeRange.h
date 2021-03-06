//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface TVTimeRange : NSObject
{
    double _startTime;
    double _endTime;
    double _duration;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (strong, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (nonatomic) double endTime; // @synthesize endTime=_endTime;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (nonatomic) double startTime; // @synthesize startTime=_startTime;

- (void).cxx_destruct;

@end

