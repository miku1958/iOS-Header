//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSNovDetector;
@protocol CSKeywordAnalyzerNDAPIScoreDelegate;

@interface CSKeywordAnalyzerNDAPI : NSObject
{
    CSNovDetector *_novDetector;
    unsigned long long _startAnalyzeSampleCount;
    BOOL _isStartSampleCountMarked;
    unsigned long long _lastSampleFed;
    unsigned long long _sampleFedWrapAroundOffset;
    unsigned int _activePhraseId;
    unsigned long long _activeChannel;
    id<CSKeywordAnalyzerNDAPIScoreDelegate> _delegate;
}

@property (nonatomic) unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
@property (nonatomic) unsigned int activePhraseId; // @synthesize activePhraseId=_activePhraseId;
@property (weak, nonatomic) id<CSKeywordAnalyzerNDAPIScoreDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (id)_keywordAnalyzerNDAPIResultForPhraseId:(unsigned int)arg1 withNovDetectorResult:(id)arg2;
- (void)_resetStartAnalyzeTime;
- (void)_setStartAnalyzeTime:(unsigned long long)arg1;
- (void)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2;
- (void)analyzeWavFloatData:(id)arg1 numSamples:(unsigned long long)arg2;
- (id)getAnalyzedMpVtResults;
- (id)getAnalyzedResult;
- (float)getLoggingThreshold;
- (float)getRejectLoggingThreshold;
- (id)getSuperVectorWithEndPoint:(unsigned long long)arg1;
- (float)getThreshold;
- (id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2;
- (void)processAudioChunk:(id)arg1;
- (void)reset;
- (void)resetBest;

@end

