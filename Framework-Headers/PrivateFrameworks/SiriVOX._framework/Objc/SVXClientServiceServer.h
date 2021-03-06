//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/NSXPCListenerDelegate-Protocol.h>
#import <SiriVOX/SVXAudioPowerUpdateListening-Protocol.h>
#import <SiriVOX/SVXClientService-Protocol.h>
#import <SiriVOX/SVXClientServiceServerConnectionDelegate-Protocol.h>
#import <SiriVOX/SVXModuleInstance-Protocol.h>
#import <SiriVOX/SVXSessionActivationListening-Protocol.h>
#import <SiriVOX/SVXSessionActivityListening-Protocol.h>

@class NSMutableSet, NSString, NSXPCListener, SVXDeviceSetupManager, SVXModule, SVXSessionManager, SVXSpeechSynthesizer;

__attribute__((visibility("hidden")))
@interface SVXClientServiceServer : NSObject <SVXClientServiceServerConnectionDelegate, SVXModuleInstance, SVXSessionActivationListening, SVXAudioPowerUpdateListening, SVXSessionActivityListening, NSXPCListenerDelegate, SVXClientService>
{
    SVXModule *_module;
    NSXPCListener *_listener;
    NSMutableSet *_connections;
    SVXDeviceSetupManager *_deviceSetupManager;
    SVXSessionManager *_sessionManager;
    SVXSpeechSynthesizer *_speechSynthesizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addConnection:(id)arg1;
- (void)_removeAllConnections;
- (void)_removeConnection:(id)arg1;
- (void)_updateDeviceSetupContext;
- (oneway void)activateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)audioPowerDidEndUpdateForType:(long long)arg1;
- (void)audioPowerWillBeginUpdateForType:(long long)arg1 wrapper:(id)arg2;
- (void)audioSessionDidBecomeActive:(BOOL)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3;
- (void)audioSessionWillBecomeActive:(BOOL)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3;
- (oneway void)cancelPendingSpeechSynthesisRequest:(id)arg1;
- (void)clientServiceServerConnectionWasDisconnected:(id)arg1;
- (oneway void)deactivateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (oneway void)enqueueSpeechSynthesisRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)fetchAudioPowerWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)fetchSessionActivityStateWithCompletion:(CDUnknownBlockType)arg1;
- (oneway void)fetchSessionStateWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithModule:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (oneway void)performManualEndpointing;
- (oneway void)pingWithReply:(CDUnknownBlockType)arg1;
- (oneway void)preheatWithActivationSource:(long long)arg1;
- (oneway void)prepareForDeviceSetupWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)prewarmRequest:(id)arg1;
- (oneway void)prewarmWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sessionDidBecomeActiveWithActivationContext:(id)arg1;
- (void)sessionDidChangeFromState:(long long)arg1 toState:(long long)arg2;
- (void)sessionDidResignActiveWithDeactivationContext:(id)arg1;
- (void)sessionDidStartSoundWithID:(long long)arg1;
- (void)sessionDidStopSoundWithID:(long long)arg1 error:(id)arg2;
- (void)sessionManager:(id)arg1 didActivateWithContext:(id)arg2;
- (void)sessionManager:(id)arg1 didDeactivateWithContext:(id)arg2;
- (void)sessionManager:(id)arg1 didNotActivateWithContext:(id)arg2 error:(id)arg3;
- (void)sessionManager:(id)arg1 willActivateWithContext:(id)arg2;
- (void)sessionManager:(id)arg1 willDeactivateWithContext:(id)arg2;
- (void)sessionWillBecomeActiveWithActivationContext:(id)arg1;
- (void)sessionWillChangeFromState:(long long)arg1 toState:(long long)arg2;
- (void)sessionWillPresentFeedbackWithDialogIdentifier:(id)arg1;
- (void)sessionWillResignActiveWithOptions:(unsigned long long)arg1 duration:(double)arg2;
- (void)sessionWillStartSoundWithID:(long long)arg1;
- (oneway void)setDeviceSetupContext:(id)arg1;
- (void)startWithModuleInstanceProvider:(id)arg1 platformDependencies:(id)arg2;
- (oneway void)stopSpeechSynthesisRequest:(id)arg1;
- (void)stopWithModuleInstanceProvider:(id)arg1;
- (oneway void)synthesizeRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)transitToAutomaticEndpointing;

@end

