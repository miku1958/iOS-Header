//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKSource, NSDate;

@interface _HKActivityStatisticsWorkoutInfo : NSObject <NSSecureCoding>
{
    NSDate *_startDate;
    NSDate *_endDate;
    HKSource *_source;
}

@property (strong, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (strong, nonatomic) HKSource *source; // @synthesize source=_source;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 source:(id)arg3;

@end
