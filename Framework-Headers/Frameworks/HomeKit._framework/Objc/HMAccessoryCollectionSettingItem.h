//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessoryCollectionSetting, HMFUnfairLock, NSData, NSUUID;
@protocol NSObject><NSCopying><NSSecureCoding;

@interface HMAccessoryCollectionSettingItem : NSObject <NSCopying, NSSecureCoding>
{
    HMFUnfairLock *_lock;
    id<NSObject><NSCopying><NSSecureCoding> _value;
    NSData *_serializedValue;
    NSUUID *_identifier;
    HMAccessoryCollectionSetting *_setting;
}

@property (readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly) NSData *serializedValue; // @synthesize serializedValue=_serializedValue;
@property (weak) HMAccessoryCollectionSetting *setting; // @synthesize setting=_setting;
@property (readonly, copy) id<NSObject><NSCopying><NSSecureCoding> value; // @synthesize value=_value;

+ (id)shortDescription;
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
- (id)initWithValue:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)shortDescription;

@end

