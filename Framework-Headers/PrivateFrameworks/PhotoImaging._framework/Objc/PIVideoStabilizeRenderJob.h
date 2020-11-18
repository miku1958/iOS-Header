//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderJob.h>

@class NSArray, NSDictionary;

@interface PIVideoStabilizeRenderJob : NURenderJob
{
    NSArray *_keyframes;
    unsigned long long _allowedAnalysisTypes;
    unsigned long long _analysisType;
    double _allowedCropFraction;
    CDUnknownBlockType _progressHandler;
    NSDictionary *_rawHomographies;
    CDStruct_996ac03c _stabCropRect;
}

@property (nonatomic) unsigned long long allowedAnalysisTypes; // @synthesize allowedAnalysisTypes=_allowedAnalysisTypes;
@property (nonatomic) double allowedCropFraction; // @synthesize allowedCropFraction=_allowedCropFraction;
@property (readonly, nonatomic) unsigned long long analysisType; // @synthesize analysisType=_analysisType;
@property (readonly, copy, nonatomic) NSArray *keyframes; // @synthesize keyframes=_keyframes;
@property (copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property (readonly, nonatomic) NSDictionary *rawHomographies; // @synthesize rawHomographies=_rawHomographies;
@property (readonly, nonatomic) CDStruct_996ac03c stabCropRect; // @synthesize stabCropRect=_stabCropRect;

- (void).cxx_destruct;
- (BOOL)prepare:(out id *)arg1;
- (id)result;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputVideo;
- (BOOL)wantsRenderStage;

@end
