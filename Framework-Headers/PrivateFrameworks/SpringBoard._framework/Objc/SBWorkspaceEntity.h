//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/NSCopying-Protocol.h>
#import <SpringBoard/SBActivationSettings-Protocol.h>
#import <SpringBoard/SBDeactivationSettings-Protocol.h>
#import <SpringBoard/SBLayoutElementDescriptor-Protocol.h>

@class NSString, SBActivationSettings, SBDeactivationSettings;

@interface SBWorkspaceEntity : NSObject <NSCopying, SBActivationSettings, SBDeactivationSettings, BSDescriptionProviding, SBLayoutElementDescriptor>
{
    NSString *_identifier;
    long long _layoutRole;
    SBActivationSettings *_activationSettings;
    SBDeactivationSettings *_deactivationSettings;
    long long __mainDisplayPreferredInterfaceOrientation;
}

@property (nonatomic, getter=_mainDisplayPreferredInterfaceOrientation, setter=_setMainDisplayPreferredInterfaceOrientation:) long long _mainDisplayPreferredInterfaceOrientation; // @synthesize _mainDisplayPreferredInterfaceOrientation=__mainDisplayPreferredInterfaceOrientation;
@property (readonly, nonatomic) SBActivationSettings *activationSettings; // @synthesize activationSettings=_activationSettings;
@property (readonly, nonatomic) SBDeactivationSettings *deactivationSettings; // @synthesize deactivationSettings=_deactivationSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) CDUnknownBlockType entityGenerator;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isEmptyWorkspaceEntity;
@property (readonly, nonatomic) BOOL isHomeScreenEntity;
@property (readonly, nonatomic) BOOL isPreviousWorkspaceEntity;
@property (readonly, nonatomic) unsigned long long layoutAttributes;
@property (nonatomic) long long layoutRole; // @synthesize layoutRole=_layoutRole;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long supportedLayoutRoles;
@property (readonly, nonatomic) BOOL supportsPresentationAtAnySize;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) Class viewControllerClass;
@property (readonly, nonatomic) BOOL wantsExclusiveForeground;

+ (id)entity;
- (void).cxx_destruct;
- (CDUnknownBlockType)_generator;
- (BOOL)_supportsLayoutRole:(long long)arg1;
- (id)appClipPlaceholderEntity;
- (id)applicationSceneEntity;
- (void)applyActivationSettings:(id)arg1;
- (void)applyDeactivationSettings:(id)arg1;
- (BOOL)boolForActivationSetting:(unsigned int)arg1;
- (BOOL)boolForDeactivationSetting:(unsigned int)arg1;
- (void)clearActivationSettings;
- (void)clearDeactivationSettings;
- (id)copyActivationSettings;
- (id)copyDeactivationSettings;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)deviceApplicationSceneEntity;
- (long long)flagForActivationSetting:(unsigned int)arg1;
- (long long)flagForDeactivationSetting:(unsigned int)arg1;
- (BOOL)hasLayoutAttributes:(unsigned long long)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1 displayChangeSettings:(id)arg2;
- (id)inlineAppExposeWorkspaceEntity;
- (BOOL)isAnalogousToEntity:(id)arg1;
- (BOOL)isAppClipPlaceholderEntity;
- (BOOL)isApplicationSceneEntity;
- (BOOL)isDeviceApplicationSceneEntity;
- (BOOL)isInlineAppExposeWorkspaceEntity;
- (id)objectForActivationSetting:(unsigned int)arg1;
- (id)objectForDeactivationSetting:(unsigned int)arg1;
- (long long)preferredInterfaceOrientationOnDisplayWithIdentity:(id)arg1;
- (void)setFlag:(long long)arg1 forActivationSetting:(unsigned int)arg2;
- (void)setFlag:(long long)arg1 forDeactivationSetting:(unsigned int)arg2;
- (void)setObject:(id)arg1 forActivationSetting:(unsigned int)arg2;
- (void)setObject:(id)arg1 forDeactivationSetting:(unsigned int)arg2;
- (void)setPreferredInterfaceOrientation:(long long)arg1 onDisplayWithIdentity:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (BOOL)supportsLayoutRole:(long long)arg1;

@end
