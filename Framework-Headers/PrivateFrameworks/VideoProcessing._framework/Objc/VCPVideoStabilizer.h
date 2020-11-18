//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSDictionary, NSMutableArray;

@interface VCPVideoStabilizer : VCPVideoAnalyzer
{
    BOOL _gyroStabilization;
    BOOL _validStabilization;
    float _cropFraction;
    float _analysisConfidence;
    void *_analysisResultRef;
    void *_correctionResultRef;
    NSDictionary *_results;
    NSMutableArray *_motionBlurVector;
}

@property (nonatomic) float analysisConfidence; // @synthesize analysisConfidence=_analysisConfidence;
@property (nonatomic) void *analysisResultRef; // @synthesize analysisResultRef=_analysisResultRef;
@property (nonatomic) void *correctionResultRef; // @synthesize correctionResultRef=_correctionResultRef;
@property (nonatomic) float cropFraction; // @synthesize cropFraction=_cropFraction;
@property (nonatomic) BOOL gyroStabilization; // @synthesize gyroStabilization=_gyroStabilization;
@property (strong, nonatomic) NSMutableArray *motionBlurVector; // @synthesize motionBlurVector=_motionBlurVector;
@property (strong, nonatomic) NSDictionary *results; // @synthesize results=_results;
@property (nonatomic) BOOL validStabilization; // @synthesize validStabilization=_validStabilization;

+ (BOOL)saveStabilizationRecipe;
+ (id)videoStabilizerforAnalysisType:(unsigned long long)arg1 withMetadata:(id)arg2 sourceSize:(struct CGSize)arg3 cropRect:(struct CGRect)arg4;
- (void).cxx_destruct;
- (int)convertAnalysisResult;
- (void)dealloc;
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;
- (id)init;

@end
