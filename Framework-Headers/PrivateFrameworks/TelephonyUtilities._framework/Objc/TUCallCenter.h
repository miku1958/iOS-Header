//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUCallContainer-Protocol.h>

@class CNContactStore, NSArray, NSString, TUAudioDeviceController, TUCall, TUCallProviderManager, TUCallServicesInterface, TUConversationManager, TURouteController, TUVideoDeviceController;
@protocol OS_dispatch_queue, TUCallContainerPrivate;

@interface TUCallCenter : NSObject <TUCallContainer>
{
    NSObject<OS_dispatch_queue> *_queue;
    TUCallServicesInterface *_callServicesInterface;
    TUAudioDeviceController *_audioDeviceController;
    TUVideoDeviceController *_videoDeviceController;
    TURouteController *_routeController;
    CNContactStore *_contactStore;
    TUCallProviderManager *_providerManager;
    TUConversationManager *_conversationManager;
    CDUnknownBlockType _disconnectCallPreflight;
    struct CGSize _localLandscapeAspectRatio;
    struct CGSize _localPortraitAspectRatio;
}

@property (readonly, nonatomic) TUCall *activeVideoCall;
@property (readonly, nonatomic, getter=isAddCallAllowed) BOOL addCallAllowed;
@property (readonly, nonatomic, getter=isAmbiguous) BOOL ambiguous;
@property (readonly, nonatomic) BOOL anyCallIsEndpointOnCurrentDevice;
@property (readonly, nonatomic) BOOL anyCallIsHostedOnCurrentDevice;
@property (strong, nonatomic) TUAudioDeviceController *audioDeviceController; // @synthesize audioDeviceController=_audioDeviceController;
@property (readonly, nonatomic) id<TUCallContainerPrivate> callContainer;
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
@property (strong, nonatomic) TUConversationManager *conversationManager; // @synthesize conversationManager=_conversationManager;
@property (readonly, nonatomic) unsigned long long currentAudioAndVideoCallCount;
@property (readonly, copy, nonatomic) NSArray *currentAudioAndVideoCalls;
@property (readonly, nonatomic) unsigned long long currentCallCount;
@property (readonly, copy, nonatomic) NSArray *currentCallGroups;
@property (readonly, copy, nonatomic) NSArray *currentCalls;
@property (readonly, nonatomic) TUCall *currentVideoCall;
@property (readonly, nonatomic) unsigned long long currentVideoCallCount;
@property (readonly, copy, nonatomic) NSArray *currentVideoCalls;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType disconnectCallPreflight; // @synthesize disconnectCallPreflight=_disconnectCallPreflight;
@property (readonly, copy, nonatomic) NSArray *displayedCalls;
@property (readonly, nonatomic, getter=isEndAndAnswerAllowed) BOOL endAndAnswerAllowed;
@property (readonly, nonatomic) BOOL hasCurrentAudioCalls;
@property (readonly, nonatomic) BOOL hasCurrentCalls;
@property (readonly, nonatomic) BOOL hasCurrentVideoCalls;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isHoldAndAnswerAllowed) BOOL holdAndAnswerAllowed;
@property (readonly, nonatomic) TUCall *incomingCall;
@property (readonly, copy, nonatomic) NSArray *incomingCalls;
@property (readonly, nonatomic) TUCall *incomingVideoCall;
@property (nonatomic) struct CGSize localLandscapeAspectRatio; // @synthesize localLandscapeAspectRatio=_localLandscapeAspectRatio;
@property (nonatomic) struct CGSize localPortraitAspectRatio; // @synthesize localPortraitAspectRatio=_localPortraitAspectRatio;
@property (strong, nonatomic) TUCallProviderManager *providerManager; // @synthesize providerManager=_providerManager;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) TURouteController *routeController; // @synthesize routeController=_routeController;
@property (readonly) Class superclass;
@property (strong, nonatomic) TUVideoDeviceController *videoDeviceController; // @synthesize videoDeviceController=_videoDeviceController;

