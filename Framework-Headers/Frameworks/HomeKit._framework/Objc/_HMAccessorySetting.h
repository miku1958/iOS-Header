//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFMerging-Protocol.h>
#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessorySettings, HMFUnfairLock, NSArray, NSMutableOrderedSet, NSString, NSUUID, _HMContext;
@protocol NSCopying><NSSecureCoding, OS_dispatch_queue, _HMAccesorySettingDelegate;

@interface _HMAccessorySetting : NSObject <HMFLogging, HMFMessageReceiver, HMFMerging, NSSecureCoding>
{
    HMFUnfairLock *_lock;
    NSMutableOrderedSet *_constraints;
    BOOL _reflected;
    id<NSCopying><NSSecureCoding> _value;
    id<_HMAccesorySettingDelegate> _delegate;
    NSUUID *_identifier;
    long long _type;
    unsigned long long _properties;
    NSString *_name;
    HMAccessorySettings *_accessorySettings;
    _HMContext *_context;
}

@property (weak, nonatomic) HMAccessorySettings *accessorySettings; // @synthesize accessorySettings=_accessorySettings;
@property (readonly, copy) NSArray *constraints;
@property (strong, nonatomic) _HMContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<_HMAccesorySettingDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, copy) NSString *name; // @synthesize name=_name;
@property (readonly) unsigned long long properties; // @synthesize properties=_properties;
@property (readonly, getter=isReflected) BOOL reflected; // @synthesize reflected=_reflected;
@property (readonly) Class superclass;
@property (readonly) long long type; // @synthesize type=_type;
@property (copy) id<NSCopying><NSSecureCoding> value; // @synthesize value=_value;

+ (id)_encodedConstraintsToAdd:(id)arg1;
+ (id)_encodedConstraintsToRemove:(id)arg1;
+ (id)_replaceConstraintsPayloadWithAdditions:(id)arg1 removals:(id)arg2;
+ (id)logCategory;
+ (id)shortDescription;
+ (id)supportedConstraintClasses;
+ (id)supportedValueClasses;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_handleAddedConstraint:(id)arg1;
- (void)_handleRemovedConstraint:(id)arg1;
- (void)_handleUpdatedValue:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)addConstraint:(id)arg1;
- (void)addConstraint:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)configureWithAccessorySettings:(id)arg1 context:(id)arg2;
- (id)constraintWithType:(long long)arg1;
- (void)dealloc;
- (id)descriptionWithPointer:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 properties:(unsigned long long)arg2 name:(id)arg3 constraints:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)logIdentifier;
- (BOOL)mergeConstraints:(id)arg1;
- (BOOL)mergeObject:(id)arg1;
- (id)messageDestination;
- (void)notifyDelegateOfAddedConstraint:(id)arg1;
- (void)notifyDelegateOfRemovedConstraint:(id)arg1;
- (void)removeConstraint:(id)arg1;
- (void)removeConstraint:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)replaceConstraints:(id)arg1 withConstraints:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setConstraints:(id)arg1;
- (void)setReflected:(BOOL)arg1;
- (id)shortDescription;
- (void)updateConstraints:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
