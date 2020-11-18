//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/_HKFilter.h>

@class NSString;

@interface _HKStringFilter : _HKFilter
{
    NSString *_value;
    unsigned long long _operatorType;
}

@property (readonly, nonatomic) unsigned long long operatorType; // @synthesize operatorType=_operatorType;
@property (readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;

+ (id)_acceptedKeyPath;
+ (BOOL)_acceptsDataType:(id)arg1;
+ (BOOL)_supportsOperatorType:(unsigned long long)arg1;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperatorType:(unsigned long long)arg1 value:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end
