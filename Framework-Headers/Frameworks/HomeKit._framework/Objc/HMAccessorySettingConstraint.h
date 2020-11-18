//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSUUID;

@interface HMAccessorySettingConstraint : NSObject <NSSecureCoding, NSCopying>
{
    NSUUID *_identifier;
    long long _type;
    id _value;
}

@property (readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly) long long type; // @synthesize type=_type;
@property (readonly, copy) id value; // @synthesize value=_value;

+ (id)shortDescription;
+ (id)supportedValueClasses;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2 value:(id)arg3;
- (id)initWithType:(long long)arg1 value:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)shortDescription;

@end
