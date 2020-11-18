//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/_HKFilter.h>

@class NSArray;

@interface _HKCompoundFilter : _HKFilter
{
    NSArray *_subfilters;
    unsigned long long _compoundType;
}

@property (readonly, nonatomic) unsigned long long compoundType; // @synthesize compoundType=_compoundType;
@property (readonly, nonatomic) NSArray *subfilters; // @synthesize subfilters=_subfilters;

+ (id)filterWithSubfilters:(id)arg1 compoundType:(unsigned long long)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)acceptsDataObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
