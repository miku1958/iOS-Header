//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameController/GCControllerSettingsComponent-Protocol.h>
#import <GameController/GCSettingsXPCProxyRemoteClientEndpointInterface-Protocol.h>
#import <GameController/_GCIPCEndpointClient-Protocol.h>

@class GCController, GCControllerSettings, NSString;
@protocol GCSettingsXPCProxyRemoteServerEndpointInterface, NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface GCSettingsXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCControllerSettingsComponent, GCSettingsXPCProxyRemoteClientEndpointInterface>
{
    GCController *_controller;
    id<GCSettingsXPCProxyRemoteServerEndpointInterface> _serverEndpoint;
    id _connectionInterruptionRegistration;
    id _connectionInvalidationRegistration;
    id<NSObject><NSCopying><NSSecureCoding> _identifier;
    GCControllerSettings *_settingsDefault;
    GCControllerSettings *_settingsForBundleID;
    CDUnknownBlockType _changedHandler;
}

@property (copy, nonatomic) CDUnknownBlockType changedHandler; // @synthesize changedHandler=_changedHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) GCControllerSettings *settingsDefault; // @synthesize settingsDefault=_settingsDefault;
@property (readonly, nonatomic) GCControllerSettings *settingsForBundleID; // @synthesize settingsForBundleID=_settingsForBundleID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_remoteEndpointHasSetSettingsForBundleID:(id)arg1 defaultSettings:(id)arg2;
- (void)fetchObjectIdentifierWithReply:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1 initialValueForBundleID:(id)arg2 defaultSettings:(id)arg3;
- (void)invalidateConnection;
- (void)newSettingsForBundleID:(id)arg1 defaultSettings:(id)arg2;
- (void)observeChangesForSettings:(id)arg1;
- (void)refreshSettings;
- (void)setController:(id)arg1;
- (void)setRemoteEndpoint:(id)arg1 connection:(id)arg2;
- (void)stopObservingChangesForSettings:(id)arg1;

@end

