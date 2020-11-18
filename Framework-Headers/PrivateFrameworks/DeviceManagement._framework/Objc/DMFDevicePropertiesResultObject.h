//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface DMFDevicePropertiesResultObject : CATTaskResultObject
{
    NSDictionary *_errorsByPropertyKey;
    NSDictionary *_valuesByPropertyKey;
}

@property (copy, nonatomic) NSDictionary *errorsByPropertyKey; // @synthesize errorsByPropertyKey=_errorsByPropertyKey;
@property (copy, nonatomic) NSDictionary *valuesByPropertyKey; // @synthesize valuesByPropertyKey=_valuesByPropertyKey;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValuesByPropertyKey:(id)arg1 errorsByPropertyKey:(id)arg2;
- (id)valueForPropertyKey:(id)arg1 error:(id *)arg2;

@end

