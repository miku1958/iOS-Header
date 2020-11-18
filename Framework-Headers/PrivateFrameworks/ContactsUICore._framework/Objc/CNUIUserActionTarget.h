//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CNTUCallProvider;

@interface CNUIUserActionTarget : NSObject
{
    NSString *_name;
    NSString *_bundleIdentifier;
    NSString *_teamIdentifier;
    NSString *_actionType;
    id<CNTUCallProvider> _callProvider;
}

@property (readonly, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property (copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (strong) id<CNTUCallProvider> callProvider; // @synthesize callProvider=_callProvider;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSString *teamIdentifier; // @synthesize teamIdentifier=_teamIdentifier;

+ (id)descriptorForRequiredKeysForActionDiscovering;
+ (id)targetForEmailWithMail;
+ (id)targetForSendMessageIntentWithAppProxy:(id)arg1;
+ (id)targetForStartAudioCallIntentWithAppProxy:(id)arg1;
+ (id)targetForStartVideoCallIntentWithAppProxy:(id)arg1;
+ (id)targetForTextWithMessages;
+ (id)targetForTextWithSkype;
+ (id)targetForVideoWithCallProvider:(id)arg1;
+ (id)targetForVideoWithFaceTime;
+ (id)targetForVideoWithSkype;
+ (id)targetForVoiceWithCallProvider:(id)arg1;
+ (id)targetForVoiceWithFaceTime;
+ (id)targetForVoiceWithSkype;
+ (id)targetForVoiceWithTelephony;
- (void).cxx_destruct;
- (id)actionsForContact:(id)arg1 discoveringEnvironment:(id)arg2;
- (id)actionsForEmailAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForInstantMessageAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForPhoneNumbers:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForSocialProfiles:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (unsigned long long)hash;
- (id)init;
- (id)initWithName:(id)arg1 bundleIdentifier:(id)arg2 teamIdentifier:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end