+ (id)callCenterWithQueue:(id)arg1;
+ (id)callCenterWithQueue:(id)arg1 daemonDelegate:(id)arg2 shouldRegister:(BOOL)arg3;
+ (const void *)sharedAddressBook;
+ (id)sharedContactStore;
+ (id)sharedInstance;
+ (id)sharedInstanceWithQueue:(id)arg1 daemonDelegate:(id)arg2 shouldRegister:(BOOL)arg3;
- (void).cxx_destruct;
- (id)_allCalls;
- (unsigned long long)_callGroupCountForCall:(id)arg1 withCall:(id)arg2;
- (BOOL)_canDialWithRequest:(id)arg1 shouldUseRelay:(BOOL *)arg2;
- (id)_dialWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_existingCallsAllowDialRequest:(id)arg1 allowVoiceWithData:(BOOL)arg2;
- (BOOL)_isCallingAvailableOnSecondaryDeviceWithRelayCallingAvailability:(int)arg1 isProviderAvailable:(BOOL)arg2 isRelayAllowed:(BOOL)arg3 isEmergency:(BOOL)arg4 supportsBasebandCalling:(BOOL)arg5 shouldUseRelay:(BOOL *)arg6;
- (BOOL)_isEmergencyDialRequest:(id)arg1;
- (void)_preflightDisconnectForCalls:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)_shouldPreferRelayOverDirectSecondaryCallingForRelayingCallingAvailability:(int)arg1 isRelayCallingSupported:(BOOL)arg2 isEmergencyCallbackPossible:(BOOL)arg3;
- (id)activeConversationForCall:(id)arg1;
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
- (id)callServicesClientCapabilities;
- (id)callWithCallUUID:(id)arg1;
- (id)callWithStatus:(int)arg1;
- (id)callWithUniqueProxyIdentifier:(id)arg1;
- (id)callsPassingTest:(CDUnknownBlockType)arg1;
- (id)callsWithGroupUUID:(id)arg1;
- (id)callsWithStatus:(int)arg1;
- (BOOL)canDialWithRequest:(id)arg1;
- (BOOL)canGroupCall:(id)arg1 withCall:(id)arg2;
- (id)conferenceCall;
- (unsigned long long)countOfCallsPassingTest:(CDUnknownBlockType)arg1;
- (void)dealloc;
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
- (BOOL)existingCallsHaveMultipleProviders;
- (id)frontmostAudioOrVideoCall;
- (id)frontmostCall;
- (void)groupCall:(id)arg1 withOtherCall:(id)arg2;
- (void)handleActionForWiredHeadsetMiddleButtonLongPress;
- (void)handleActionForWiredHeadsetMiddleButtonPress;
- (void)holdActiveAndAnswerCall:(id)arg1;
- (void)holdCall:(id)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (BOOL)isDirectCallingCurrentlyAvailableForProvider:(id)arg1 isVideo:(BOOL)arg2;
- (BOOL)isHardPauseAvailable;
- (BOOL)isHoldAllowed;
- (BOOL)isMergeable;
- (BOOL)isRelayCallingSupportedForProvider:(id)arg1 isVideo:(BOOL)arg2;
- (BOOL)isSendToVoicemailAllowed;
- (BOOL)isSwappable;
- (BOOL)isTakingCallsPrivateAllowed;
- (id)joinConversationWithConversationRequest:(id)arg1;
- (void)joinConversationWithRequest:(id)arg1;
- (void)launchAppForDialRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)launchAppForJoinRequest:(id)arg1;
- (void)pullCallFromClientUsingHandoffActivityUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pullHostedCallsFromPairedHostDevice;
- (void)pullRelayingCallsFromClient;
- (void)pushHostedCallsToDestination:(id)arg1;
- (void)pushRelayingCallsToHost;
- (void)pushRelayingCallsToHostWithSourceIdentifier:(id)arg1;
- (void)registerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reportLocalPreviewStoppedForCall:(id)arg1;
- (void)resumeCall:(id)arg1;
- (void)sendFieldModeDigits:(id)arg1 forProvider:(id)arg2;
- (void)setTTYType:(int)arg1 forCall:(id)arg2;
- (BOOL)shouldPreferRelayOverDirectSecondaryCallingForProvider:(id)arg1 isVideo:(BOOL)arg2;
- (void)swapCalls;
- (void)ungroupCall:(id)arg1;
- (void)unholdCall:(id)arg1;
- (void)updateCall:(id)arg1 withAnswerRequest:(id)arg2;
- (id)videoCallWithStatus:(int)arg1;
- (void)willEnterBackgroundForAllCalls;

@end

