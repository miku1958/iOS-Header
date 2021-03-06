//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/_EARSpeechRecognitionResultStream-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, _EARSpeechRecognitionAudioBuffer, _EARSpeechRecognizer;
@protocol CSKeywordAnalyzerQuasarScoreDelegate, OS_dispatch_queue;

@interface CSKeywordAnalyzerQuasar : NSObject <_EARSpeechRecognitionResultStream>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_previousUtteranceTokens;
    NSArray *_triggerTokenList;
    _EARSpeechRecognizer *_recognizer;
    _EARSpeechRecognitionAudioBuffer *_recognizerBuffer;
    BOOL _useKeywordSpotting;
    NSDictionary *_ctcKwdToPhraseIdMap;
    double _triggerConfidence;
    unsigned long long _activeChannel;
    id<CSKeywordAnalyzerQuasarScoreDelegate> _delegate;
}

@property (nonatomic) unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
@property (strong, nonatomic) NSDictionary *ctcKwdToPhraseIdMap; // @synthesize ctcKwdToPhraseIdMap=_ctcKwdToPhraseIdMap;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CSKeywordAnalyzerQuasarScoreDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double triggerConfidence; // @synthesize triggerConfidence=_triggerConfidence;

- (void).cxx_destruct;
- (double)_getConfidence:(id)arg1;
- (id)_phraseIdToCtcScoreMap;
- (void)_recognizeWavData:(const short *)arg1 length:(int)arg2;
- (void)dealloc;
- (void)endAudio;
- (id)initWithConfigPath:(id)arg1 triggerTokens:(id)arg2 useKeywordSpotting:(BOOL)arg3;
- (void)processAudioChunk:(id)arg1;
- (void)reset;
- (void)runRecognition;
- (void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2;
- (void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2;
- (void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2;

@end

