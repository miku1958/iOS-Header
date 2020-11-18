//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;
@protocol NSCopying><NSSecureCoding><NSObject;

@interface HKConceptAttribute : NSObject <NSSecureCoding, NSCopying>
{
    long long _identifier;
    long long _type;
    long long _valueType;
    id<NSCopying><NSSecureCoding><NSObject> _value;
}

@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) long long longLongValue;
@property (readonly, copy, nonatomic) NSNumber *numberValue;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;
@property (readonly, copy, nonatomic) id<NSCopying><NSSecureCoding><NSObject> value; // @synthesize value=_value;
@property (readonly, nonatomic) long long valueType; // @synthesize valueType=_valueType;

+ (id)attributeWithIdentifier:(long long)arg1 type:(long long)arg2 boolValue:(BOOL)arg3;
+ (id)attributeWithIdentifier:(long long)arg1 type:(long long)arg2 numberValue:(id)arg3;
+ (id)attributeWithIdentifier:(long long)arg1 type:(long long)arg2 stringValue:(id)arg3;
+ (id)attributeWithIdentifier:(long long)arg1 type:(long long)arg2 valueType:(long long)arg3 value:(id)arg4;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(long long)arg1 type:(long long)arg2 valueType:(long long)arg3 value:(id)arg4;
- (BOOL)isEqual:(id)arg1;

@end
