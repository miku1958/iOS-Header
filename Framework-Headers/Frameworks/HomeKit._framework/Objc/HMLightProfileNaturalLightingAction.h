//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMAction.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMLightProfile, NSArray, NSString, NSUUID;

@interface HMLightProfileNaturalLightingAction : HMAction <NSSecureCoding, HMObjectMerge, HMFLogging, HMFObject>
{
    BOOL _naturalLightingEnabled;
    HMLightProfile *_lightProfile;
    NSUUID *_lightProfileUUID;
}

@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) HMLightProfile *lightProfile; // @synthesize lightProfile=_lightProfile;
@property (readonly) NSUUID *lightProfileUUID; // @synthesize lightProfileUUID=_lightProfileUUID;
@property (getter=isNaturalLightingEnabled) BOOL naturalLightingEnabled; // @synthesize naturalLightingEnabled=_naturalLightingEnabled;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;

+ (id)_actionWithInfo:(id)arg1 home:(id)arg2;
+ (id)logCategory;
+ (id)new;
+ (id)shortDescription;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 actionSet:(id)arg2;
- (BOOL)_handleUpdates:(id)arg1;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)_serializeForAdd;
- (id)encodeAsProtoBuf;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLightProfile:(id)arg1 naturalLightingEnabled:(BOOL)arg2;
- (id)initWithPBNaturalLightingAction:(id)arg1 home:(id)arg2;
- (id)initWithUUID:(id)arg1;
- (id)initWithUUID:(id)arg1 lightProfileUUID:(id)arg2 naturalLightingEnabled:(BOOL)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;
- (id)logIdentifier;
- (unsigned long long)type;
- (void)updateNaturalLightingEnabled:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

