//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/_HKFilter.h>

@interface _HKBooleanFilter : _HKFilter
{
    BOOL _boolValue;
}

@property (readonly, nonatomic) BOOL boolValue; // @synthesize boolValue=_boolValue;

+ (id)filterWithBoolValue:(BOOL)arg1;
+ (BOOL)supportsSecureCoding;
- (BOOL)acceptsDataObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
