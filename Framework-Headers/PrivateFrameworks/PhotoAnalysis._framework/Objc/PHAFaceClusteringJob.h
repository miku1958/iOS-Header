//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/PHAVisionServiceFaceProcessingWorkerAdditionalJob.h>

@class PHAVisionServiceFaceProcessingWorkerJobKeepAlive;

@interface PHAFaceClusteringJob : PHAVisionServiceFaceProcessingWorkerAdditionalJob
{
    PHAVisionServiceFaceProcessingWorkerJobKeepAlive *_keepAlive;
}

- (void).cxx_destruct;
- (void)_handleClusteringCompletion;
- (void)_startJobKeepAlive;
- (void)_stopJobKeepAlive;
- (float)completionScore;
- (id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(unsigned long long)arg2;
- (BOOL)startJob:(id *)arg1;
- (BOOL)stopJob:(id *)arg1;

@end

