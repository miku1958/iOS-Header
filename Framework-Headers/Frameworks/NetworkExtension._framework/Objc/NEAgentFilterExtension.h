//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEAgentSessionDelegate-Protocol.h>
#import <NetworkExtension/NEFilterExtensionProviderHostDelegate-Protocol.h>
#import <NetworkExtension/NEFilterPluginDriver-Protocol.h>

@class NEFilterControlExtensionProviderHostContext, NEFilterExtensionProviderHostContext, NEFilterProviderConfiguration, NSArray, NSExtension, NSString, NSUUID, NSXPCInterface, NSXPCListenerEndpoint;
@protocol NEPluginManagerObjectFactory, OS_dispatch_queue, OS_dispatch_source;

@interface NEAgentFilterExtension : NSObject <NEFilterExtensionProviderHostDelegate, NEAgentSessionDelegate, NEFilterPluginDriver>
{
    BOOL _dataExtensionInitialized;
    BOOL _controlExtensionInitialized;
    BOOL _appsUpdateStarted;
    BOOL _appsUpdateEnding;
    int _crypto_kernel_salt;
    id<NEPluginManagerObjectFactory> _managerObjectFactory;
    NSString *_pluginType;
    NSExtension *_dataExtension;
    NSExtension *_controlExtension;
    NEFilterExtensionProviderHostContext *_dataSessionContext;
    NEFilterControlExtensionProviderHostContext *_controlSessionContext;
    NSUUID *_dataSessionRequestIdentifier;
    NSUUID *_controlSessionRequestIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_dataExtensionIdentifier;
    NSString *_controlExtensionIdentifier;
    NSXPCListenerEndpoint *_clientListenerEndpoint;
    NEFilterProviderConfiguration *_configuration;
    NSArray *_extensionUUIDs;
    NSObject<OS_dispatch_source> *_sendFailedTimer;
    struct cfil_crypto_state *_crypto_state;
}

@property BOOL appsUpdateEnding; // @synthesize appsUpdateEnding=_appsUpdateEnding;
@property BOOL appsUpdateStarted; // @synthesize appsUpdateStarted=_appsUpdateStarted;
@property (strong) NSXPCListenerEndpoint *clientListenerEndpoint; // @synthesize clientListenerEndpoint=_clientListenerEndpoint;
@property (strong) NEFilterProviderConfiguration *configuration; // @synthesize configuration=_configuration;
@property (strong) NSExtension *controlExtension; // @synthesize controlExtension=_controlExtension;
@property (strong) NSString *controlExtensionIdentifier; // @synthesize controlExtensionIdentifier=_controlExtensionIdentifier;
@property BOOL controlExtensionInitialized; // @synthesize controlExtensionInitialized=_controlExtensionInitialized;
@property (strong) NEFilterControlExtensionProviderHostContext *controlSessionContext; // @synthesize controlSessionContext=_controlSessionContext;
@property (strong) NSUUID *controlSessionRequestIdentifier; // @synthesize controlSessionRequestIdentifier=_controlSessionRequestIdentifier;
@property int crypto_kernel_salt; // @synthesize crypto_kernel_salt=_crypto_kernel_salt;
@property struct cfil_crypto_state *crypto_state; // @synthesize crypto_state=_crypto_state;
@property (strong) NSExtension *dataExtension; // @synthesize dataExtension=_dataExtension;
@property (strong) NSString *dataExtensionIdentifier; // @synthesize dataExtensionIdentifier=_dataExtensionIdentifier;
@property BOOL dataExtensionInitialized; // @synthesize dataExtensionInitialized=_dataExtensionInitialized;
@property (strong) NEFilterExtensionProviderHostContext *dataSessionContext; // @synthesize dataSessionContext=_dataSessionContext;
@property (strong) NSUUID *dataSessionRequestIdentifier; // @synthesize dataSessionRequestIdentifier=_dataSessionRequestIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSXPCInterface *driverInterface;
@property (readonly, nonatomic) NSArray *extensionUUIDs; // @synthesize extensionUUIDs=_extensionUUIDs;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSXPCInterface *managerInterface;
@property (readonly, weak) id<NEPluginManagerObjectFactory> managerObjectFactory; // @synthesize managerObjectFactory=_managerObjectFactory;
@property (readonly, nonatomic) NSString *pluginType; // @synthesize pluginType=_pluginType;
@property (strong) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong) NSObject<OS_dispatch_source> *sendFailedTimer; // @synthesize sendFailedTimer=_sendFailedTimer;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *uuids;

+ (BOOL)authenticateFlowWithState:(struct cfil_crypto_state *)arg1 crypto_key:(id)arg2 flow:(id)arg3 salt:(unsigned int)arg4 isKernelSocket:(BOOL)arg5;
- (void).cxx_destruct;
- (void)applySettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)authenticateFlow:(id)arg1;
- (void)cleanupControlExtensionWithRequestIdentifier:(id)arg1;
- (void)cleanupDataExtensionWithRequestIdentifier:(id)arg1;
- (void)cleanupOnStartFailure;
- (void)createPacketChannelForExtension:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)extension:(id)arg1 didFailWithError:(id)arg2;
- (void)extension:(id)arg1 didStartWithError:(id)arg2;
- (void)extensionDidStop:(id)arg1;
- (void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)generateClientKey:(int)arg1 salt:(unsigned int)arg2;
- (void)getFilterClientConnectionWithCompletionHandler:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleAppsUninstalled:(id)arg1;
- (void)handleAppsUpdateBegins:(id)arg1;
- (void)handleAppsUpdateEnding:(id)arg1;
- (void)handleAppsUpdateEnds:(id)arg1;
- (void)handleCancel;
- (void)handleControlExtensionInitWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleDataExtensionInitWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleDisposeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleExtensionExit:(id)arg1;
- (void)handleInitWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleStopCompleteWithError:(id)arg1;
- (id)initWithPluginType:(id)arg1 pluginClass:(long long)arg2 pluginEndpoint:(id)arg3 pluginUUID:(id)arg4 queue:(id)arg5 factory:(id)arg6;
- (id)initWithPluginType:(id)arg1 pluginClass:(long long)arg2 pluginInfo:(id)arg3 queue:(id)arg4 factory:(id)arg5;
- (void)notifyRulesChanged;
- (void)provideRemediationMap:(id)arg1;
- (void)provideURLAppendStringMap:(id)arg1;
- (void)report:(id)arg1;
- (void)resetFilterSettings;
- (long long)sanitizeFilterAction:(long long)arg1;
- (id)sanitizeFilterFlow:(id)arg1;
- (long long)sanitizeFilterReportEvent:(long long)arg1;
- (id)sanitizeReport:(id)arg1;
- (void)savedConfigurationChanged:(id)arg1;
- (void)sendBrowserContentFilterServerRequest;
- (BOOL)sendCryptoKeyWithControlSocket:(int)arg1 crypto_key:(id)arg2;
- (void)sendExtensionFailed;
- (void)sendFilterStatus:(long long)arg1 withError:(long long)arg2;
- (void)sendSocketContentFilterRequest;
- (void)sleepWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startControlExtensionWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startDataExtensionWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startFilter;
- (void)startFilterExtension;
- (void)startWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopFilterExtensionWithReason:(int)arg1;
- (void)updateConfiguration:(id)arg1;
- (void)wakeup;

@end

