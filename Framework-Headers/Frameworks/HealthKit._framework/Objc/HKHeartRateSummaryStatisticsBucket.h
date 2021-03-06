//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSIndexSet, NSMutableIndexSet;

@interface HKHeartRateSummaryStatisticsBucket : NSObject <NSSecureCoding>
{
    NSMutableIndexSet *_heartRatesInBeatsPerMinute;
    long long _bucketIndex;
}

@property (readonly, nonatomic) long long bucketIndex; // @synthesize bucketIndex=_bucketIndex;
@property (readonly, nonatomic) NSIndexSet *heartRatesInBeatsPerMinute; // @synthesize heartRatesInBeatsPerMinute=_heartRatesInBeatsPerMinute;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addHeartRateInBeatsPerMinute:(long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBucketIndex:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

