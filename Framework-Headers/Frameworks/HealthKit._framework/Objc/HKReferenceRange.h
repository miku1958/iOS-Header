//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKInspectableValueCollection, NSString;

@interface HKReferenceRange : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_referenceRangeIdentifier;
    HKInspectableValueCollection *_valueRange;
}

@property (readonly, nonatomic) NSString *referenceRangeIdentifier; // @synthesize referenceRangeIdentifier=_referenceRangeIdentifier;
@property (readonly, nonatomic) HKInspectableValueCollection *valueRange; // @synthesize valueRange=_valueRange;

+ (id)referenceRangeWithIdentifier:(id)arg1 inspectableValueRange:(id)arg2;
+ (id)referenceRangeWithIdentifier:(id)arg1 maxValue:(id)arg2;
+ (id)referenceRangeWithIdentifier:(id)arg1 minValue:(id)arg2;
+ (id)referenceRangeWithIdentifier:(id)arg1 minValue:(id)arg2 maxValue:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

