//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSDescriptionProviding-Protocol.h>
#import <SpringBoardServices/BSSettingDescriptionProvider-Protocol.h>
#import <SpringBoardServices/BSXPCCoding-Protocol.h>
#import <SpringBoardServices/NSSecureCoding-Protocol.h>

@class BSMutableSettings, NSSet, NSString, SBSRemoteAlertPresentationTarget;

@interface SBSRemoteAlertActivationContext : NSObject <BSDescriptionProviding, BSSettingDescriptionProvider, BSXPCCoding, NSSecureCoding>
{
    BSMutableSettings *_settings;
    NSSet *_actions;
    SBSRemoteAlertPresentationTarget *_presentationTarget;
}

@property (strong, nonatomic) NSSet *actions; // @synthesize actions=_actions;
@property (nonatomic, getter=isActivatingForSiri) BOOL activatingForSiri;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SBSRemoteAlertPresentationTarget *presentationTarget; // @synthesize presentationTarget=_presentationTarget;
@property (strong, nonatomic) NSString *reason;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithSettings:(id)arg1 actions:(id)arg2;
- (id)_initWithSettings:(id)arg1 actions:(id)arg2 presentationTarget:(id)arg3;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithActions:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2;
- (id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

