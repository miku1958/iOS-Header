//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFClientServiceDelegate-Protocol.h>

@class AFConnection, NSString;
@protocol OS_dispatch_queue;

@interface AFConnectionClientServiceDelegate : NSObject <AFClientServiceDelegate>
{
    AFConnection *_connection;
    NSObject<OS_dispatch_queue> *_targetQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_connectionDelegate;
- (oneway void)aceConnectionWillRetryOnError:(id)arg1;
- (oneway void)acousticIDRequestDidFinishWithSuccess:(BOOL)arg1;
- (oneway void)acousticIDRequestWillStart;
- (oneway void)audioPlaybackRequestDidNotStart:(id)arg1 error:(id)arg2;
- (oneway void)audioPlaybackRequestDidStart:(id)arg1;
- (oneway void)audioPlaybackRequestDidStop:(id)arg1 error:(id)arg2;
- (oneway void)audioPlaybackRequestWillStart:(id)arg1;
- (oneway void)audioSessionDidBecomeActive:(BOOL)arg1;
- (oneway void)audioSessionDidBeginInterruption;
- (oneway void)audioSessionDidEndInterruption:(BOOL)arg1;
- (oneway void)audioSessionIDChanged:(unsigned int)arg1;
- (oneway void)audioSessionWillBecomeActive:(BOOL)arg1;
- (oneway void)cacheImage:(id)arg1;
- (oneway void)extensionRequestFinishedForApplication:(id)arg1 error:(id)arg2;
- (oneway void)extensionRequestWillStartForApplication:(id)arg1;
- (oneway void)getBulletinContext:(CDUnknownBlockType)arg1;
- (oneway void)getClockContext:(CDUnknownBlockType)arg1;
- (id)initWithConnection:(id)arg1 targetQueue:(id)arg2;
- (oneway void)invalidateCurrentUserActivity;
- (oneway void)musicWasDetected;
- (oneway void)quickStopWasHandledWithActions:(unsigned long long)arg1;
- (oneway void)requestDidReceiveCommand:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)requestHandleCommand:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)requestRequestedDismissAssistant;
- (oneway void)requestRequestedOpenApplicationWithBundleID:(id)arg1 URL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)requestRequestedOpenURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)setUserActivityInfo:(id)arg1 webpageURL:(id)arg2;
- (oneway void)shouldSpeakChanged:(BOOL)arg1;
- (oneway void)speechRecognitionDidFail:(id)arg1;
- (oneway void)speechRecognized:(id)arg1;
- (oneway void)speechRecognizedAdditionalInterpretation:(id)arg1 refId:(id)arg2;
- (oneway void)speechRecognizedPartialResult:(id)arg1;
- (oneway void)speechRecordingDidBeginOnAVRecordRoute:(id)arg1 audioSessionID:(unsigned int)arg2;
- (oneway void)speechRecordingDidCancel;
- (oneway void)speechRecordingDidChangeAVRecordRoute:(id)arg1 isDucking:(BOOL)arg2 isTwoShot:(BOOL)arg3;
- (oneway void)speechRecordingDidEnd;
- (oneway void)speechRecordingDidFail:(id)arg1;
- (oneway void)speechRecordingDidFinishRecognitionUpdateWithError:(id)arg1;
- (oneway void)speechRecordingDidRecognizePhrases:(id)arg1 utterances:(id)arg2;
- (oneway void)speechRecordingDidUpdateRecognitionPhrases:(id)arg1 utterances:(id)arg2 refId:(id)arg3;
- (oneway void)speechRecordingPerformTwoShotPromptWithType:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)speechRecordingStartpointDetected;
- (oneway void)speechRecordingWillBeginRecognitionUpdateForTask:(id)arg1;
- (oneway void)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg1;
- (oneway void)startPlaybackDidFail:(long long)arg1;
- (oneway void)startUIRequestWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)willProcessStartPlayback:(long long)arg1;

@end

