//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXClientService-Protocol.h>
#import <SiriVOX/SVXClientServiceDelegate-Protocol.h>

@class NSString, NSXPCConnection, SVXDeviceSetupContext;
@protocol OS_dispatch_queue, SVXClientService, SVXClientServiceServerConnectionDelegate;

__attribute__((visibility("hidden")))
@interface SVXClientServiceServerConnection : NSObject <SVXClientService, SVXClientServiceDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    id<SVXClientService> _localService;
    id<SVXClientServiceServerConnectionDelegate> _connectionDelegate;
    SVXDeviceSetupContext *_deviceSetupContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) SVXDeviceSetupContext *deviceSetupContext; // @synthesize deviceSetupContext=_deviceSetupContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanUpConnection;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (id)_remoteServiceDelegateWithErrorHandler:(CDUnknownBlockType)arg1;
- (oneway void)activateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)cancelPendingSpeechSynthesisRequest:(id)arg1;
- (oneway void)deactivateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)enqueueSpeechSynthesisRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)fetchAudioPowerWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)fetchSessionActivityStateWithCompletion:(CDUnknownBlockType)arg1;
- (oneway void)fetchSessionStateWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithConnection:(id)arg1 connectionDelegate:(id)arg2 localService:(id)arg3;
- (void)invalidate;
- (oneway void)notifyAudioSessionDidBecomeActive:(BOOL)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3;
- (oneway void)notifyAudioSessionWillBecomeActive:(BOOL)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3;
- (oneway void)notifyDidActivateWithContext:(id)arg1;
- (oneway void)notifyDidChangeSessionStateFrom:(long long)arg1 to:(long long)arg2;
- (oneway void)notifyDidDeactivateWithContext:(id)arg1;
- (oneway void)notifyDidEndUpdateAudioPowerWithType:(long long)arg1;
- (oneway void)notifyDidNotActivateWithContext:(id)arg1 error:(id)arg2;
- (oneway void)notifySessionDidBecomeActiveWithActivationContext:(id)arg1;
- (oneway void)notifySessionDidResignActiveWithDeactivationContext:(id)arg1;
- (oneway void)notifySessionDidStartSoundWithID:(long long)arg1;
- (oneway void)notifySessionDidStopSoundWithID:(long long)arg1 error:(id)arg2;
- (oneway void)notifySessionWillBecomeActiveWithActivationContext:(id)arg1;
- (oneway void)notifySessionWillPresentFeedbackWithDialogIdentifier:(id)arg1;
- (oneway void)notifySessionWillResignActiveWithOptions:(unsigned long long)arg1 duration:(double)arg2;
- (oneway void)notifySessionWillStartSoundWithID:(long long)arg1;
- (oneway void)notifyWillActivateWithContext:(id)arg1;
- (oneway void)notifyWillBeginUpdateAudioPowerWithType:(long long)arg1 wrapper:(id)arg2;
- (oneway void)notifyWillChangeSessionStateFrom:(long long)arg1 to:(long long)arg2;
- (oneway void)notifyWillDeactivateWithContext:(id)arg1;
- (oneway void)performManualEndpointing;
- (oneway void)pingWithReply:(CDUnknownBlockType)arg1;
- (oneway void)preheatWithActivationSource:(long long)arg1;
- (oneway void)prepareForDeviceSetupWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)prewarmRequest:(id)arg1;
- (oneway void)prewarmWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)requestPermissionToActivateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)setDeviceSetupContext:(id)arg1;
- (oneway void)stopSpeechSynthesisRequest:(id)arg1;
- (oneway void)synthesizeRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)transitToAutomaticEndpointing;

@end
