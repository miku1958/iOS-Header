//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUAudioDeviceControllerActions-Protocol.h>
#import <TelephonyUtilities/TUCallServicesClientCapabilitiesActions-Protocol.h>
#import <TelephonyUtilities/TUCallServicesProxyCallActions-Protocol.h>
#import <TelephonyUtilities/TUCallServicesXPCClient-Protocol.h>
#import <TelephonyUtilities/TURouteControllerActions-Protocol.h>

@class NSArray, NSDictionary, NSMapTable, NSString, NSXPCConnection, TUCallCenter, TUCallNotificationManager, TUCallServicesClientCapabilities;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, TUCallContainerPrivate, TUCallServicesXPCServer, TURouteControllerClient;

@interface TUCallServicesInterface : NSObject <TUCallServicesXPCClient, TUCallServicesProxyCallActions, TUCallServicesClientCapabilitiesActions, TUAudioDeviceControllerActions, TURouteControllerActions>
{
    BOOL _hasRequestedInitialState;
    BOOL _hasDaemonDelegateLaunched;
    int _connectionRequestNotificationToken;
    id<TURouteControllerClient> _routeControllerClient;
    id<TUCallServicesXPCServer> _daemonDelegate;
    TUCallServicesClientCapabilities *_callServicesClientCapabilities;
    TUCallCenter *_callCenter;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_semaphore> *_initialStateSemaphore;
    NSArray *_currentCalls;
    NSMapTable *_uniqueProxyIdentifierToProxyCall;
    TUCallNotificationManager *_callNotificationManager;
    NSArray *_localProxyCalls;
}

