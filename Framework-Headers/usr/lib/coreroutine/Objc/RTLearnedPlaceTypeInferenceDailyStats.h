//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface RTLearnedPlaceTypeInferenceDailyStats : NSObject
{
    NSDate *_start;
    NSDate *_end;
    unsigned long long _visitCount;
    double _aggregateDwellTimeBetweenDateRange;
}

@property (readonly, nonatomic) double aggregateDwellTimeBetweenDateRange; // @synthesize aggregateDwellTimeBetweenDateRange=_aggregateDwellTimeBetweenDateRange;
@property (readonly, nonatomic) NSDate *end; // @synthesize end=_end;
@property (readonly, nonatomic) NSDate *start; // @synthesize start=_start;
@property (readonly, nonatomic) unsigned long long visitCount; // @synthesize visitCount=_visitCount;

- (void).cxx_destruct;
- (id)description;
- (id)initWithStart:(id)arg1 end:(id)arg2 visitCount:(unsigned long long)arg3 aggregateDwellTimeBetweenDateRange:(double)arg4;

@end

