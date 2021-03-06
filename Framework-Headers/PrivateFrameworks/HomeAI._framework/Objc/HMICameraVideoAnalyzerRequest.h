//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/HMICameraVideoFrameSelectorDelegate-Protocol.h>
#import <HomeAI/HMIVideoEncoderDelegate-Protocol.h>
#import <HomeAI/HMIVideoFrameSamplerDelegate-Protocol.h>
#import <HomeAI/HMIVideoRetimerDelegate-Protocol.h>

@class HMICameraVideoAnalyzer, HMICameraVideoAssetReader, HMICameraVideoFragment, HMICameraVideoFrameSelector, HMICameraVideoPosterFrameGenerator, HMICameraVideoResourceAttributes, HMIVideoAssetWriter, HMIVideoEncoder, HMIVideoFrameSampler, HMIVideoRetimer, NSArray, NSDate, NSMutableArray, NSString;

@interface HMICameraVideoAnalyzerRequest : HMFObject <HMIVideoEncoderDelegate, HMIVideoRetimerDelegate, HMIVideoFrameSamplerDelegate, HMICameraVideoFrameSelectorDelegate, HMFLogging>
{
    NSDate *_analysisSubmissionTime;
    NSDate *_analysisStartTime;
    double _maxAnalysisFPS;
    double _analysisFPS;
    HMICameraVideoFragment *_fragment;
    HMICameraVideoResourceAttributes *_attributes;
    HMIVideoEncoder *_encoder;
    HMIVideoRetimer *_retimer;
    HMIVideoFrameSampler *_frameSampler;
    NSMutableArray *_audioSamples;
    HMIVideoAssetWriter *_assetWriter;
    HMICameraVideoPosterFrameGenerator *_posterFrameGenerator;
    HMICameraVideoFrameSelector *_frameSelector;
    HMICameraVideoAssetReader *_assetReader;
    HMICameraVideoAnalyzer *_analyzer;
    long long _eventTypes;
    NSMutableArray *_videoFrameResults;
    NSMutableArray *_significantEventsInternal;
    long long _phase;
    long long _flag;
}

@property (readonly) double analysisFPS; // @synthesize analysisFPS=_analysisFPS;
@property (readonly) NSDate *analysisStartTime; // @synthesize analysisStartTime=_analysisStartTime;
@property (readonly) NSDate *analysisSubmissionTime; // @synthesize analysisSubmissionTime=_analysisSubmissionTime;
@property (readonly) HMICameraVideoAnalyzer *analyzer; // @synthesize analyzer=_analyzer;
@property (readonly) HMICameraVideoAssetReader *assetReader; // @synthesize assetReader=_assetReader;
@property (readonly) HMIVideoAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property (readonly) HMICameraVideoResourceAttributes *attributes; // @synthesize attributes=_attributes;
@property (readonly) NSMutableArray *audioSamples; // @synthesize audioSamples=_audioSamples;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMIVideoEncoder *encoder; // @synthesize encoder=_encoder;
@property (readonly) long long eventTypes; // @synthesize eventTypes=_eventTypes;
@property long long flag; // @synthesize flag=_flag;
@property (readonly) HMICameraVideoFragment *fragment; // @synthesize fragment=_fragment;
@property (readonly) HMIVideoFrameSampler *frameSampler; // @synthesize frameSampler=_frameSampler;
@property (readonly) HMICameraVideoFrameSelector *frameSelector; // @synthesize frameSelector=_frameSelector;
@property (readonly) unsigned long long hash;
@property (readonly) double maxAnalysisFPS; // @synthesize maxAnalysisFPS=_maxAnalysisFPS;
@property long long phase; // @synthesize phase=_phase;
@property (readonly) HMICameraVideoPosterFrameGenerator *posterFrameGenerator; // @synthesize posterFrameGenerator=_posterFrameGenerator;
@property (readonly) HMIVideoRetimer *retimer; // @synthesize retimer=_retimer;
@property (readonly) BOOL shouldFailAnalysis;
@property (readonly) BOOL shouldSkipAnalysis;
@property (readonly) NSArray *significantEvents;
@property (readonly) NSMutableArray *significantEventsInternal; // @synthesize significantEventsInternal=_significantEventsInternal;
@property (readonly) Class superclass;
@property (readonly) double timeSinceAnalysisStart;
@property (readonly) double timeSinceAnalysisSubmission;
@property (strong) NSMutableArray *videoFrameResults; // @synthesize videoFrameResults=_videoFrameResults;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)addSignificantEvent:(id)arg1;
- (void)cancel;
- (void)encoder:(id)arg1 didEncodeSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)encoder:(id)arg1 didFailWithError:(id)arg2;
- (id)finishEncoderSession;
- (void)frameSampler:(id)arg1 didSampleFrame:(struct opaqueCMSampleBuffer *)arg2;
- (id)initWithVideoFragment:(id)arg1 analyzer:(id)arg2 maxAnalysisFPS:(double)arg3;
- (void)loadAttributes;
- (id)loadAttributesFromVideoFragment:(id)arg1;
- (id)logIdentifier;
- (id)makeDidAnalyzeResult;
- (id)makeDidNotAnalyzeResultWithResultCode:(long long)arg1;
- (void)markForPrediction;
- (void)retimer:(id)arg1 didRetimeSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)selector:(id)arg1 didDetectMotion:(id)arg2 atSessionPTS:(CDStruct_1b6d18a9)arg3 frameDimensions:(struct CGSize)arg4;
- (void)selector:(id)arg1 maySelectFrame:(id)arg2;
- (void)startAnalysis;
- (BOOL)startAssetReaderWithWorkQueue:(id)arg1 logIdentifier:(id)arg2;
- (BOOL)startEncodingSessionForAsset:(id)arg1 expectedFrameRate:(long long)arg2 error:(id *)arg3;
- (BOOL)startFrameSelector;
- (BOOL)startPosterFrameGeneratorWithInterval:(unsigned long long)arg1 frameHeight:(unsigned long long)arg2;

@end

