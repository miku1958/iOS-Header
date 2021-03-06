//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameController/CHHapticServerInterface-Protocol.h>

@class GCControllerSettings, NSArray, NSMutableDictionary, NSString, _GCControllerManagerServer;
@protocol NSCopying><NSObject><NSSecureCoding, _GCIPCIncomingConnection;

__attribute__((visibility("hidden")))
@interface _GCHapticClientProxy : NSObject <CHHapticServerInterface>
{
    BOOL _playersPlayedHapticsThisSlice;
    _GCControllerManagerServer *_server;
    struct HapticSharedMemory _sharedMemory;
    GCControllerSettings *_bundleSettings;
    GCControllerSettings *_globalSettings;
    BOOL _dirtyMuteState;
    BOOL _muted;
    BOOL _neverMute;
    int _muteReasons[5];
    _Atomic BOOL _invalid;
    BOOL _running;
    BOOL _stopping;
    id<_GCIPCIncomingConnection> _connection;
    id _connectionInvalidationRegistration;
    id _connectionInterruptedRegistration;
    double _initializationTime;
    BOOL _complete;
    BOOL _mockClient;
    unsigned int _applicationState;
    int _totalPlayers;
    unsigned long long _clientID;
    NSString *_bundleIdentifier;
    id<NSCopying><NSObject><NSSecureCoding> _identifier;
    NSString *_controllerProductCategory;
    NSArray *_actuators;
    NSMutableDictionary *_hapticPlayers;
    double _activeLifetimeInSeconds;
    NSArray *_invalidationHandlers;
}

@property (readonly, nonatomic) double activeLifetimeInSeconds; // @synthesize activeLifetimeInSeconds=_activeLifetimeInSeconds;
@property (readonly, copy, nonatomic) NSArray *actuators; // @synthesize actuators=_actuators;
@property (nonatomic) unsigned int applicationState; // @synthesize applicationState=_applicationState;
@property (copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (nonatomic) unsigned long long clientID; // @synthesize clientID=_clientID;
@property (nonatomic) BOOL complete; // @synthesize complete=_complete;
@property (readonly, copy, nonatomic) NSString *controllerProductCategory; // @synthesize controllerProductCategory=_controllerProductCategory;
@property (copy, nonatomic) NSMutableDictionary *hapticPlayers; // @synthesize hapticPlayers=_hapticPlayers;
@property (readonly, copy, nonatomic) id<NSCopying><NSObject><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;
@property (copy, nonatomic) NSArray *invalidationHandlers; // @synthesize invalidationHandlers=_invalidationHandlers;
@property (nonatomic, getter=isMockClient) BOOL mockClient; // @synthesize mockClient=_mockClient;
@property (readonly, nonatomic) double totalLifetimeInSeconds;
@property (readonly, nonatomic) int totalPlayers; // @synthesize totalPlayers=_totalPlayers;

+ (id)clientProxyWithConnection:(id)arg1 server:(id)arg2 clientID:(unsigned long long)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_configureActuatorsLegacyWithOptions:(id)arg1;
- (id)_initWithConnection:(id)arg1 server:(id)arg2 clientID:(unsigned long long)arg3;
- (void)addActiveTime:(double)arg1;
- (id)addInvalidationHandler:(CDUnknownBlockType)arg1;
- (void)allocateClientResources:(CDUnknownBlockType)arg1;
- (void)configureWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)copyCustomAudioEvent:(unsigned long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)createCustomAudioEvent:(id)arg1 format:(id)arg2 frames:(unsigned long long)arg3 options:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (void)debugEngineIsRunning:(CDUnknownBlockType)arg1;
- (void)debugExpectNotifyOnFinishAfter:(double)arg1 reply:(CDUnknownBlockType)arg2;
- (id)description;
- (void)detachSequence:(unsigned long long)arg1;
- (void)getHapticLatency:(CDUnknownBlockType)arg1;
- (id)init;
- (void)invalidate;
- (void)invalidateDueToControllerDisconnect;
- (BOOL)isMuted;
- (BOOL)isMutedForReason:(unsigned long long)arg1;
- (void)loadHapticEvent:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)loadHapticSequenceFromData:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)loadHapticSequenceFromEvents:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)loadVibePattern:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)notifyClientCompletedWithError:(id)arg1;
- (void)notifyClientOnStopWithReason:(long long)arg1 error:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)prepareHapticSequence:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)prewarm:(CDUnknownBlockType)arg1;
- (void)queryCapabilities:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)referenceCustomAudioEvent:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)refreshUserSettingForMuteHaptics;
- (void)releaseChannels;
- (void)releaseClientResources;
- (void)releaseCustomAudioEvent:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)removeChannel:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)removeCustomAudioEvent:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestChannels:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (BOOL)running;
- (void)setChannelEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setMute:(BOOL)arg1 forReason:(unsigned long long)arg2;
- (void)setPlayerBehavior:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setSequenceEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 channelIndex:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void *)sharedMemory;
- (void)startRunning:(CDUnknownBlockType)arg1;
- (void)stopPrewarm;
- (void)stopRunning;
- (void)stopRunning:(CDUnknownBlockType)arg1;
- (BOOL)stopping;
- (void)teardownAndReleaseChannels;

@end

