//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMSettingValue, NSString, NSUUID;
@protocol HMSettingManager;

@interface HMSetting : NSObject <NSSecureCoding>
{
    id _value;
    NSString *_keyPath;
    NSUUID *_identifier;
    Class _valueClass;
    long long _type;
    id<HMSettingManager> _settingManager;
    NSString *_name;
    unsigned long long _properties;
}

@property (readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly) HMSettingValue *internalValue;
@property (copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property (readonly, copy) NSString *localizedTitle;
@property (copy) NSString *name; // @synthesize name=_name;
@property unsigned long long properties; // @synthesize properties=_properties;
@property (weak) id<HMSettingManager> settingManager; // @synthesize settingManager=_settingManager;
@property long long type; // @synthesize type=_type;
@property (copy) id value; // @synthesize value=_value;
@property (strong) Class valueClass; // @synthesize valueClass=_valueClass;
@property (readonly, getter=isWritable) BOOL writable;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 name:(id)arg2 type:(long long)arg3 value:(id)arg4 properties:(unsigned long long)arg5;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 type:(long long)arg3 value:(id)arg4 properties:(unsigned long long)arg5;
- (id)initWithInternal;
- (BOOL)isEqual:(id)arg1;
- (void)merge:(id)arg1;
- (void)updateValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)valueForUpdate:(id)arg1;

@end
