//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFExperimentForSiriVOXSounds-Protocol.h>
#import <AssistantServices/AFExperimentForSiriVOXTapToSiriBehavior-Protocol.h>
#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface AFExperiment : NSObject <AFExperimentForSiriVOXSounds, AFExperimentForSiriVOXTapToSiriBehavior, NSCopying, NSSecureCoding>
{
    NSString *_configurationIdentifier;
    NSString *_configurationVersion;
    NSString *_deploymentGroupIdentifier;
    NSDictionary *_deploymentGroupProperties;
    long long _deploymentReason;
}

@property (readonly, copy, nonatomic) NSString *configurationIdentifier; // @synthesize configurationIdentifier=_configurationIdentifier;
@property (readonly, copy, nonatomic) NSString *configurationVersion; // @synthesize configurationVersion=_configurationVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *deploymentGroupIdentifier; // @synthesize deploymentGroupIdentifier=_deploymentGroupIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *deploymentGroupProperties; // @synthesize deploymentGroupProperties=_deploymentGroupProperties;
@property (readonly, nonatomic) long long deploymentReason; // @synthesize deploymentReason=_deploymentReason;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL playsSessionInactiveSoundForSiriVOXSounds;
@property (readonly, nonatomic) BOOL playsSound;
@property (readonly, nonatomic) BOOL playsTwoShotSoundForSiriVOXSounds;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfigurationIdentifier:(id)arg1 configurationVersion:(id)arg2 deploymentGroupIdentifier:(id)arg3 deploymentGroupProperties:(id)arg4 deploymentReason:(long long)arg5;
- (BOOL)isEqual:(id)arg1;
- (void)logExperimentExposureForSiriVOXSounds;
- (void)logExperimentExposureForTapToSiriBehavior;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

