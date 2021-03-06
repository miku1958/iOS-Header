//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMotion/CMLogItem.h>

@class NSDate;

@interface CMMotionTimeRange : CMLogItem
{
    NSDate *fStartDate;
    NSDate *fEndDate;
}

@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSDate *startDate;

+ (CDStruct_c3b9c2ee)CLMotionTimeRangeFromCMMotionTimeRange:(id)arg1;
+ (id)CMMotionTimeRangeFromCLMotionTimeRange:(CDStruct_c3b9c2ee)arg1;
+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(double)arg1 endDate:(double)arg2;

@end

