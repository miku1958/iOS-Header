//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIUserActionTargetDiscovering-Protocol.h>

@class CNUIUserActionTargetDiscoveryCache, NSString;
@protocol CNCapabilities, CNLSApplicationWorkspace, CNMCProfileConnection, CNSchedulerProvider, CNTUCallProviderManager;

@interface CNUIUserActionTargetDiscovering : NSObject <CNUIUserActionTargetDiscovering>
{
    id<CNLSApplicationWorkspace> _applicationWorkspace;
    id<CNTUCallProviderManager> _callProviderManager;
    id<CNMCProfileConnection> _profileConnection;
    id<CNCapabilities> _capabilities;
    id<CNSchedulerProvider> _schedulerProvider;
    id<CNSchedulerProvider> _highLatencySchedulerProvider;
    CNUIUserActionTargetDiscoveryCache *_cache;
}

@property (readonly, nonatomic) id<CNLSApplicationWorkspace> applicationWorkspace; // @synthesize applicationWorkspace=_applicationWorkspace;
@property (readonly, nonatomic) CNUIUserActionTargetDiscoveryCache *cache; // @synthesize cache=_cache;
@property (readonly, nonatomic) id<CNTUCallProviderManager> callProviderManager; // @synthesize callProviderManager=_callProviderManager;
@property (readonly, nonatomic) id<CNCapabilities> capabilities; // @synthesize capabilities=_capabilities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<CNSchedulerProvider> highLatencySchedulerProvider; // @synthesize highLatencySchedulerProvider=_highLatencySchedulerProvider;
@property (readonly, nonatomic) id<CNMCProfileConnection> profileConnection; // @synthesize profileConnection=_profileConnection;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property (readonly) Class superclass;

+ (id)applicationProxiesForIntent:(id)arg1 applicationWorkspace:(id)arg2;
+ (BOOL)isSkypeAvailableWithEnvironment:(id)arg1;
+ (id)os_log;
- (void).cxx_destruct;
- (id)_targetsForActionType:(id)arg1;
- (void)dealloc;
- (id)initWithApplicationWorkspace:(id)arg1 callProviderManager:(id)arg2 profileConnection:(id)arg3 schedulerProvider:(id)arg4 highLatencySchedulerProvider:(id)arg5 capabilities:(id)arg6;
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
- (id)targetsForDirections;
- (id)targetsForEmail;
- (id)targetsForPay;
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
