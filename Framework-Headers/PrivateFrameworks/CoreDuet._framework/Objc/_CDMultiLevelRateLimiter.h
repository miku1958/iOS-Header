//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDRateLimiting-Protocol.h>

@class NSArray, NSDate, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface _CDMultiLevelRateLimiter : NSObject <_CDRateLimiting>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_lastRecorded;
    long long _numberOfRateLimitPolicies;
    NSArray *_periods;
    NSMutableArray *_periodStart;
    NSArray *_maxCounts;
    NSMutableArray *_balances;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) NSDate *lastRecorded; // @synthesize lastRecorded=_lastRecorded;
@property (readonly, nonatomic) long long numOfRateLimitPolicies; // @synthesize numOfRateLimitPolicies=_numberOfRateLimitPolicies;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)credit;
- (BOOL)debited;
- (id)init;
- (id)initWithPeriodToCountMap:(id)arg1;
- (void)recordTimeAndRefillIfNeededRaw;

@end
