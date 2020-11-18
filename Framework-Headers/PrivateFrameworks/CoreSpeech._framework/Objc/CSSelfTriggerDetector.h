//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSKeywordAnalyzerNDAPIScoreDelegate-Protocol.h>
#import <CoreSpeech/CSSpeechManagerDelegate-Protocol.h>

@class CSAsset, CSKeywordAnalyzerNDAPI, CSSpeechManager, NSString;
@protocol OS_dispatch_queue;

@interface CSSelfTriggerDetector : NSObject <CSKeywordAnalyzerNDAPIScoreDelegate, CSSpeechManagerDelegate>
{
    float _keywordThreshold;
    NSObject<OS_dispatch_queue> *_queue;
    CSSpeechManager *_speechManager;
    CSAsset *_currentAsset;
    CSKeywordAnalyzerNDAPI *_keywordAnalyzer;
    unsigned long long _outputAudioChannel;
}

@property (strong, nonatomic) CSAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CSKeywordAnalyzerNDAPI *keywordAnalyzer; // @synthesize keywordAnalyzer=_keywordAnalyzer;
@property (nonatomic) float keywordThreshold; // @synthesize keywordThreshold=_keywordThreshold;
@property (nonatomic) unsigned long long outputAudioChannel; // @synthesize outputAudioChannel=_outputAudioChannel;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (weak, nonatomic) CSSpeechManager *speechManager; // @synthesize speechManager=_speechManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reset;
- (void)_setAsset:(id)arg1;
- (id)initWithManager:(id)arg1 asset:(id)arg2;
- (void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)reset;
- (void)setAsset:(id)arg1;
- (void)speechManagerDidStartForwarding:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3;
- (void)speechManagerDidStopForwarding:(id)arg1 forReason:(long long)arg2;
- (void)speechManagerLPCMRecordBufferAvailable:(id)arg1 chunk:(id)arg2;
- (void)speechManagerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)start;

@end

