//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoProcessing/VCPVideoStabilizer.h>

@interface VCPVideoPixelStabilizer : VCPVideoStabilizer
{
    void *_analysisSessionRef;
}

- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;
- (int)convertAnalysisResult;
- (void)dealloc;
- (id)init;

@end
