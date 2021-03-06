//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsNaturalLanguage/IPFeatureScanner.h>

@class NSArray, NSMutableArray;

@interface IPFeatureTextMessageScanner : IPFeatureScanner
{
    BOOL _followProposal;
    NSArray *_contextMessageUnits;
    NSMutableArray *_detectedEventsInContext;
    NSMutableArray *_dataFeaturesExtractedInContextAndMain;
}

@property (strong) NSArray *contextMessageUnits; // @synthesize contextMessageUnits=_contextMessageUnits;
@property (strong, nonatomic) NSMutableArray *dataFeaturesExtractedInContextAndMain; // @synthesize dataFeaturesExtractedInContextAndMain=_dataFeaturesExtractedInContextAndMain;
@property (strong) NSMutableArray *detectedEventsInContext; // @synthesize detectedEventsInContext=_detectedEventsInContext;
@property BOOL followProposal; // @synthesize followProposal=_followProposal;

- (void).cxx_destruct;
- (id)commonComponentsForConfidence;
- (double)confidenceForEvent:(id)arg1 baseConfidence:(double)arg2;
- (void)confidenceForEvents:(id)arg1;
- (id)dataDetectorsFeaturesForMessageUnit:(id)arg1 context:(id)arg2;
- (void)doSynchronousScanWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)eventSpecificComponentsForConfidence:(id)arg1;
- (double)experimentalConfidenceForEvent:(id)arg1 experimentalBaseConfidence:(double)arg2;
- (void)experimentalConfidenceForEvents:(id)arg1;
- (id)keywordFeaturesForMessageUnit:(id)arg1;
- (unsigned long long)mainSentencePolarityFrom:(id)arg1;
- (unsigned long long)mainSentencePolarityFromMessageUnit:(id)arg1 index:(unsigned long long)arg2;
- (id)processScanOfMainMessageUnit:(id)arg1 contextMessageUnits:(id)arg2;
- (void)resetScanState;
- (void)scanEventsInMessageUnits:(id)arg1 contextMessageUnits:(id)arg2 synchronously:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)scanEventsInMessageUnits:(id)arg1 synchronously:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)sentenceFeaturesForMessageUnit:(id)arg1;

@end

