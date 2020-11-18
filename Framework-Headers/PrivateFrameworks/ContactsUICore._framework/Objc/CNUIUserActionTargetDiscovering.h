//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIUserActionTargetDiscovering-Protocol.h>

@class CNCache, NSString;
@protocol CNUIUserActionDiscoveringEnvironment;

@interface CNUIUserActionTargetDiscovering : NSObject <CNUIUserActionTargetDiscovering>
{
    id<CNUIUserActionDiscoveringEnvironment> _discoveringEnvironment;
    CNCache *_cache;
}

@property (readonly, nonatomic) CNCache *cache; // @synthesize cache=_cache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<CNUIUserActionDiscoveringEnvironment> discoveringEnvironment; // @synthesize discoveringEnvironment=_discoveringEnvironment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)applicationProxiesForIntent:(id)arg1 environment:(id)arg2;
+ (BOOL)isSkypeAvailableWithEnvironment:(id)arg1;
- (void).cxx_destruct;
- (id)_targetsForActionType:(id)arg1;
- (id)initWithDiscoveringEnvironment:(id)arg1;
- (id)observableForTargetsChangedForActionType:(id)arg1 schedulerProvider:(id)arg2;
- (void)resetTargetsForActionType:(id)arg1;
- (id)targetForTextWithMessages;
- (id)targetForTextWithSkype;
- (id)targetForVideoWithFaceTime;
- (id)targetForVideoWithSkype;
- (id)targetForVoiceWithFaceTime;
- (id)targetForVoiceWithSkype;
- (id)targetForVoiceWithTelephony;
- (id)targetsForActionType:(id)arg1;
- (id)targetsForEmail;
- (id)targetsForSendMessageIntent;
- (id)targetsForStartAudioCallIntent;
- (id)targetsForStartVideoCallIntent;
- (id)targetsForText;
- (id)targetsForVideo;
- (id)targetsForVideoWithThirdPartyCallProviders;
- (id)targetsForVoice;
- (id)targetsForVoiceWithThirdPartyCallProviders;
- (id)thirdPartyTargetsForActionTypes:(id)arg1;
- (id)thirdPartyTargetsForBundleIdentifier:(id)arg1;

@end

