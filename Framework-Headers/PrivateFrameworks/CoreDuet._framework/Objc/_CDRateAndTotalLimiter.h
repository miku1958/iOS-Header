//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuet/_CDRateLimiter.h>

@interface _CDRateAndTotalLimiter : _CDRateLimiter
{
    long long _totalCount;
    long long _currentTotal;
}

@property long long currentTotal; // @synthesize currentTotal=_currentTotal;
@property (readonly) long long totalCount; // @synthesize totalCount=_totalCount;

- (BOOL)credit;
- (BOOL)debited;
- (id)description;
- (id)initWithCount:(long long)arg1 perPeriod:(double)arg2;
- (id)initWithCount:(long long)arg1 perPeriod:(double)arg2 totalCountLimit:(long long)arg3;

@end
