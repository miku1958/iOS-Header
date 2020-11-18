//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection, VSPresynthesizedAudioRequest, VSSpeechConnectionDelegateWrapper, VSSpeechRequest;
@protocol OS_dispatch_queue, VSSpeechConnectionDelegate;

@interface VSSpeechConnection : NSObject
{
    NSXPCConnection *_xpcConnection;
    NSString *_identifier;
    id<VSSpeechConnectionDelegate> _delegate;
    VSSpeechConnectionDelegateWrapper *_delegateWrapper;
    NSObject<OS_dispatch_queue> *_threadSafeQueue;
}

@property (weak, nonatomic) id<VSSpeechConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) VSSpeechConnectionDelegateWrapper *delegateWrapper; // @synthesize delegateWrapper=_delegateWrapper;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) VSPresynthesizedAudioRequest *presynthesizedAudioRequest;
@property (readonly, nonatomic) VSSpeechRequest *request;
@property (readonly, nonatomic) VSSpeechRequest *synthesisRequest;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *threadSafeQueue; // @synthesize threadSafeQueue=_threadSafeQueue;
@property (strong, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

- (void).cxx_destruct;
- (void)_connectionInvalidated;
- (id)_remoteObject;
- (id)_remoteObjectWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2;
- (id)availableVoicesForLanguageCode:(id)arg1;
- (oneway void)cleanUnusedAssets:(CDUnknownBlockType)arg1;
- (void)continueCurrentSpeechRequest;
- (void)dealloc;
- (void)getAutoDownloadedVoiceAssets:(CDUnknownBlockType)arg1;
- (void)getLocalVoiceAssets:(CDUnknownBlockType)arg1;
- (void)getLocalVoiceResources:(CDUnknownBlockType)arg1;
- (void)getLogToFile:(CDUnknownBlockType)arg1;
- (void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 type:(long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)getVoiceResourceForLanguage:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)init;
- (BOOL)isSystemSpeaking;
- (BOOL)isSystemSpeakingOnBehalfOfCurrentConnection;
- (void)pauseCurrentSpeechRequestAtMark:(long long)arg1;
- (void)prewarmIfNeededWithRequest:(id)arg1;
- (void)setAutoDownloadedVoiceAssets:(id)arg1;
- (void)setLogToFile:(BOOL)arg1;
- (void)setPresynthesizedAudioRequest:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setSynthesisRequest:(id)arg1;
- (void)startPresynthesizedAudioRequest:(id)arg1;
- (void)startSpeechRequest:(id)arg1;
- (void)startSynthesisRequest:(id)arg1;
- (void)stopCurrentSpeechRequestAtMark:(long long)arg1;
- (void)stopPresynthesizedAudioRequest;
- (void)updateWithConnectionIdentifier:(id)arg1;

@end

