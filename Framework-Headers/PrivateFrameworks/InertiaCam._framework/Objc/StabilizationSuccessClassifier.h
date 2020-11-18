//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface StabilizationSuccessClassifier : NSObject
{
    int classifierMode;
    unsigned long long subsegmentLength;
    unsigned long long subsegmentStep;
    float lastClassifierScore;
}

@property int classifierMode; // @synthesize classifierMode;
@property (readonly) float lastClassifierScore; // @synthesize lastClassifierScore;
@property unsigned long long subsegmentLength; // @synthesize subsegmentLength;
@property unsigned long long subsegmentStep; // @synthesize subsegmentStep;

- (void)AddStats:(struct StabStatsRecord *)arg1 toDict:(id)arg2 withBaseName:(id)arg3;
- (id)applyClassifierToOverlappedSegments:(vector_87633213 *)arg1 withCoefficientsDict:(id)arg2 movieSize:(struct Int32Size)arg3 firstIndex:(int)arg4 lastIndex:(int)arg5 stride:(int)arg6 length:(int)arg7 result:(float *)arg8 verbose:(BOOL)arg9 minThreshold:(float)arg10;
- (float)calcLogisticForStats:(id)arg1 paramsForStats:(id)arg2 error:(id *)arg3;
- (id)calcStatsDictForArray:(id)arg1 withKey:(id)arg2 firstIndex:(int)arg3 lastIndex:(int)arg4 usingTempStorage:(vector_8f06c10f *)arg5 outErr:(id *)arg6;
- (id)classifySequentialAnalysisSuccess:(vector_87633213 *)arg1 movieSize:(struct Int32Size)arg2 precalcedFeatures:(id)arg3 result:(float *)arg4;
- (id)getDefaultParamDict;
- (id)getSequentialAnalysisCoeffsDict;
- (id)getSequentialParamDict;
- (id)getTripodCorrectionParamDict;
- (id)init;
- (id)statsDictFromFrameArray:(id)arg1 firstIndex:(int)arg2 lastIndex:(int)arg3 errorOut:(id *)arg4;
- (BOOL)testForHomographies:(const vector_87633213 *)arg1 movieSize:(struct Int32Size)arg2 firstIndex:(int)arg3 lastIndex:(int)arg4 scoreThreshold:(float)arg5 errorOut:(id *)arg6 verbose:(BOOL)arg7;

@end
