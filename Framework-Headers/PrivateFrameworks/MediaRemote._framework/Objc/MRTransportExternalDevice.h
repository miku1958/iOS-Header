//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRExternalDevice.h>

#import <MediaRemote/MRProtocolClientConnectionDelegate-Protocol.h>

@class CURunLoopThread, MRContentItem, MRDeviceInfo, MRExternalClientConnection, MRExternalDeviceTransport, MROSTransaction, MROrigin, MRPlayerPath, NSArray, NSData, NSDate, NSDictionary, NSObject, NSRunLoop, NSString;
@protocol OS_dispatch_queue;

@interface MRTransportExternalDevice : MRExternalDevice <MRProtocolClientConnectionDelegate>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    CURunLoopThread *_runLoopThread;
    BOOL _wantsNowPlayingNotifications;
    BOOL _wantsNowPlayingArtworkNotifications;
    BOOL _wantsVolumeNotifications;
    BOOL _wantsOutputDeviceNotifications;
    BOOL _wantsSystemEndpointNotifications;
    BOOL _wantsEndpointChangeNotifications;
    BOOL _usingSystemPairing;
    NSDate *_connectionStateTimestamp;
    unsigned int _connectionState;
    unsigned int _connectionOptions;
    long long _cachedServerDisconnectError;
    unsigned long long _reconnectionAttemptCount;
    BOOL _forceReconnectOnConnectionFailure;
    BOOL _disconnecting;
    BOOL _isClientSyncActive;
    MROSTransaction *_transaction;
    NSArray *_subscribedPlayerPaths;
    BOOL _isCallingClientCallback;
    MRExternalClientConnection *_clientConnection;
    MROrigin *_customOrigin;
    MRDeviceInfo *_deviceInfo;
    MRPlayerPath *_playerPath;
    NSDictionary *_nowPlayingInfo;
    NSData *_nowPlayingArtwork;
    MRContentItem *_nowPlayingItem;
    MRExternalDeviceTransport *_transport;
    long long _connectionRecoveryBehavior;
    CDUnknownBlockType _pairingCallback;
    NSObject<OS_dispatch_queue> *_pairingCallbackQueue;
    CDUnknownBlockType _connectionStateCallback;
    NSObject<OS_dispatch_queue> *_connectionStateCallbackQueue;
    CDUnknownBlockType _nameCallback;
    NSObject<OS_dispatch_queue> *_nameCallbackQueue;
    CDUnknownBlockType _pairingAllowedCallback;
    NSObject<OS_dispatch_queue> *_pairingAllowedCallbackQueue;
    CDUnknownBlockType _customDataCallback;
    NSObject<OS_dispatch_queue> *_customDataCallbackQueue;
    CDUnknownBlockType _outputDevicesUpdatedCallback;
    NSObject<OS_dispatch_queue> *_outputDevicesUpdatedCallbackQueue;
    CDUnknownBlockType _outputDevicesRemovedCallback;
    NSObject<OS_dispatch_queue> *_outputDevicesRemovedCallbackQueue;
    CDUnknownBlockType _volumeCallback;
    NSObject<OS_dispatch_queue> *_volumeCallbackQueue;
    CDUnknownBlockType _volumeControlCapabilitiesCallback;
    NSObject<OS_dispatch_queue> *_volumeControlCapabilitiesCallbackQueue;
    NSObject<OS_dispatch_queue> *_outputContextCallbackQueue;
    NSRunLoop *_runLoop;
    NSObject<OS_dispatch_queue> *_workerQueue;
}

