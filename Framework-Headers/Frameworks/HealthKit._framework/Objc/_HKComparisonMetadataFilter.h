//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/_HKMetadataFilter.h>

@interface _HKComparisonMetadataFilter : _HKMetadataFilter
{
    id _value;
}

@property (readonly, nonatomic) id value; // @synthesize value=_value;

+ (BOOL)_acceptsOperatorType:(unsigned long long)arg1;
+ (id)filterWithKey:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithKey:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3;
- (BOOL)acceptsDataObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
