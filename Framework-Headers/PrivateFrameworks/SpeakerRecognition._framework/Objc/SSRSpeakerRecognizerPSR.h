//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpeakerRecognition/SSRSpeakerAnalyzerPSRDelegate-Protocol.h>
#import <SpeakerRecognition/SSRSpeakerRecognizer-Protocol.h>

@class NSDictionary, NSString, SSRSpeakerAnalyzerPSR, SSRSpeakerRecognitionContext;
@protocol OS_dispatch_queue, SSRSpeakerRecognizerDelegate;

@interface SSRSpeakerRecognizerPSR : NSObject <SSRSpeakerAnalyzerPSRDelegate, SSRSpeakerRecognizer>
{
    BOOL _processingEnded;
    SSRSpeakerRecognitionContext *_spIdCtx;
    NSString *_sessionId;
    NSDictionary *_lastSpeakerInfo;
    NSObject<OS_dispatch_queue> *_queue;
    id<SSRSpeakerRecognizerDelegate> _delegate;
    NSString *_invocationStyleStr;
    unsigned long long _extraSamplesAtStart;
    unsigned long long _vtEndInSampleCount;
    unsigned long long _endInSampleCount;
    unsigned long long _numSamplesProcessed;
    unsigned long long _totalNumSamplesReceived;
    SSRSpeakerAnalyzerPSR *_psrAnalyzer;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SSRSpeakerRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long endInSampleCount; // @synthesize endInSampleCount=_endInSampleCount;
@property (nonatomic) unsigned long long extraSamplesAtStart; // @synthesize extraSamplesAtStart=_extraSamplesAtStart;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *invocationStyleStr; // @synthesize invocationStyleStr=_invocationStyleStr;
@property (readonly, nonatomic) NSDictionary *lastScoreCard;
@property (strong, nonatomic) NSDictionary *lastSpeakerInfo; // @synthesize lastSpeakerInfo=_lastSpeakerInfo;
@property (nonatomic) unsigned long long numSamplesProcessed; // @synthesize numSamplesProcessed=_numSamplesProcessed;
@property (nonatomic) BOOL processingEnded; // @synthesize processingEnded=_processingEnded;
@property (strong, nonatomic) SSRSpeakerAnalyzerPSR *psrAnalyzer; // @synthesize psrAnalyzer=_psrAnalyzer;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property (strong, nonatomic) SSRSpeakerRecognitionContext *spIdCtx; // @synthesize spIdCtx=_spIdCtx;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long totalNumSamplesReceived; // @synthesize totalNumSamplesReceived=_totalNumSamplesReceived;
@property (nonatomic) unsigned long long vtEndInSampleCount; // @synthesize vtEndInSampleCount=_vtEndInSampleCount;

- (void).cxx_destruct;
- (void)_initializeWithContext:(id)arg1;
- (void)dealloc;
- (void)endAudio;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;
- (void)processAudioData:(id)arg1 numSamples:(unsigned long long)arg2;
- (void)resetWithContext:(id)arg1;
- (void)voiceRecognitionPSRAnalyzer:(id)arg1 hasVoiceRecognitionInfo:(id)arg2;
- (void)voiceRecognitionPSRAnalyzerFinishedProcessing:(id)arg1 withVoiceRecognitionInfo:(id)arg2;

@end

