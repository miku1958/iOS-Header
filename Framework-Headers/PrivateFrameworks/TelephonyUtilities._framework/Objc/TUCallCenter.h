//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CNContactStore, NSArray, TUAudioDeviceController, TUCall, TUCallProviderManager, TUCallServicesInterface;
@protocol OS_dispatch_queue;

@interface TUCallCenter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    TUCallServicesInterface *_callServicesInterface;
    TUAudioDeviceController *_audioDeviceController;
    CNContactStore *_contactStore;
    TUCallProviderManager *_providerManager;
    struct CGSize _localLandscapeAspectRatio;
    struct CGSize _localPortraitAspectRatio;
}

@property (readonly, nonatomic) TUCall *activeVideoCall;
@property (readonly, nonatomic, getter=isAddCallAllowed) BOOL addCallAllowed;
@property (readonly, nonatomic, getter=isAmbiguous) BOOL ambiguous;
@property (readonly, nonatomic) BOOL anyCallIsEndpointOnCurrentDevice;
@property (readonly, nonatomic) BOOL anyCallIsHostedOnCurrentDevice;
@property (strong, nonatomic) TUAudioDeviceController *audioDeviceController; // @synthesize audioDeviceController=_audioDeviceController;
@property (readonly, nonatomic) unsigned long long callCountOnDefaultPairedDevice;
@property (readonly, copy, nonatomic) NSArray *callGroupsOnDefaultPairedDevice;
@property (strong, nonatomic) TUCallServicesInterface *callServicesInterface; // @synthesize callServicesInterface=_callServicesInterface;
@property (readonly, copy, nonatomic) NSArray *callsHostedElsewhere;
@property (readonly, copy, nonatomic) NSArray *callsHostedOrAnEndpointElsewhere;
@property (readonly, copy, nonatomic) NSArray *callsOnDefaultPairedDevice;
@property (readonly, copy, nonatomic) NSArray *callsWithAnEndpointElsewhere;
@property (readonly, nonatomic) BOOL canMergeCalls;
@property (readonly, copy, nonatomic) NSArray *conferenceParticipantCalls;
@property (strong, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property (readonly, nonatomic) unsigned long long currentAudioAndVideoCallCount;
@property (readonly, copy, nonatomic) NSArray *currentAudioAndVideoCalls;
@property (readonly, nonatomic) unsigned long long currentCallCount;
@property (readonly, copy, nonatomic) NSArray *currentCallGroups;
@property (readonly, copy, nonatomic) NSArray *currentCalls;
@property (readonly, nonatomic) TUCall *currentVideoCall;
@property (readonly, nonatomic) unsigned long long currentVideoCallCount;
@property (readonly, copy, nonatomic) NSArray *currentVideoCalls;
@property (readonly, copy, nonatomic) NSArray *displayedCalls;
@property (readonly, nonatomic, getter=isEndAndAnswerAllowed) BOOL endAndAnswerAllowed;
@property (readonly, nonatomic) BOOL hasCurrentAudioCalls;
@property (readonly, nonatomic) BOOL hasCurrentCalls;
@property (readonly, nonatomic) BOOL hasCurrentVideoCalls;
@property (readonly, nonatomic, getter=isHoldAndAnswerAllowed) BOOL holdAndAnswerAllowed;
@property (readonly, nonatomic) TUCall *incomingCall;
@property (readonly, copy, nonatomic) NSArray *incomingCalls;
@property (readonly, nonatomic) TUCall *incomingVideoCall;
@property (nonatomic) struct CGSize localLandscapeAspectRatio; // @synthesize localLandscapeAspectRatio=_localLandscapeAspectRatio;
@property (nonatomic) struct CGSize localPortraitAspectRatio; // @synthesize localPortraitAspectRatio=_localPortraitAspectRatio;
@property (strong, nonatomic) TUCallProviderManager *providerManager; // @synthesize providerManager=_providerManager;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

+ (id)callCenterWithQueue:(id)arg1;
+ (id)displayedCallFromCalls:(id)arg1;
+ (BOOL)isInCallServiceProcess;
+ (const void *)sharedAddressBook;
+ (id)sharedContactStore;
+ (id)sharedInstance;
+ (id)sharedInstanceWithQueue:(id)arg1 daemonDelegate:(id)arg2 shouldRegister:(BOOL)arg3;
- (void).cxx_destruct;
- (id)_allCalls;
- (unsigned long long)_callGroupCountForCall:(id)arg1 withCall:(id)arg2;
- (id)_callGroupsFromCalls:(id)arg1;
- (BOOL)_canDialWithRequest:(id)arg1 shouldUseRelay:(BOOL *)arg2;
- (id)_dial:(id)arg1 callID:(int)arg2 provider:(id)arg3 video:(BOOL)arg4 sourceIdentifier:(id)arg5 dialType:(long long)arg6;
- (id)_dial:(id)arg1 callID:(int)arg2 service:(int)arg3 sourceIdentifier:(id)arg4 dialType:(long long)arg5;
- (id)_dialWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_existingCallsAllowDialRequest:(id)arg1 allowVoiceWithData:(BOOL)arg2;
- (BOOL)_isCallingAvailableOnSecondaryDeviceWithRelayCallingAvailability:(int)arg1 isProviderAvailable:(BOOL)arg2 isRelayAllowed:(BOOL)arg3 shouldUseRelay:(BOOL *)arg4;
- (BOOL)allCallsAreOfService:(int)arg1;
- (BOOL)allCallsPassTest:(CDUnknownBlockType)arg1;
- (void)answerCall:(id)arg1;
- (void)answerCall:(id)arg1 withSourceIdentifier:(id)arg2;
- (void)answerCall:(id)arg1 withSourceIdentifier:(id)arg2 wantsHoldMusic:(BOOL)arg3;
- (void)answerCallWithHoldMusic:(id)arg1;
- (void)answerWithRequest:(id)arg1;
- (BOOL)anyCallPassesTest:(CDUnknownBlockType)arg1;
- (id)audioAndVideoCallsWithStatus:(int)arg1;
- (id)audioOrVideoCallWithStatus:(int)arg1;
- (id)callPassingTest:(CDUnknownBlockType)arg1;
- (id)callPassingTest:(CDUnknownBlockType)arg1 sortedUsingComparator:(CDUnknownBlockType)arg2;
- (id)callPassingTest:(CDUnknownBlockType)arg1 withOptions:(unsigned long long)arg2;
- (id)callServicesClientCapabilities;
- (id)callWithCallUUID:(id)arg1;
- (id)callWithStatus:(int)arg1;
- (id)callWithUniqueProxyIdentifier:(id)arg1;
- (id)callsPassingTest:(CDUnknownBlockType)arg1;
- (id)callsPassingTest:(CDUnknownBlockType)arg1 returningNilForEmpty:(BOOL)arg2;
- (id)callsWithGroupUUID:(id)arg1;
- (id)callsWithStatus:(int)arg1;
- (BOOL)canDialWithRequest:(id)arg1;
- (BOOL)canGroupCall:(id)arg1 withCall:(id)arg2;
- (id)conferenceCall;
- (unsigned long long)countOfCallsPassingTest:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)dial:(id)arg1 callID:(int)arg2 service:(int)arg3;
- (id)dial:(id)arg1 service:(int)arg2;
- (id)dialEmergency:(id)arg1;
- (id)dialEmergency:(id)arg1 sourceIdentifier:(id)arg2;
- (id)dialVoicemail;
- (id)dialVoicemailWithSourceIdentifier:(id)arg1;
- (id)dialWithRequest:(id)arg1;
- (void)dialWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)disconnectAllCalls;
- (void)disconnectCall:(id)arg1;
- (void)disconnectCall:(id)arg1 withReason:(int)arg2;
- (void)disconnectCurrentCallAndActivateHeld;
- (id)displayedCall;
- (id)displayedCallFromCalls:(id)arg1;
- (void)endActiveAndAnswerCall:(id)arg1;
- (void)endActiveOrHeldAndAnswerCall:(id)arg1;
- (void)endHeldAndAnswerCall:(id)arg1;
- (void)enteredBackgroundForAllCalls;
- (void)enteredForegroundForCall:(id)arg1;
- (void)enumerateCallsInvokingBlock:(CDUnknownBlockType)arg1 forCallsPassingTest:(CDUnknownBlockType)arg2;
- (void)enumerateCallsWithOptions:(unsigned long long)arg1 invokingBlock:(CDUnknownBlockType)arg2 forCallsPassingTest:(CDUnknownBlockType)arg3;
- (BOOL)existingCallsHaveMultipleProviders;
- (id)frontmostAudioOrVideoCall;
- (id)frontmostCall;
- (void)groupCall:(id)arg1 withOtherCall:(id)arg2;
- (void)holdActiveAndAnswerCall:(id)arg1;
- (void)holdCall:(id)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (BOOL)isHardPauseAvailable;
- (BOOL)isHoldAllowed;
- (BOOL)isMergeable;
- (BOOL)isSendToVoicemailAllowed;
- (BOOL)isSwappable;
- (BOOL)isTakingCallsPrivateAllowed;
- (void)launchAppForDialRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pullCallFromClientUsingHandoffActivityUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pullHostedCallsFromPairedHostDevice;
- (void)pullRelayingCallsFromClient;
- (void)pushHostedCallsToPairedClientDevice;
- (void)pushRelayingCallsToHost;
- (void)pushRelayingCallsToHostWithSourceIdentifier:(id)arg1;
- (void)registerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resumeCall:(id)arg1;
- (void)sendFieldModeDigits:(id)arg1;
- (BOOL)shouldPreferRelayOverDirectSecondaryCallingForProvider:(id)arg1;
- (void)swapCalls;
- (void)ungroupCall:(id)arg1;
- (void)unholdCall:(id)arg1;
- (id)videoCallWithStatus:(int)arg1;

@end

