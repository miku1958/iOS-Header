//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthToolbox/NSCopying-Protocol.h>
#import <HealthToolbox/WDTimePeriod-Protocol.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface WDTimePeriod : NSObject <WDTimePeriod, NSCopying>
{
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (readonly) Class superclass;

+ (id)timePeriodWithSample:(id)arg1;
+ (id)timePeriodWithStartDate:(id)arg1 endDate:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)sleep_titleString;

@end
