//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSVoiceTriggerXPCClientDelegate-Protocol.h>

@class CSVoiceTriggerXPCClient, NSString;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerXPCService : NSObject <CSVoiceTriggerXPCClientDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    CSVoiceTriggerXPCClient *_xpcClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;
@property (strong, nonatomic) CSVoiceTriggerXPCClient *xpcClient; // @synthesize xpcClient=_xpcClient;

+ (id)sharedService;
- (void).cxx_destruct;
- (id)_createXPCClientConnectionIfNeeded:(id)arg1;
- (void)_teardownXPCClientIfNeeded;
- (void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2;
- (void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2 xpcClient:(id)arg3;
- (id)fetchVoiceTriggerDailyStats;
- (id)init;
- (void)notifyVoiceTriggeredSiriSessionCancelled;
- (void)notifyVoiceTriggeredSiriSessionCancelledWithXpcClient:(id)arg1;
- (void)setPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2;
- (void)setPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2 xpcClient:(id)arg3;
- (void)setRaiseToSpeakBypassing:(BOOL)arg1 timeout:(double)arg2;
- (void)setRaiseToSpeakBypassing:(BOOL)arg1 timeout:(double)arg2 xpcClient:(id)arg3;
- (void)voiceTriggerXPCClient:(id)arg1 didDisconnect:(BOOL)arg2;

@end
