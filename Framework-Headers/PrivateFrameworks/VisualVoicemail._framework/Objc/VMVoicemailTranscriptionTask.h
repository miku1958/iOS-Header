//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface VMVoicemailTranscriptionTask : NSObject
{
    BOOL _taskRunning;
    BOOL _hasInsomniaAssertion;
    NSObject<OS_dispatch_queue> *_taskQueue;
}

@property (nonatomic) BOOL hasInsomniaAssertion; // @synthesize hasInsomniaAssertion=_hasInsomniaAssertion;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *taskQueue; // @synthesize taskQueue=_taskQueue;
@property (nonatomic, getter=isTaskRunning) BOOL taskRunning; // @synthesize taskRunning=_taskRunning;

+ (void)resetRetranscriptionTaskState;
- (void).cxx_destruct;
- (void)_endRetranscribingTask;
- (void)_startRetranscribingVoicemailsIfNecessaryTranscribingAllVoicemails:(BOOL)arg1;
- (id)allVoicemails;
- (id)allVoicemailsTranscribedWithoutConfidence;
- (id)allVoicemailsWithTranscription;
- (id)allVoicemailsWithoutTranscription;
- (BOOL)alreadyAttemptedVoicemailTranscriptionForVoicemail:(id)arg1;
- (void)cancelAttemptedVoicemailTranscriptionForVoicemail:(id)arg1;
- (BOOL)confidenceModelExistsOnDevice;
- (void)dealloc;
- (BOOL)deviceHasSpeechAssets;
- (id)init;
- (id)lastTaskExecutionDate;
- (void)processTranscriptForVoicemail:(id)arg1;
- (void)retranscribeAllVoicemails;
- (void)setAttemptedVoicemailTranscriptionForVoicemail:(id)arg1;
- (void)setLastExecutionDate:(id)arg1;
- (BOOL)shouldRunTranscriptionTask;
- (BOOL)speechAssetHasConfidenceModel:(id)arg1;
- (id)speechAssetsOnDevice;
- (id)speechAssetsWithConfidenceModelsOnDevice;
- (BOOL)voicemailWasTranscribedWithoutConfidence:(id)arg1;
- (id)voicemailsMatchingFlags:(unsigned int)arg1 withoutFlags:(unsigned int)arg2;

@end