@property (strong, nonatomic) MRExternalClientConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
@property (nonatomic) long long connectionRecoveryBehavior; // @synthesize connectionRecoveryBehavior=_connectionRecoveryBehavior;
@property (copy, nonatomic) CDUnknownBlockType connectionStateCallback; // @synthesize connectionStateCallback=_connectionStateCallback;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *connectionStateCallbackQueue; // @synthesize connectionStateCallbackQueue=_connectionStateCallbackQueue;
@property (copy, nonatomic) CDUnknownBlockType customDataCallback; // @synthesize customDataCallback=_customDataCallback;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *customDataCallbackQueue; // @synthesize customDataCallbackQueue=_customDataCallbackQueue;
@property (strong, nonatomic) MROrigin *customOrigin; // @synthesize customOrigin=_customOrigin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) MRDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isCallingClientCallback; // @synthesize isCallingClientCallback=_isCallingClientCallback;
@property (copy, nonatomic) CDUnknownBlockType nameCallback; // @synthesize nameCallback=_nameCallback;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *nameCallbackQueue; // @synthesize nameCallbackQueue=_nameCallbackQueue;
@property (strong, nonatomic) NSData *nowPlayingArtwork; // @synthesize nowPlayingArtwork=_nowPlayingArtwork;
@property (strong, nonatomic) NSDictionary *nowPlayingInfo; // @synthesize nowPlayingInfo=_nowPlayingInfo;
@property (strong, nonatomic) MRContentItem *nowPlayingItem; // @synthesize nowPlayingItem=_nowPlayingItem;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *outputContextCallbackQueue; // @synthesize outputContextCallbackQueue=_outputContextCallbackQueue;
@property (copy, nonatomic) CDUnknownBlockType outputDevicesRemovedCallback; // @synthesize outputDevicesRemovedCallback=_outputDevicesRemovedCallback;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *outputDevicesRemovedCallbackQueue; // @synthesize outputDevicesRemovedCallbackQueue=_outputDevicesRemovedCallbackQueue;
@property (copy, nonatomic) CDUnknownBlockType outputDevicesUpdatedCallback; // @synthesize outputDevicesUpdatedCallback=_outputDevicesUpdatedCallback;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *outputDevicesUpdatedCallbackQueue; // @synthesize outputDevicesUpdatedCallbackQueue=_outputDevicesUpdatedCallbackQueue;
@property (copy, nonatomic) CDUnknownBlockType pairingAllowedCallback; // @synthesize pairingAllowedCallback=_pairingAllowedCallback;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *pairingAllowedCallbackQueue; // @synthesize pairingAllowedCallbackQueue=_pairingAllowedCallbackQueue;
@property (copy, nonatomic) CDUnknownBlockType pairingCallback; // @synthesize pairingCallback=_pairingCallback;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *pairingCallbackQueue; // @synthesize pairingCallbackQueue=_pairingCallbackQueue;
@property (strong, nonatomic) MRPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property (strong, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
@property (readonly) Class superclass;
@property (readonly, nonatomic) MRExternalDeviceTransport *transport; // @synthesize transport=_transport;
@property (copy, nonatomic) CDUnknownBlockType volumeCallback; // @synthesize volumeCallback=_volumeCallback;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *volumeCallbackQueue; // @synthesize volumeCallbackQueue=_volumeCallbackQueue;
@property (copy, nonatomic) CDUnknownBlockType volumeControlCapabilitiesCallback; // @synthesize volumeControlCapabilitiesCallback=_volumeControlCapabilitiesCallback;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *volumeControlCapabilitiesCallbackQueue; // @synthesize volumeControlCapabilitiesCallbackQueue=_volumeControlCapabilitiesCallbackQueue;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;

- (void).cxx_destruct;
- (void)_activeSystemEndpointDidChangeNotification:(id)arg1;
- (void)_callClientAllowsPairingCallback;
- (void)_callClientConnectionStateCallback:(unsigned int)arg1 previousConnectionState:(unsigned int)arg2 error:(id)arg3;
- (void)_callClientCustomDataCallback:(id)arg1 name:(id)arg2;
- (void)_callClientNameCallback;
- (void)_callClientPairingCallback:(CDUnknownBlockType)arg1;
- (void)_callOutputDevicesRemovedCallbackWithOutputDeviceUIDs:(id)arg1;
- (void)_callOutputDevicesUpdatedCallbackWithOutputDevices:(id)arg1;
- (void)_callVolumeCallback:(float)arg1 outputDeviceUID:(id)arg2;
- (void)_callVolumeControlCapabilitiesCallback:(unsigned int)arg1 outputDeviceUID:(id)arg2;
- (void)_cleanUpStreamsWithReason:(long long)arg1 error:(id)arg2;
- (void)_cleanUpWithReason:(long long)arg1 error:(id)arg2;
- (void)_contentItemUpdatedNotification:(id)arg1;
- (id)_createPlaybackQueue:(BOOL)arg1;
- (void)_handleCryptoPairingMessage:(id)arg1;
- (void)_handleDeviceInfoChange:(id)arg1 oldDevice:(id)arg2;
- (void)_handleDeviceInfoUpdateMessage:(id)arg1;
- (void)_handleGenericMessage:(id)arg1;
- (void)_handleLegacyPlaybackQueueRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleLegacyVolumeControlCapabilitiesDidChangeMessage:(id)arg1;
- (void)_handleNotificationMessage:(id)arg1;
- (void)_handleNotificationMessageLegacy:(id)arg1;
- (void)_handleNotificationMessageModern:(id)arg1;
- (void)_handleOutputDevicesRemovedMessage:(id)arg1;
- (void)_handleOutputDevicesUpdatedMessage:(id)arg1;
- (void)_handlePlaybackQueueRequest:(void *)arg1 forPlayer:(void *)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handlePlaybackQueueResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handlePlaybackSessionMigrateBeginRequest:(id)arg1 forPlayerPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handlePlaybackSessionMigrateEndRequest:(id)arg1 error:(id)arg2 forPlayerPath:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handlePlaybackSessionMigrateRequest:(id)arg1 request:(id)arg2 forPlayerPath:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handlePlaybackSessionRequest:(void *)arg1 forPlayerPath:(void *)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handlePresentRouteAuthorizationStatusMessage:(id)arg1;
- (void)_handlePromptForRouteAuthorizationMessage:(id)arg1;
- (void)_handleRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2 playerPath:(void *)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleRemoveClientMessage:(id)arg1;
- (void)_handleRemovePlayerMessage:(id)arg1;
- (void)_handleSetArtworkMessage:(id)arg1;
- (void)_handleSetConnectionStateMessage:(id)arg1;
- (void)_handleSetDefaultSupportedCommandsMessage:(id)arg1;
- (void)_handleSetNowPlayingClientMessage:(id)arg1;
- (void)_handleSetNowPlayingPlayerMessage:(id)arg1;
- (void)_handleSetOriginClientPropertiesMessage:(id)arg1;
- (void)_handleSetPlayerClientPropertiesMessage:(id)arg1;
- (void)_handleSetStateMessage:(id)arg1;
- (void)_handleSetStateMessageModern:(id)arg1;
- (void)_handleTransactionMessage:(id)arg1;
- (void)_handleUpdateActiveSystemEndpoint:(id)arg1;
- (void)_handleUpdateClientMessage:(id)arg1;
- (void)_handleUpdateContentItemArtworkMessage:(id)arg1;
- (void)_handleUpdateContentItemsMessage:(id)arg1;
- (void)_handleUpdatePlayerMessage:(id)arg1;
- (void)_handleVolumeControlCapabilitiesDidChangeMessage:(id)arg1;
- (void)_handleVolumeDidChangeMessage:(id)arg1;
- (void)_localDeviceInfoDidChangeNotification:(id)arg1;
- (void)_onSerialQueue_prepareToConnectWithOptions:(unsigned int)arg1 clientBundleIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)_onSerialQueue_prepareToDisconnect:(id)arg1;
- (void)_onSerialQueue_registerOriginCallbacks;
- (void)_onWorkerQueue_connectWithOptions:(unsigned int)arg1 isRetry:(BOOL)arg2 clientBundleIdentifier:(id)arg3 userInfo:(id)arg4;
- (id)_onWorkerQueue_createClientConnectionWithInputStream:(id)arg1 outputStream:(id)arg2;
- (void)_onWorkerQueue_disconnect:(id)arg1;
- (id)_onWorkerQueue_initializeConnectionWithOptions:(unsigned int)arg1 userInfo:(id)arg2;
- (id)_onWorkerQueue_loadDeviceInfo;
- (id)_onWorkerQueue_openSecuritySession;
- (id)_onWorkerQueue_reRegisterCustomOrigin;
- (id)_onWorkerQueue_registerCustomOrigin;
- (id)_onWorkerQueue_syncClientState;
- (void)_sendClientMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_transportDeviceInfoDidChangeNotification:(id)arg1;
- (void)_updateNowPlayingInfo;
- (void)clientConnection:(id)arg1 didReceiveMessage:(id)arg2;
- (void)clientDidDisconnect:(id)arg1 error:(id)arg2;
- (void)connectWithOptions:(unsigned int)arg1 clientBundleIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)connectWithOptions:(unsigned int)arg1 userInfo:(id)arg2;
- (unsigned int)connectionState;
- (id)currentClientUpdatesConfigMessage;
- (void)dealloc;
- (void)disconnect:(id)arg1;
- (id)errorForCurrentState;
- (id)hostName;
- (id)initWithTransport:(id)arg1;
- (BOOL)isPaired;
- (BOOL)isUsingSystemPairing;
- (BOOL)isValid;
- (void)modifyByAddingDeviceUIDs:(id)arg1 removingDeviceUIDs:(id)arg2 settingDeviceUIDs:(id)arg3 addingClusterAwareDeviceUIDs:(id)arg4 removingClusterAwareDeviceUIDs:(id)arg5 settingClusterAwareDeviceUIDs:(id)arg6 withReplyQueue:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (id)name;
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)outputDeviceVolumeControlCapabilities:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)personalOutputDevices;
- (void)ping:(double)arg1 callback:(CDUnknownBlockType)arg2 withQueue:(id)arg3;
- (long long)port;
- (void)removeFromParentGroup:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendButtonEvent:(struct _MRHIDButtonEvent)arg1;
- (void)sendClientUpdatesConfigMessage;
- (void)sendClientUpdatesConfigMessageWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendCustomData:(id)arg1 withName:(id)arg2;
- (void)setConnectionState:(unsigned int)arg1 error:(id)arg2;
- (void)setConnectionStateCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setCustomDataCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setName:(id)arg1;
- (void)setNameCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setOutputDeviceVolume:(float)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setOutputDevicesRemovedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setOutputDevicesUpdatedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setPairingAllowedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setPairingCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setSubscribedPlayerPaths:(id)arg1;
- (void)setUsingSystemPairing:(BOOL)arg1;
- (void)setVolumeCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setVolumeControlCapabilitiesCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setWantsEndpointChangeNotifications:(BOOL)arg1;
- (void)setWantsNowPlayingArtworkNotifications:(BOOL)arg1;
- (void)setWantsNowPlayingNotifications:(BOOL)arg1;
- (void)setWantsOutputDeviceNotifications:(BOOL)arg1;
- (void)setWantsSystemEndpointNotifications:(BOOL)arg1;
- (void)setWantsVolumeNotifications:(BOOL)arg1;
- (id)subscribedPlayerPaths;
- (id)supportedMessages;
- (void)unpair;
- (void)veirfyConnectionStatusAndMaybeDisconnect:(id)arg1;
- (BOOL)wantsEndpointChangeNotifications;
- (BOOL)wantsNowPlayingArtworkNotifications;
- (BOOL)wantsNowPlayingNotifications;
- (BOOL)wantsOutputDeviceNotifications;
- (BOOL)wantsSystemEndpointNotifications;
- (BOOL)wantsVolumeNotifications;

@end

