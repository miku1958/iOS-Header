//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebInspector/RWIRelayDelegate-Protocol.h>

@class BKSApplicationStateMonitor, RWIRelay, _RWITCPServer;

@interface RWIRelayDelegateIOS : NSObject <RWIRelayDelegate>
{
    RWIRelay *_relay;
    BKSApplicationStateMonitor *_applicationStateMonitor;
    _RWITCPServer *_tcpServer;
}

- (void).cxx_destruct;
- (BOOL)_allowApplication:(CDStruct_6ad76789)arg1 bundleIdentifier:(id)arg2;
- (void)_backBoardApplicationStateChanged:(id)arg1;
- (void)_createApplicationStateMonitorIfNeeded;
- (id)_deviceBuildVersion;
- (id)_deviceModelName;
- (id)_deviceProductVersion;
- (id)_deviceUDID;
- (BOOL)_hasCarrierRemoteInspectorEntitlement:(CDStruct_6ad76789)arg1;
- (BOOL)_hasRemoteInspectorEntitlement:(CDStruct_6ad76789)arg1;
- (BOOL)_isProxyApplication:(id)arg1 bundleIdentifier:(id)arg2;
- (BOOL)_isWhitelistedSimulatorApp:(id)arg1;
- (BOOL)_usedDevelopmentProvisioningProfile:(CDStruct_6ad76789)arg1;
- (void)relay:(id)arg1 activateApplicationWithBundleIdentifier:(id)arg2;
- (BOOL)relay:(id)arg1 allowIncomingApplicationConnection:(id)arg2 bundleIdentifier:(id)arg3;
- (BOOL)relay:(id)arg1 allowIncomingApplicationViaProxy:(CDStruct_6ad76789)arg2;
- (void)relay:(id)arg1 applicationConnected:(id)arg2;
- (void)relay:(id)arg1 applicationDisconnected:(id)arg2;
- (id)relay:(id)arg1 applicationInfoForIncomingConnection:(id)arg2 bundleIdentifier:(id)arg3;
- (void)relay:(id)arg1 applicationUpdated:(id)arg2;
- (void)relay:(id)arg1 unhandledApplicationXPCMessage:(id)arg2;
- (void)relayClientConnectionDidChange:(id)arg1;
- (void)relayInitialize:(id)arg1;
- (id)relaySetupResponseForClientConnection:(id)arg1;
- (void)tcpServer:(id)arg1 receivedConnection:(id)arg2;

@end

