//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDSettingBaseProtocol-Protocol.h>

@class HMSettingValue, NSMutableArray, NSNumber, NSString, NSUUID;

@interface HMDSetting : NSObject <HMDSettingBaseProtocol>
{
    BOOL _readOnly;
    NSUUID *_identifier;
    NSUUID *_parentIdentifier;
    NSString *_name;
    NSMutableArray *_constraints;
    NSString *_keyPath;
    NSNumber *_type;
    NSNumber *_properties;
    HMSettingValue *_internalValue;
}

@property (strong) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (copy) HMSettingValue *internalValue; // @synthesize internalValue=_internalValue;
@property (copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property (readonly, copy) NSString *name; // @synthesize name=_name;
@property (readonly, copy) NSUUID *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
@property (copy) NSNumber *properties; // @synthesize properties=_properties;
@property (getter=isReadOnly) BOOL readOnly; // @synthesize readOnly=_readOnly;
@property (readonly) Class superclass;
@property (copy) NSNumber *type; // @synthesize type=_type;
@property (readonly, copy) id value;

+ (id)logCategory;
+ (id)settingValueWithModel:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addConstraint:(id)arg1;
- (id)constraintsByKeyPathWithCurrentKeyPath:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 name:(id)arg3 properties:(id)arg4 type:(id)arg5 value:(id)arg6 constraints:(id)arg7;
- (id)initWithModel:(id)arg1;
- (BOOL)isValidValue:(id)arg1;
- (id)logIdentifier;
- (BOOL)updateWithSettingValue:(id)arg1;
- (BOOL)wouldValueUpdate:(id)arg1;

@end

