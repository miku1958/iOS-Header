//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKQuantity, NSDate;

@interface HKHeartRateSummaryReading : NSObject <NSSecureCoding>
{
    NSDate *_date;
    HKQuantity *_quantity;
    long long _context;
}

@property (readonly, nonatomic) long long context; // @synthesize context=_context;
@property (readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property (readonly, nonatomic) HKQuantity *quantity; // @synthesize quantity=_quantity;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 quantity:(id)arg2;
- (id)initWithDate:(id)arg1 quantity:(id)arg2 context:(long long)arg3;
- (BOOL)isEqual:(id)arg1;

@end

