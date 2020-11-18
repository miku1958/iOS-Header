//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSAudioSessionInfoProvidingDelegate-Protocol.h>
#import <CoreSpeech/CSCoreSpeechDaemonStateMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSXPCClientDelegate-Protocol.h>

@class CSXPCClient, NSHashTable, NSString;
@protocol CSAudioSessionInfoProviding, OS_dispatch_queue;

@interface CSAudioSessionController : NSObject <CSAudioSessionInfoProvidingDelegate, CSXPCClientDelegate, CSCoreSpeechDaemonStateMonitorDelegate>
{
    BOOL _shouldKeepConnection;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
    id<CSAudioSessionInfoProviding> _sessionInfoProvider;
    CSXPCClient *_xpcClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) id<CSAudioSessionInfoProviding> sessionInfoProvider; // @synthesize sessionInfoProvider=_sessionInfoProvider;
@property BOOL shouldKeepConnection; // @synthesize shouldKeepConnection=_shouldKeepConnection;
@property (readonly) Class superclass;
@property (strong, nonatomic) CSXPCClient *xpcClient; // @synthesize xpcClient=_xpcClient;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)CSXPCClient:(id)arg1 didDisconnect:(BOOL)arg2;
- (void)_audioRouteChanged:(id)arg1;
- (BOOL)_createXPCClientConnectionIfNeeded;
- (unsigned int)_getAudioSessionID;
- (unsigned int)_getLocalAudioSessionID;
- (void)_handleInterruption:(id)arg1;
- (void)_mediaServicesWereLost:(id)arg1;
- (void)_mediaServicesWereReset:(id)arg1;
- (void)_registerAudioRouteChangeNotification;
- (void)_registerInterruptionNotification;
- (void)_startMonitoring;
- (void)_stopMonitoring;
- (void)_teardownXPCClientIfNeeded;
- (void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)arg2;
- (void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg2;
- (void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2;
- (void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)arg2;
- (void)coreSpeechDaemonStateMonitor:(id)arg1 didReceiveStateChanged:(unsigned long long)arg2;
- (void)dealloc;
- (unsigned int)getAudioSessionID;
- (void)getAudioSessionIDWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