@property (weak, nonatomic) TUCallCenter *callCenter; // @synthesize callCenter=_callCenter;
@property (readonly, nonatomic) id<TUCallContainerPrivate> callContainer;
@property (strong, nonatomic) TUCallNotificationManager *callNotificationManager; // @synthesize callNotificationManager=_callNotificationManager;
@property (strong, nonatomic) TUCallServicesClientCapabilities *callServicesClientCapabilities; // @synthesize callServicesClientCapabilities=_callServicesClientCapabilities;
@property (nonatomic) int connectionRequestNotificationToken; // @synthesize connectionRequestNotificationToken=_connectionRequestNotificationToken;
@property (copy, nonatomic) NSArray *currentCalls; // @synthesize currentCalls=_currentCalls;
@property (weak, nonatomic) id<TUCallServicesXPCServer> daemonDelegate; // @synthesize daemonDelegate=_daemonDelegate;
@property (readonly, nonatomic) BOOL daemonDelegateIsLocal;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasDaemonDelegateLaunched; // @synthesize hasDaemonDelegateLaunched=_hasDaemonDelegateLaunched;
@property (nonatomic) BOOL hasRequestedInitialState; // @synthesize hasRequestedInitialState=_hasRequestedInitialState;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_semaphore> *initialStateSemaphore; // @synthesize initialStateSemaphore=_initialStateSemaphore;
@property (copy, nonatomic) NSArray *localProxyCalls; // @synthesize localProxyCalls=_localProxyCalls;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly, nonatomic) void *queueContext;
@property (strong, nonatomic) id<TURouteControllerClient> routeControllerClient; // @synthesize routeControllerClient=_routeControllerClient;
@property (readonly, nonatomic) NSDictionary *routesByUniqueIdentifier;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSMapTable *uniqueProxyIdentifierToProxyCall; // @synthesize uniqueProxyIdentifierToProxyCall=_uniqueProxyIdentifierToProxyCall;
@property (strong, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

- (void).cxx_destruct;
- (oneway void)_handleCurrentCallsChanged:(id)arg1 callsDisconnected:(id)arg2;
- (id)_proxyCallWithCall:(id)arg1;
- (id)_proxyCallWithUniqueProxyIdentifier:(id)arg1;
- (void)_registerCall:(id)arg1;
- (void)_setUpXPCConnection;
- (void)_tearDownXPCConnection;
- (void)_updateCurrentCalls:(id)arg1;
- (void)_updateCurrentCalls:(id)arg1 withNotificationsUsingUpdatedCalls:(id)arg2;
- (void)_updateCurrentCallsWithoutNotifications:(id)arg1;
- (oneway void)answerCallWithRequest:(id)arg1;
- (id)daemonDelegateWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)dialWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)disconnectAllCalls;
- (oneway void)disconnectCallWithUniqueProxyIdentifier:(id)arg1;
- (oneway void)disconnectCurrentCallAndActivateHeld;
- (oneway void)enteredBackgroundForAllCalls;
- (oneway void)enteredForegroundForCallWithUniqueProxyIdentifier:(id)arg1;
- (oneway void)groupCallWithUniqueProxyIdentifier:(id)arg1 withOtherCallWithUniqueProxyIdentifier:(id)arg2;
- (oneway void)handleCurrentCallsChanged:(id)arg1 callDisconnected:(id)arg2;
- (oneway void)handleFrequencyChangedTo:(id)arg1 inDirection:(int)arg2 forCallsWithUniqueProxyIdentifiers:(id)arg3;
- (oneway void)handleNotificationName:(id)arg1 forCallWithUniqueProxyIdentifier:(id)arg2 userInfo:(id)arg3;
- (oneway void)handleRoutesByUniqueIdentifierUpdated:(id)arg1;
- (void)handleServerDisconnect;
- (void)handleServerReconnect;
- (oneway void)holdCallWithUniqueProxyIdentifier:(id)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1 callCenter:(id)arg2;
- (oneway void)joinConversationWithRequest:(id)arg1;
- (void)performBlockOnQueue:(CDUnknownBlockType)arg1;
- (void)performBlockOnQueue:(CDUnknownBlockType)arg1 andWait:(BOOL)arg2;
- (oneway void)pickRouteWithUniqueIdentifier:(id)arg1;
- (oneway void)playDTMFToneForCallWithUniqueProxyIdentifier:(id)arg1 key:(unsigned char)arg2;
- (oneway void)pullCallFromClientUsingHandoffActivityUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)pullHostedCallsFromPairedHostDevice;
- (oneway void)pullRelayingCallsFromClient;
- (oneway void)pushHostedCallsToDestination:(id)arg1;
- (oneway void)pushRelayingCallsToHostWithSourceIdentifier:(id)arg1;
- (void)registerCall:(id)arg1;
- (void)requestCurrentStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (oneway void)resetCallProvisionalStates;
- (oneway void)routesByUniqueIdentifier:(CDUnknownBlockType)arg1;
- (oneway void)sendHardPauseDigitsForCallWithUniqueProxyIdentifier:(id)arg1;
- (oneway void)sendMMIOrUSSDCodeWithRequest:(id)arg1;
- (oneway void)setClientCapabilities:(id)arg1;
- (oneway void)setCurrentAudioInputDeviceToDeviceWithUID:(id)arg1;
- (oneway void)setCurrentAudioOutputDeviceToDeviceWithUID:(id)arg1;
- (oneway void)setDownlinkMuted:(BOOL)arg1 forCallWithUniqueProxyIdentifier:(id)arg2;
- (oneway void)setRemoteVideoPresentationSizeForCallWithUniqueProxyIdentifier:(id)arg1 size:(struct CGSize)arg2;
- (oneway void)setRemoteVideoPresentationStateForCallWithUniqueProxyIdentifier:(id)arg1 presentationState:(int)arg2;
- (oneway void)setTTYType:(int)arg1 forCallWithUniqueProxyIdentifier:(id)arg2;
- (oneway void)setUplinkMuted:(BOOL)arg1 forCallWithUniqueProxyIdentifier:(id)arg2;
- (oneway void)swapCalls;
- (id)synchronousDaemonDelegateWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)tearDownXPCConnection;
- (oneway void)ungroupCallWithUniqueProxyIdentifier:(id)arg1;
- (oneway void)unholdCallWithUniqueProxyIdentifier:(id)arg1;
- (oneway void)updateCallWithProxy:(id)arg1;
- (void)waitForInitialStateIfNecessary;
- (oneway void)willEnterBackgroundForAllCalls;

@end
